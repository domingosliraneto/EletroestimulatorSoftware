/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
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
    QGridLayout *gridLayout_3;
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
    QTextEdit *textEdit_2;
    QLabel *label_10;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_12;
    QLabel *label_11;
    QTextEdit *textEdit_3;
    QLabel *label_13;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QLineEdit *gMax;
    QLabel *label_19;
    QLineEdit *pitchMax;
    QLabel *label_22;
    QLineEdit *rollMax;
    QLabel *label_15;
    QLineEdit *gMin;
    QLabel *label_18;
    QLineEdit *pitchMin;
    QLabel *label_24;
    QLineEdit *rollMin;
    QLabel *label_17;
    QLineEdit *gRefMax;
    QLabel *label_20;
    QLineEdit *pitchRefMax;
    QLabel *label_25;
    QLineEdit *rollRefMax;
    QLabel *label_16;
    QLineEdit *gRefMin;
    QLabel *label_21;
    QLineEdit *pitchRefMin;
    QLabel *label_23;
    QLineEdit *rollRefMin;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(758, 387);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
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

        textEdit_2 = new QTextEdit(tab_3);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout_4->addWidget(textEdit_2, 2, 1, 1, 3);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 0, 3, 1, 1);

        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_4->addWidget(textEdit, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 3, 0, 1, 5);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_4->addWidget(pushButton_4, 4, 0, 1, 5);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 4, 1, 1);

        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        gridLayout_4->addWidget(textEdit_3, 2, 4, 1, 1);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        gMax = new QLineEdit(tab_4);
        gMax->setObjectName(QString::fromUtf8("gMax"));

        gridLayout_5->addWidget(gMax, 0, 1, 1, 1);

        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 0, 2, 1, 1);

        pitchMax = new QLineEdit(tab_4);
        pitchMax->setObjectName(QString::fromUtf8("pitchMax"));

        gridLayout_5->addWidget(pitchMax, 0, 3, 1, 1);

        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_5->addWidget(label_22, 0, 4, 1, 1);

        rollMax = new QLineEdit(tab_4);
        rollMax->setObjectName(QString::fromUtf8("rollMax"));

        gridLayout_5->addWidget(rollMax, 0, 5, 1, 1);

        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        gMin = new QLineEdit(tab_4);
        gMin->setObjectName(QString::fromUtf8("gMin"));

        gridLayout_5->addWidget(gMin, 1, 1, 1, 1);

        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 1, 2, 1, 1);

        pitchMin = new QLineEdit(tab_4);
        pitchMin->setObjectName(QString::fromUtf8("pitchMin"));

        gridLayout_5->addWidget(pitchMin, 1, 3, 1, 1);

        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_5->addWidget(label_24, 1, 4, 1, 1);

        rollMin = new QLineEdit(tab_4);
        rollMin->setObjectName(QString::fromUtf8("rollMin"));

        gridLayout_5->addWidget(rollMin, 1, 5, 1, 1);

        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 2, 0, 1, 1);

        gRefMax = new QLineEdit(tab_4);
        gRefMax->setObjectName(QString::fromUtf8("gRefMax"));

        gridLayout_5->addWidget(gRefMax, 2, 1, 1, 1);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 2, 2, 1, 1);

        pitchRefMax = new QLineEdit(tab_4);
        pitchRefMax->setObjectName(QString::fromUtf8("pitchRefMax"));

        gridLayout_5->addWidget(pitchRefMax, 2, 3, 1, 1);

        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_5->addWidget(label_25, 2, 4, 1, 1);

        rollRefMax = new QLineEdit(tab_4);
        rollRefMax->setObjectName(QString::fromUtf8("rollRefMax"));

        gridLayout_5->addWidget(rollRefMax, 2, 5, 1, 1);

        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 3, 0, 1, 1);

        gRefMin = new QLineEdit(tab_4);
        gRefMin->setObjectName(QString::fromUtf8("gRefMin"));

        gridLayout_5->addWidget(gRefMin, 3, 1, 1, 1);

        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 3, 2, 1, 1);

        pitchRefMin = new QLineEdit(tab_4);
        pitchRefMin->setObjectName(QString::fromUtf8("pitchRefMin"));

        gridLayout_5->addWidget(pitchRefMin, 3, 3, 1, 1);

        label_23 = new QLabel(tab_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_5->addWidget(label_23, 3, 4, 1, 1);

        rollRefMin = new QLineEdit(tab_4);
        rollRefMin->setObjectName(QString::fromUtf8("rollRefMin"));

        gridLayout_5->addWidget(rollRefMin, 3, 5, 1, 1);

        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_5->addWidget(pushButton_5, 4, 1, 1, 4);

        tabWidget->addTab(tab_4, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 758, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        controlType->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "192.168.4.1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Porta", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "4000", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Conex\303\243o", nullptr));
        channel->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        channel->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        channel->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        channel->setItemText(3, QCoreApplication::translate("MainWindow", "3", nullptr));

        powerLevel->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        controlType->setItemText(0, QCoreApplication::translate("MainWindow", "Stop", nullptr));
        controlType->setItemText(1, QCoreApplication::translate("MainWindow", "Refresh", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Channel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
        Modes->setItemText(0, QCoreApplication::translate("MainWindow", "Burst", nullptr));
        Modes->setItemText(1, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        Modes->setItemText(2, QCoreApplication::translate("MainWindow", "Modulation", nullptr));
        Modes->setItemText(3, QCoreApplication::translate("MainWindow", "Sd1", nullptr));
        Modes->setItemText(4, QCoreApplication::translate("MainWindow", "Sd2", nullptr));

        frequency->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        period->setText(QCoreApplication::translate("MainWindow", "250", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Modes", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Control Type", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Period", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Power Level (0-100)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Controle", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Output Signal", nullptr));
        label_10->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">50</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Collect Output Signal", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Save Data", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Input Signal", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Time Lapsed", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Accel_x,  pitch_angle, Roll_angle", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Identifica\303\247\303\243o", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Max Measured Gravity", nullptr));
        gMax->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Max Measured Pitch", nullptr));
        pitchMax->setText(QCoreApplication::translate("MainWindow", "90", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Max Measured Roll", nullptr));
        rollMax->setText(QCoreApplication::translate("MainWindow", "90", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Min Measured Gravity", nullptr));
        gMin->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Min Measured Pitch", nullptr));
        pitchMin->setText(QCoreApplication::translate("MainWindow", "-90", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Min Measured Roll", nullptr));
        rollMin->setText(QCoreApplication::translate("MainWindow", "-90", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Max Reference Gravity", nullptr));
        gRefMax->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Max Reference Pitch", nullptr));
        pitchRefMax->setText(QCoreApplication::translate("MainWindow", "90", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Max Reference Roll", nullptr));
        rollRefMax->setText(QCoreApplication::translate("MainWindow", "90", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Min Reference Gravity", nullptr));
        gRefMin->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Min Reference Pitch", nullptr));
        pitchRefMin->setText(QCoreApplication::translate("MainWindow", "-90", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Min Reference Roll", nullptr));
        rollRefMin->setText(QCoreApplication::translate("MainWindow", "-90", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Set Measurement Adjustment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Software Adjustment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
