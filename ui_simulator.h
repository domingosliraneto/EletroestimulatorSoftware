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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simulator
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QCheckBox *tunningIAERovira;
    QCheckBox *tunningITAELopes;
    QCheckBox *tunningIAELopes;
    QCheckBox *tunningCohenCoon;
    QCheckBox *tunningITAERovira;
    QComboBox *comboBox;
    QCheckBox *tunningCHRServo20OV;
    QCheckBox *tunningZieglerNichols;
    QCheckBox *tunningCHRRegulatorio;
    QCheckBox *tunningCHRServo0OV;
    QCheckBox *tunningIMC;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *kpt;
    QLineEdit *kp;
    QLabel *kit;
    QLineEdit *ki;
    QLabel *kdt;
    QLineEdit *kd;
    QLabel *label_4;
    QLineEdit *sens;
    QPushButton *pushButton;

    void setupUi(QWidget *simulator)
    {
        if (simulator->objectName().isEmpty())
            simulator->setObjectName(QString::fromUtf8("simulator"));
        simulator->resize(838, 394);
        gridLayout_3 = new QGridLayout(simulator);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(simulator);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_3->addWidget(widget, 0, 0, 1, 2);

        frame_2 = new QFrame(simulator);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tunningIAERovira = new QCheckBox(frame_2);
        tunningIAERovira->setObjectName(QString::fromUtf8("tunningIAERovira"));

        gridLayout->addWidget(tunningIAERovira, 3, 2, 1, 1);

        tunningITAELopes = new QCheckBox(frame_2);
        tunningITAELopes->setObjectName(QString::fromUtf8("tunningITAELopes"));

        gridLayout->addWidget(tunningITAELopes, 2, 2, 1, 1);

        tunningIAELopes = new QCheckBox(frame_2);
        tunningIAELopes->setObjectName(QString::fromUtf8("tunningIAELopes"));

        gridLayout->addWidget(tunningIAELopes, 8, 2, 1, 1);

        tunningCohenCoon = new QCheckBox(frame_2);
        tunningCohenCoon->setObjectName(QString::fromUtf8("tunningCohenCoon"));

        gridLayout->addWidget(tunningCohenCoon, 8, 0, 1, 1);

        tunningITAERovira = new QCheckBox(frame_2);
        tunningITAERovira->setObjectName(QString::fromUtf8("tunningITAERovira"));

        gridLayout->addWidget(tunningITAERovira, 4, 2, 1, 1);

        comboBox = new QComboBox(frame_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 3);

        tunningCHRServo20OV = new QCheckBox(frame_2);
        tunningCHRServo20OV->setObjectName(QString::fromUtf8("tunningCHRServo20OV"));

        gridLayout->addWidget(tunningCHRServo20OV, 4, 0, 1, 1);

        tunningZieglerNichols = new QCheckBox(frame_2);
        tunningZieglerNichols->setObjectName(QString::fromUtf8("tunningZieglerNichols"));
        tunningZieglerNichols->setChecked(false);

        gridLayout->addWidget(tunningZieglerNichols, 2, 0, 1, 1);

        tunningCHRRegulatorio = new QCheckBox(frame_2);
        tunningCHRRegulatorio->setObjectName(QString::fromUtf8("tunningCHRRegulatorio"));

        gridLayout->addWidget(tunningCHRRegulatorio, 3, 0, 1, 1);

        tunningCHRServo0OV = new QCheckBox(frame_2);
        tunningCHRServo0OV->setObjectName(QString::fromUtf8("tunningCHRServo0OV"));

        gridLayout->addWidget(tunningCHRServo0OV, 5, 0, 1, 1);

        tunningIMC = new QCheckBox(frame_2);
        tunningIMC->setObjectName(QString::fromUtf8("tunningIMC"));

        gridLayout->addWidget(tunningIMC, 5, 2, 1, 1);


        gridLayout_3->addWidget(frame_2, 1, 0, 1, 1);

        frame = new QFrame(simulator);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        kpt = new QLabel(frame);
        kpt->setObjectName(QString::fromUtf8("kpt"));

        gridLayout_2->addWidget(kpt, 0, 0, 1, 1);

        kp = new QLineEdit(frame);
        kp->setObjectName(QString::fromUtf8("kp"));

        gridLayout_2->addWidget(kp, 0, 1, 1, 2);

        kit = new QLabel(frame);
        kit->setObjectName(QString::fromUtf8("kit"));

        gridLayout_2->addWidget(kit, 1, 0, 1, 1);

        ki = new QLineEdit(frame);
        ki->setObjectName(QString::fromUtf8("ki"));

        gridLayout_2->addWidget(ki, 1, 1, 1, 2);

        kdt = new QLabel(frame);
        kdt->setObjectName(QString::fromUtf8("kdt"));

        gridLayout_2->addWidget(kdt, 2, 0, 1, 1);

        kd = new QLineEdit(frame);
        kd->setObjectName(QString::fromUtf8("kd"));

        gridLayout_2->addWidget(kd, 2, 1, 1, 2);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 2);

        sens = new QLineEdit(frame);
        sens->setObjectName(QString::fromUtf8("sens"));

        gridLayout_2->addWidget(sens, 3, 2, 1, 1);


        gridLayout_3->addWidget(frame, 1, 1, 1, 1);

        pushButton = new QPushButton(simulator);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 2);


        retranslateUi(simulator);

        QMetaObject::connectSlotsByName(simulator);
    } // setupUi

    void retranslateUi(QWidget *simulator)
    {
        simulator->setWindowTitle(QApplication::translate("simulator", "Form", nullptr));
        tunningIAERovira->setText(QApplication::translate("simulator", "tunningIAERovira", nullptr));
        tunningITAELopes->setText(QApplication::translate("simulator", "tunningITAELopes", nullptr));
        tunningIAELopes->setText(QApplication::translate("simulator", "tunningIAELopes", nullptr));
        tunningCohenCoon->setText(QApplication::translate("simulator", "tunningCohenCoon", nullptr));
        tunningITAERovira->setText(QApplication::translate("simulator", "tunningITAERovira", nullptr));
        comboBox->setItemText(0, QApplication::translate("simulator", "Tipo do Controlador", nullptr));
        comboBox->setItemText(1, QApplication::translate("simulator", "P", nullptr));
        comboBox->setItemText(2, QApplication::translate("simulator", "PI", nullptr));
        comboBox->setItemText(3, QApplication::translate("simulator", "PID", nullptr));

        tunningCHRServo20OV->setText(QApplication::translate("simulator", "tunningCHRServo20OV", nullptr));
        tunningZieglerNichols->setText(QApplication::translate("simulator", "tunningZieglerNichols", nullptr));
        tunningCHRRegulatorio->setText(QApplication::translate("simulator", "tunningCHRRegulatorio", nullptr));
        tunningCHRServo0OV->setText(QApplication::translate("simulator", "tunningCHRServo0OV", nullptr));
        tunningIMC->setText(QApplication::translate("simulator", "tunningIMC", nullptr));
        kpt->setText(QApplication::translate("simulator", "Kp", nullptr));
        kit->setText(QApplication::translate("simulator", "Ki", nullptr));
        kdt->setText(QApplication::translate("simulator", "Kd", nullptr));
        label_4->setText(QApplication::translate("simulator", "Sensibilidade", nullptr));
        pushButton->setText(QApplication::translate("simulator", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class simulator: public Ui_simulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATOR_H
