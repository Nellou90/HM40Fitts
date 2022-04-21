/********************************************************************************
** Form generated from reading UI file 'dialogpara.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPARA_H
#define UI_DIALOGPARA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogPara
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QLabel *label_8;
    QSpinBox *spinBox_3;

    void setupUi(QDialog *dialogPara)
    {
        if (dialogPara->objectName().isEmpty())
            dialogPara->setObjectName(QString::fromUtf8("dialogPara"));
        dialogPara->resize(222, 468);
        buttonBox = new QDialogButtonBox(dialogPara);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 430, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(dialogPara);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 0, 160, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(dialogPara);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 191, 161));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 30, 151, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        verticalLayout_2->addWidget(doubleSpinBox);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        verticalLayout_2->addWidget(doubleSpinBox_2);

        groupBox_2 = new QGroupBox(dialogPara);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 210, 191, 201));
        verticalLayoutWidget_3 = new QWidget(groupBox_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(19, 20, 151, 168));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        spinBox = new QSpinBox(verticalLayoutWidget_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout_3->addWidget(spinBox);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        spinBox_2 = new QSpinBox(verticalLayoutWidget_3);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        verticalLayout_3->addWidget(spinBox_2);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        spinBox_3 = new QSpinBox(verticalLayoutWidget_3);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        verticalLayout_3->addWidget(spinBox_3);


        retranslateUi(dialogPara);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogPara, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogPara, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogPara);
    } // setupUi

    void retranslateUi(QDialog *dialogPara)
    {
        dialogPara->setWindowTitle(QCoreApplication::translate("dialogPara", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dialogPara", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; text-decoration: underline; color:#0000ff;\">Param\303\250tres</span><span style=\" font-size:xx-large; font-weight:700;\"/></h1><h1 style=\"-qt-paragraph-type:empty; margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:xx-large; font-weight:700;\"><br/></h1></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("dialogPara", "Param\303\250trage de Fitts", nullptr));
        label_2->setText(QCoreApplication::translate("dialogPara", "Valeur de a :", nullptr));
        label_3->setText(QCoreApplication::translate("dialogPara", "Valeur de b :", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("dialogPara", "Param\303\250trage du test", nullptr));
        label_6->setText(QCoreApplication::translate("dialogPara", "Nombre de cibles :", nullptr));
        label_7->setText(QCoreApplication::translate("dialogPara", "Taille minimale des cibles :", nullptr));
        label_8->setText(QCoreApplication::translate("dialogPara", "Taille maximale des cibles :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogPara: public Ui_dialogPara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPARA_H
