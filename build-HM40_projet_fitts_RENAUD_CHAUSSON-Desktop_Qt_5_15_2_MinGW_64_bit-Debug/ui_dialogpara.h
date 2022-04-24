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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogPara
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QDoubleSpinBox *edit_a;
    QLabel *label_3;
    QDoubleSpinBox *edit_b;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QSpinBox *nbCibleSpinBox;
    QLabel *label_7;
    QSpinBox *TMin;
    QLabel *label_8;
    QSpinBox *TMax;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *dialogPara)
    {
        if (dialogPara->objectName().isEmpty())
            dialogPara->setObjectName(QString::fromUtf8("dialogPara"));
        dialogPara->resize(400, 516);
        dialogPara->setMinimumSize(QSize(400, 0));
        dialogPara->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 231, 231);"));
        verticalLayout_3 = new QVBoxLayout(dialogPara);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(dialogPara);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        label_5 = new QLabel(dialogPara);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(dialogPara);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 190, 190);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        edit_a = new QDoubleSpinBox(groupBox);
        edit_a->setObjectName(QString::fromUtf8("edit_a"));

        verticalLayout->addWidget(edit_a);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        edit_b = new QDoubleSpinBox(groupBox);
        edit_b->setObjectName(QString::fromUtf8("edit_b"));

        verticalLayout->addWidget(edit_b);


        horizontalLayout_3->addWidget(groupBox);

        horizontalSpacer_4 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_4 = new QLabel(dialogPara);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        groupBox_2 = new QGroupBox(dialogPara);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 184);"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        nbCibleSpinBox = new QSpinBox(groupBox_2);
        nbCibleSpinBox->setObjectName(QString::fromUtf8("nbCibleSpinBox"));

        verticalLayout_2->addWidget(nbCibleSpinBox);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        TMin = new QSpinBox(groupBox_2);
        TMin->setObjectName(QString::fromUtf8("TMin"));

        verticalLayout_2->addWidget(TMin);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        TMax = new QSpinBox(groupBox_2);
        TMax->setObjectName(QString::fromUtf8("TMax"));

        verticalLayout_2->addWidget(TMax);


        horizontalLayout_2->addWidget(groupBox_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(dialogPara);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        horizontalLayout->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(dialogPara);
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogPara, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogPara, SLOT(accept()));

        QMetaObject::connectSlotsByName(dialogPara);
    } // setupUi

    void retranslateUi(QDialog *dialogPara)
    {
        dialogPara->setWindowTitle(QCoreApplication::translate("dialogPara", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dialogPara", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; text-decoration: underline; color:#3a43a1;\">Param\303\250tres</span></h1></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("dialogPara", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; text-decoration: underline; color:#292f72;\"><h2>Param\303\250trage de Fitts</h2></span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("dialogPara", "Valeur de a :", nullptr));
        label_3->setText(QCoreApplication::translate("dialogPara", "Valeur de b :", nullptr));
        label_4->setText(QCoreApplication::translate("dialogPara", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; text-decoration: underline; color:#282e6f;\"><h2>Param\303\250trage du test</h2></span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
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
