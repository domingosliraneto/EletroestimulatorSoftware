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
    QLineEdit *powerLevel;
    QComboBox *channel;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *period;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_5;
    QComboBox *Modes;
    QComboBox *controlType;
    QLineEdit *frequency;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
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
        powerLevel = new QLineEdit(tab_2);
        powerLevel->setObjectName(QString::fromUtf8("powerLevel"));

        gridLayout_2->addWidget(powerLevel, 3, 7, 1, 1);

        channel = new QComboBox(tab_2);
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->addItem(QString());
        channel->setObjectName(QString::fromUtf8("channel"));

        gridLayout_2->addWidget(channel, 0, 6, 1, 2);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 5, 1, 1);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 5, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        period = new QLineEdit(tab_2);
        period->setObjectName(QString::fromUtf8("period"));

        gridLayout_2->addWidget(period, 3, 1, 1, 4);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 5, 1, 2);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 3);

        Modes = new QComboBox(tab_2);
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->addItem(QString());
        Modes->setObjectName(QString::fromUtf8("Modes"));

        gridLayout_2->addWidget(Modes, 1, 3, 1, 2);

        controlType = new QComboBox(tab_2);
        controlType->addItem(QString());
        controlType->addItem(QString());
        controlType->setObjectName(QString::fromUtf8("controlType"));
        controlType->setToolTipDuration(-1);

        gridLayout_2->addWidget(controlType, 0, 3, 1, 2);

        frequency = new QLineEdit(tab_2);
        frequency->setObjectName(QString::fromUtf8("frequency"));

        gridLayout_2->addWidget(frequency, 1, 6, 1, 2);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 4, 4, 1, 3);

        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
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
        powerLevel->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        channel->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        channel->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        channel->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        channel->setItemText(3, QCoreApplication::translate("MainWindow", "3", nullptr));
        channel->setItemText(4, QCoreApplication::translate("MainWindow", "4", nullptr));
        channel->setItemText(5, QCoreApplication::translate("MainWindow", "5", nullptr));
        channel->setItemText(6, QCoreApplication::translate("MainWindow", "6", nullptr));
        channel->setItemText(7, QCoreApplication::translate("MainWindow", "7", nullptr));
        channel->setItemText(8, QCoreApplication::translate("MainWindow", "8", nullptr));
        channel->setItemText(9, QCoreApplication::translate("MainWindow", "9", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Channel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Period", nullptr));
        period->setText(QCoreApplication::translate("MainWindow", "250", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Control Type", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Power Level (0-100)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Modes", nullptr));
        Modes->setItemText(0, QCoreApplication::translate("MainWindow", "Burst", nullptr));
        Modes->setItemText(1, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        Modes->setItemText(2, QCoreApplication::translate("MainWindow", "Modulation", nullptr));
        Modes->setItemText(3, QCoreApplication::translate("MainWindow", "Sd1", nullptr));
        Modes->setItemText(4, QCoreApplication::translate("MainWindow", "Sd2", nullptr));

        controlType->setItemText(0, QCoreApplication::translate("MainWindow", "Stop", nullptr));
        controlType->setItemText(1, QCoreApplication::translate("MainWindow", "Refresh", nullptr));

        frequency->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Controle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
