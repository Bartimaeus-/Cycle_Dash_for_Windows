/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Dec 9 09:13:17 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QAction *actionRefresh;
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_21;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_25;
    QLabel *label_28;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_29;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_33;
    QLabel *label_34;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QString::fromUtf8("mainwindowClass"));
        mainwindowClass->resize(359, 358);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mainwindow/clipper_dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainwindowClass->setWindowIcon(icon);
        mainwindowClass->setWindowOpacity(1);
        actionRefresh = new QAction(mainwindowClass);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 340, 299));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Fixedsys"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_11->addLayout(horizontalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_7->addWidget(label_21);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_7->addWidget(label_22);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_25 = new QLabel(widget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_8->addWidget(label_25);

        label_28 = new QLabel(widget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_8->addWidget(label_28);


        verticalLayout_5->addLayout(horizontalLayout_8);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_29 = new QLabel(widget);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_9->addWidget(label_29);

        label_30 = new QLabel(widget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_9->addWidget(label_30);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_33 = new QLabel(widget);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_10->addWidget(label_33);

        label_34 = new QLabel(widget);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_10->addWidget(label_34);


        verticalLayout_5->addLayout(horizontalLayout_10);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_6->addWidget(label_14);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_6->addWidget(label_16);


        verticalLayout_5->addLayout(horizontalLayout_6);


        horizontalLayout_11->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_4->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);

        horizontalLayout_4->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_4->addWidget(checkBox_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_12->addWidget(label_11);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_12->addWidget(comboBox_2);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoDefault(true);
        pushButton->setDefault(true);

        horizontalLayout->addWidget(pushButton);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_4);

        mainwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 359, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        mainwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mainwindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionRefresh);

        retranslateUi(mainwindowClass);
        QObject::connect(checkBox, SIGNAL(clicked()), mainwindowClass, SLOT(checkbox_enables()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), mainwindowClass, SLOT(file_name()));
        QObject::connect(actionRefresh, SIGNAL(triggered()), mainwindowClass, SLOT(try_receive()));

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QApplication::translate("mainwindowClass", "Cycle Dash for Windows", 0, QApplication::UnicodeUTF8));
        actionRefresh->setText(QApplication::translate("mainwindowClass", "Refresh", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mainwindowClass", "-.----", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("mainwindowClass", "-.----", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("mainwindowClass", "-.----", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("mainwindowClass", "-.----", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("mainwindowClass", "-.---- ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("mainwindowClass", "Ah", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("mainwindowClass", "V", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("mainwindowClass", "A", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("mainwindowClass", "s", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("mainwindowClass", "D", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("mainwindowClass", "Max Voltage:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QString());
        label_25->setText(QApplication::translate("mainwindowClass", "Min Voltage:", 0, QApplication::UnicodeUTF8));
        label_28->setText(QString());
        label_29->setText(QApplication::translate("mainwindowClass", "Max Amps:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QString());
        label_33->setText(QApplication::translate("mainwindowClass", "Min Amps:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QString());
        label_13->setText(QApplication::translate("mainwindowClass", "Max Speed:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());
        label_14->setText(QApplication::translate("mainwindowClass", "Min Speed:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        checkBox->setText(QApplication::translate("mainwindowClass", "Save as .txt file", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("mainwindowClass", "Include Timestamp", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("mainwindowClass", "Include Clock Time", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("mainwindowClass", "Save As...", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QString());
        label_11->setText(QApplication::translate("mainwindowClass", "Seperate Elements With:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("mainwindowClass", "Tabs (Default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "Commas ,", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "Spaces", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "Semicolons ;", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("mainwindowClass", "Connect", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("mainwindowClass", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mainwindowClass", "COM12", 0, QApplication::UnicodeUTF8)
        );
        menuFile->setTitle(QApplication::translate("mainwindowClass", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
