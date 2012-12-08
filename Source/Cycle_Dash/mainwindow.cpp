#include "mainwindow.h"
#include "ui_mainwindow.h"

mainwindow::mainwindow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	//QTimer *timer = new QTimer(this);
	//connect(timer, SIGNAL(timeout()), this, SLOT(try_receive()));
	connect(&newport,SIGNAL(lineReceived(QString)),
		this,SLOT(onlineReceived(QString)));
	//timer->start(250);
	mainwindow::try_receive();
	mainwindow::initialize_maxmins();
	initialize_spacing();
	checkbox_enables();
}

mainwindow::~mainwindow()
{
	//delete ui;
}

//opens and closes the selected serial port and opens and closes the datalog text fiel if selected
void mainwindow::on_pushButton_clicked(){
	if(newport.isOpen()){
		newport.close();
		ui.pushButton->setText("Connect");
		enable_interfaces();
		timestamp.restart();
		fout.close();
	}
	else{
		disable_interfaces();
		std::string filename;
		//size_t found;
		file_setup = 0;
		newport.open(ui.comboBox->currentText(), 9600);
		if(!(newport.isOpen()) || newport.errorStatus()) return;
		ui.pushButton->setText("Disconnect");
		if(ui.checkBox_2->isChecked()) include_timestamp = true;
		else include_timestamp = false;
		if(ui.checkBox->isChecked()){
			datalog = true;
			file_setup = 1;
			std::string zx = (ui.lineEdit->text()).toStdString();
			//found = filename.find(".txt");
			filename = filesname.toStdString();
			if((filename.find(zx) == std::string::npos)){
				if((zx.find(".txt"))!=std::string::npos) fout.open(zx.c_str(), std::ios::app);
				else fout.open((zx + ".txt").c_str(), std::ios::app);
			}
			
			else{
				if((filename.find(".txt"))!=std::string::npos) fout.open(filename.c_str(), std::ios::app);
				else fout.open((filename + ".txt").c_str(), std::ios::app);
			}
			
		}
		else datalog = false;
		if(ui.checkBox_3->isChecked()) clock = true;
		else clock = false;
		
	}
	//	ui.label->setText("Clicked");
	//	newport.open("COM4", 9600);
	}

//opens up the "save As.." dialog window
void mainwindow::file_name(){
	//QString QFileDialog::getSaveFileName();
	//qfile.getSaveFileName();
	filesname = qfile.getSaveFileName(this, tr("Save"),"C:\ ", tr("Text files (*.txt)"));
	QStringList temp;
	temp = (filesname).split("/");
	
	ui.lineEdit->setText(temp[((temp.size()-1))]);//////////////////

	//ui.lineEdit->setText(qfile.getSaveFileName(this, tr("Save"),"C:\ ", tr("Text files (*.txt)")));
}

//triggers the text file option checkboxes based on the state of the "save as .txt" checkbox
void mainwindow::checkbox_enables(){
	if(ui.checkBox->isChecked()){
		ui.checkBox_2->setEnabled(true);
		ui.checkBox_3->setEnabled(true);
		ui.pushButton_2->setEnabled(true);
		ui.lineEdit->setEnabled(true);
		ui.lineEdit->setEnabled(true);
		ui.comboBox_2->setEnabled(true);
	}
	else{
		ui.checkBox_2->setEnabled(false);
		ui.checkBox_3->setEnabled(false);
		ui.pushButton_2->setEnabled(false);
		ui.lineEdit->setEnabled(false);
		ui.lineEdit->setEnabled(false);
		ui.comboBox_2->setEnabled(false);
	}
}

//enables the checkboxes and comboxes for the GUI
void mainwindow::enable_interfaces(){
	ui.comboBox->setEnabled(true);
	ui.comboBox_2->setEnabled(true);
	ui.checkBox->setEnabled(true);
	if((ui.checkBox->isChecked())){
		ui.checkBox_2->setEnabled(true);
		ui.checkBox_3->setEnabled(true);
	}
	ui.lineEdit->setEnabled(true);

}

//disables the checkboxes and comboxes for the GUI
void mainwindow::disable_interfaces(){
	ui.comboBox->setEnabled(false);
	ui.comboBox_2->setEnabled(false);
	ui.checkBox->setEnabled(false);
	ui.checkBox_2->setEnabled(false);
	ui.checkBox_3->setEnabled(false);
	ui.lineEdit->setEnabled(false);

}

//gets the current system time
void mainwindow::get_time(){
	QTime time = QTime::currentTime();
	QString timeString = time.toString();
	//ui.label_11->setText("Time: " + timeString);
}

//cuts the list of COM ports in the combo box down to the available ones
void mainwindow::try_receive(){
	int count;
	//int elements = (ui.comboBox->count());
	QString com = "COM1,COM2,COM3,COM4,COM5,COM6,COM7,COM8,COM9,COM10,COM11,COM12";
	QStringList ports = com.split(",");
	if ((ui.comboBox->count())<12) {
		ui.comboBox->clear();
		ui.comboBox->addItems(ports);
	}
	

	for(count = 0; count < ports.size(); count++){
		newport.open(ports[count], 9600);
		if(!(newport.isOpen()) || newport.errorStatus()) ui.comboBox->removeItem((ui.comboBox->findText(ports[count])));
		newport.close();
	}
}

