/********************************************************************************
** Form generated from reading UI file 'simulator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATOR_H
#define UI_SIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simulator
{
public:
    QWidget *widget;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLineEdit *ki;
    QLineEdit *kd;
    QLabel *kpt;
    QLineEdit *kp;
    QLineEdit *sens;
    QLabel *kdt;
    QLabel *label_4;
    QLabel *kit;
    QPushButton *pushButton_5;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QTextEdit *textEdit;

    void setupUi(QWidget *simulator)
    {
        if (simulator->objectName().isEmpty())
            simulator->setObjectName(QString::fromUtf8("simulator"));
        simulator->resize(838, 394);
        widget = new QWidget(simulator);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 820, 201));
        frame = new QFrame(simulator);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(370, 220, 258, 169));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ki = new QLineEdit(frame);
        ki->setObjectName(QString::fromUtf8("ki"));

        gridLayout_2->addWidget(ki, 1, 1, 1, 2);

        kd = new QLineEdit(frame);
        kd->setObjectName(QString::fromUtf8("kd"));

        gridLayout_2->addWidget(kd, 2, 1, 1, 2);

        kpt = new QLabel(frame);
        kpt->setObjectName(QString::fromUtf8("kpt"));

        gridLayout_2->addWidget(kpt, 0, 0, 1, 1);

        kp = new QLineEdit(frame);
        kp->setObjectName(QString::fromUtf8("kp"));

        gridLayout_2->addWidget(kp, 0, 1, 1, 2);

        sens = new QLineEdit(frame);
        sens->setObjectName(QString::fromUtf8("sens"));

        gridLayout_2->addWidget(sens, 3, 2, 1, 1);

        kdt = new QLabel(frame);
        kdt->setObjectName(QString::fromUtf8("kdt"));

        gridLayout_2->addWidget(kdt, 2, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 2);

        kit = new QLabel(frame);
        kit->setObjectName(QString::fromUtf8("kit"));

        gridLayout_2->addWidget(kit, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 4, 0, 1, 3);

        frame_2 = new QFrame(simulator);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 210, 361, 181));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 2, 1, 1);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 2, 1, 1);

        comboBox = new QComboBox(frame_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        comboBox_3 = new QComboBox(frame_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 1, 2, 1, 1);

        textEdit = new QTextEdit(frame_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 2, 2, 1, 1);


        retranslateUi(simulator);

        QMetaObject::connectSlotsByName(simulator);
    } // setupUi

    void retranslateUi(QWidget *simulator)
    {
        simulator->setWindowTitle(QApplication::translate("simulator", "Form", nullptr));
        kpt->setText(QApplication::translate("simulator", "Kp", nullptr));
        kdt->setText(QApplication::translate("simulator", "Kd", nullptr));
        label_4->setText(QApplication::translate("simulator", "Sensibilidade", nullptr));
        kit->setText(QApplication::translate("simulator", "Ki", nullptr));
        pushButton_5->setText(QApplication::translate("simulator", "Ajustar Sintonia", nullptr));
        pushButton_2->setText(QApplication::translate("simulator", "Remover Controlador", nullptr));
        pushButton->setText(QApplication::translate("simulator", "Adicionar Controlador", nullptr));
        comboBox->setItemText(0, QApplication::translate("simulator", "Tipo do Controlador", nullptr));
        comboBox->setItemText(1, QApplication::translate("simulator", "P", nullptr));
        comboBox->setItemText(2, QApplication::translate("simulator", "PI", nullptr));
        comboBox->setItemText(3, QApplication::translate("simulator", "PID", nullptr));

        comboBox_3->setItemText(0, QApplication::translate("simulator", "M\303\251todo de Sintonia", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("simulator", "ZieglerNichols", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("simulator", "CHRServo0OV", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("simulator", "CHRServo20OV", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("simulator", "CHRRegulatorio", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("simulator", "CohenCoon", nullptr));
        comboBox_3->setItemText(6, QApplication::translate("simulator", "IAELopes", nullptr));
        comboBox_3->setItemText(7, QApplication::translate("simulator", "IAERovira", nullptr));
        comboBox_3->setItemText(8, QApplication::translate("simulator", "ITAERovira", nullptr));
        comboBox_3->setItemText(9, QApplication::translate("simulator", "IMC", nullptr));

    } // retranslateUi

};

namespace Ui {
    class simulator: public Ui_simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
