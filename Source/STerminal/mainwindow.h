#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "ui_mainwindow.h"
#include "AsyncSerial.h"
#include "QAsyncSerial.h"
#include <QDateTime>
#include <QFileDialog>
#include <QTimer>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <iterator>
#include <string>

namespace Ui{
	class mainwindow;
}

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~mainwindow();
	QAsyncSerial newport;
	QStringList list1;
	QTime timestamp;
	std::ofstream fout;
	std::string timestring;
	int file_setup;
	bool include_timestamp;
	bool datalog;
	bool clock;
	float maxs[6], mins[3], news[6];
	QStringList qmaxs;
	QStringList qmins;
	char spacing[4];
	QFileDialog qfile;
	QString filesname;

	//sets the initial label values for the max and mins to 0.00
	void initialize_maxmins();

private:
	Ui::mainwindowClass ui;

	//This function takes the received information and splits it up into a list.
	void parse_data(QString data);
	
	//initializes the elements of spacing[]
	void initialize_spacing();

	//Updates the labels for the GUI
	void update_display();
	
	//enables the checkboxes and comboxes for the GUI
	void enable_interfaces();
	
	//disables the checkboxes and comboxes for the GUI
	void disable_interfaces();

public slots:

	//opens and closes the selected serial port and opens and closes the datalog text fiel if selected
	void on_pushButton_clicked();

	//gets the current system time
	void get_time();
	
	//cuts the list of COM ports in the combo box down to the available ones
	void try_receive();
	
	//called when a new line is received
	//if needed it will format the text and store it to a .txt file
	void onlineReceived(QString data);
	
	//triggers the text file option checkboxes based on the state of the "save as .txt" checkbox
	void checkbox_enables();
	
	//opens up the "save As.." dialog window
	void file_name();
};

#endif // MAINWINDOW_H
