/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QComboBox *channel;
    QLineEdit *powerLevel;
    QComboBox *controlType;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QComboBox *Modes;
    QLineEdit *frequency;
    QLabel *label_6;
    QLineEdit *period;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QTextEdit *textEdit_3;
    QLabel *label_12;
    QTextEdit *textEdit;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_15;
    QLineEdit *minLimit;
    QComboBox *channel_2;
    QComboBox *boostCalibration;
    QLabel *label_14;
    QLabel *label_13;
    QLineEdit *maxLimit;
    QTextEdit *textEdit_4;
    QLabel *label_16;
    QTextEdit *textEdit_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_3;
    QLabel *label_19;
    QLineEdit *lineEdit_4;
    QLabel *label_20;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(911, 450);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(9, 9, 893, 371));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        channel = new QComboBox(tab_2);
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->setObjectName(QString::fromUtf8("channel"));

        gridLayout_2->addWidget(channel, 0, 6, 1, 2);

        powerLevel = new QLineEdit(tab_2);
        powerLevel->setObjectName(QString::fromUtf8("powerLevel"));

        gridLayout_2->addWidget(powerLevel, 3, 7, 1, 1);

        controlType = new QComboBox(tab_2);
        controlType->addItem(QString());
        controlType->addItem(QString());
        controlType->setObjectName(QString::fromUtf8("controlType"));
        controlType->setToolTipDuration(-1);

        gridLayout_2->addWidget(controlType, 0, 3, 1, 2);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 4, 3, 1, 4);

        Modes = new QComboBox(tab_2);
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->setObjectName(QString::fromUtf8("Modes"));

        gridLayout_2->addWidget(Modes, 1, 3, 1, 2);

        frequency = new QLineEdit(tab_2);
        frequency->setObjectName(QString::fromUtf8("frequency"));

        gridLayout_2->addWidget(frequency, 1, 6, 1, 2);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 5, 1, 1);

        period = new QLineEdit(tab_2);
        period->setObjectName(QString::fromUtf8("period"));

        gridLayout_2->addWidget(period, 3, 1, 1, 4);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 3);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 5, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 0, 1, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_4->addWidget(pushButton_4, 3, 0, 1, 4);

        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        gridLayout_4->addWidget(textEdit_3, 1, 3, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_4->addWidget(textEdit, 1, 0, 1, 1);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 2, 0, 1, 4);

        textEdit_2 = new QTextEdit(tab_3);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout_4->addWidget(textEdit_2, 1, 1, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 0, 6, 1, 1);

        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 0, 0, 1, 1);

        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 0, 4, 1, 1);

        minLimit = new QLineEdit(tab_4);
        minLimit->setObjectName(QString::fromUtf8("minLimit"));

        gridLayout_3->addWidget(minLimit, 0, 3, 1, 1);

        channel_2 = new QComboBox(tab_4);
        channel_2->addItem(QString());
        channel_2->addItem(QString());
        channel_2->addItem(QString());
        channel_2->addItem(QString());
        channel_2->setObjectName(QString::fromUtf8("channel_2"));

        gridLayout_3->addWidget(channel_2, 0, 7, 1, 1);

        boostCalibration = new QComboBox(tab_4);
        boostCalibration->addItem(QString());
        boostCalibration->setObjectName(QString::fromUtf8("boostCalibration"));

        gridLayout_3->addWidget(boostCalibration, 0, 1, 1, 1);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 1, 2, 1, 3);

        maxLimit = new QLineEdit(tab_4);
        maxLimit->setObjectName(QString::fromUtf8("maxLimit"));

        gridLayout_3->addWidget(maxLimit, 0, 5, 1, 1);

        textEdit_4 = new QTextEdit(tab_4);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

        gridLayout_3->addWidget(textEdit_4, 2, 2, 1, 5);

        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 0, 2, 1, 1);

        textEdit_5 = new QTextEdit(tab_4);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));

        gridLayout_3->addWidget(textEdit_5, 2, 0, 1, 2);

        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 4, 1, 1, 5);

        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 5, 5, 1, 1);

        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 5, 1, 1, 1);

        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 5, 0, 1, 1);

        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 5, 3, 1, 2);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 5, 2, 1, 1);

        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);
        controlType->setCurrentIndex(1);
        pushButton_5->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "IP", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "192.168.4.1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Porta", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "4000", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Conex\303\243o", nullptr));
        channel->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        channel->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        channel->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        channel->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));

        powerLevel->setText(QApplication::translate("MainWindow", "50", nullptr));
        controlType->setItemText(0, QApplication::translate("MainWindow", "Stop", nullptr));
        controlType->setItemText(1, QApplication::translate("MainWindow", "Refresh", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Channel", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Configure", nullptr));
        Modes->setItemText(0, QApplication::translate("MainWindow", "Burst", nullptr));
        Modes->setItemText(1, QApplication::translate("MainWindow", "Normal", nullptr));
        Modes->setItemText(2, QApplication::translate("MainWindow", "Modulation", nullptr));
        Modes->setItemText(3, QApplication::translate("MainWindow", "Sd1", nullptr));
        Modes->setItemText(4, QApplication::translate("MainWindow", "Sd2", nullptr));

        frequency->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Frequency", nullptr));
        period->setText(QApplication::translate("MainWindow", "250", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Modes", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Control Type", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Period", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Power Level (0-100)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Controle", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Output Signal", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Time Lapsed", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Save Data", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Input Signal", nullptr));
        label_10->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Collect Output Signal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Identifica\303\247\303\243o Angle", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Channel", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Exitation Type", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Max Limit", nullptr));
        minLimit->setText(QApplication::translate("MainWindow", "10", nullptr));
        channel_2->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        channel_2->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        channel_2->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        channel_2->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));

        boostCalibration->setItemText(0, QApplication::translate("MainWindow", "squaredWaveExitationLoop", nullptr));

        label_14->setText(QApplication::translate("MainWindow", "Input Signal", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Output Signal", nullptr));
        maxLimit->setText(QApplication::translate("MainWindow", "40", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Min Limit", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Start Calibration Process", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Calculate Transfer Function", nullptr));
        lineEdit_3->setText(QApplication::translate("MainWindow", "0.51987", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "numerator", nullptr));
        lineEdit_4->setText(QApplication::translate("MainWindow", "1,-0.949896", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "denominator", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Boost Calibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