//sets the initial label values for the max and mins to 0.00
void mainwindow::initialize_maxmins(){
		int count;
	QString initial_values = "0.00,0.00,0.00,0.00,0.00,0.00";
	qmaxs = initial_values.split(",");
	qmins = initial_values.split(",");
	for(count=0;count<6;count++){//initialize the max and min arrays
		mins[count]=999.999;
		maxs[count]=0.0;
		
	}
}

//called when a new line is received
//if needed it will format the text and store it to a .txt file
void mainwindow::onlineReceived(QString data){
	int y;
	parse_data(data);
	if(datalog){
		QString times = list1[0] + (spacing[(ui.comboBox_2->currentIndex())]) + list1[1] + (spacing[(ui.comboBox_2->currentIndex())]) + list1[2] + (spacing[(ui.comboBox_2->currentIndex())]) + list1[3] + (spacing[(ui.comboBox_2->currentIndex())]) + list1[4];
		if(include_timestamp){
			int millisecs;
			if(file_setup){
				timestamp.start();
				millisecs = 0;
				file_setup = 0;
			}
			else millisecs = timestamp.elapsed();
			int secs = millisecs / 1000;
			int mins = (secs / 60) % 60;
			int hours = (secs / 3600);
			secs = secs % 60;
			millisecs = millisecs - ((secs*1000) + (mins*60000) + (hours*3600000));
			if (millisecs < 100){
				millisecs = millisecs*10;
			}
			//QString times = data +"	" + QString("%1:%2:%3.%4")
			times = times + (spacing[(ui.comboBox_2->currentIndex())]) + QString("%1:%2:%3.%4")
			.arg(hours, 2, 10, QLatin1Char('0'))
			.arg(mins, 2, 10, QLatin1Char('0'))
			.arg(secs, 2, 10, QLatin1Char('0'))
			.arg(millisecs, 2, 10, QLatin1Char('0'));
			//ui.label_11->setText(times);
			timestring =  times.toStdString();
			if(clock) {
				//QString temp = (QTime::currentTime()).toString();
				//std::string tempstring = temp.toStdString();
				timestring = timestring + (spacing[(ui.comboBox_2->currentIndex())]) +(((QTime::currentTime()).toString()).toStdString()); //+ tempstring
			}
			fout << timestring <<std::endl;
		}
		else if(clock) {
				timestring = times.toStdString();
				QTime time = QTime::currentTime();
				QString temp = time.toString();
				std::string tempstring = temp.toStdString();
				timestring = timestring + (spacing[(ui.comboBox_2->currentIndex())]) + tempstring;
				fout << timestring <<std::endl;
			}
		
		else fout << (times.toStdString()) << std::endl;
		
		
	}
	update_display();
	list1.clear();
}


//Updates the labels for the GUI
void mainwindow::update_display(){
	int y;
	if((list1.size()==5)){
		ui.label->setText(list1[0]);
		ui.label_3->setText(list1[1]);
		ui.label_2->setText(list1[2]);
		ui.label_4->setText(list1[3]);
		ui.label_5->setText(list1[4]);
		for(y=0;y<list1.size();y++){
			if ((list1[y].toFloat())>(maxs[y])){
				maxs[y]=(list1[y].toFloat());
				qmaxs.replace(y,list1[y]);

			}
			if ((list1[y].toFloat())<(mins[y])){
				mins[y]=(list1[y].toFloat());
				qmins.replace(y,list1[y]);
			}
		}
		ui.label_15->setText(qmaxs[3]); //max speed value
		ui.label_16->setText(qmins[3]); //min speed value
		ui.label_22->setText(qmaxs[2]); //max voltage value
		ui.label_28->setText(qmins[2]); //min voltage value
		ui.label_30->setText(qmaxs[1]); //max amp value
		ui.label_34->setText(qmins[1]); //min amp value
	}
	else ui.label->setText("error");
}



//This function takes the received information and splits it up into a list.
//if splitting by tabs doesn't work, it will try to split it by spaces instead
//if that doesn't work, it will try to split it with commas instead
//if that doesn't work, it will try to split it with semicolons instead
void mainwindow::parse_data(QString data){
	list1 = data.split("	");
	if((list1.size()!=5)){
		list1.clear();
		list1 = data.split(" ");
	}
	if((list1.size()!=5)){
		list1.clear();
		list1 = data.split(",");
	}
	if((list1.size()!=5)){
		list1.clear();
		list1 = data.split(";");
	}
}





//initializes the elements of spacing[]
void mainwindow::initialize_spacing(){
	spacing[0] = '	';
	spacing[1] = ',';
	spacing[2] = ' ';
	spacing[3] = ';';

}