/********************************************************************************
** Form generated from reading UI file 'resultats.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTATS_H
#define UI_RESULTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultats
{
public:
    QAction *actionAide;
    QAction *actionParam_trages;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QFrame *frameGraphe;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *LayoutGraphe;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_13;
    QSpacerItem *verticalSpacer;
    QPushButton *recommencer;
    QPushButton *QuitterResult;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tre;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *resultats)
    {
        if (resultats->objectName().isEmpty())
            resultats->setObjectName(QString::fromUtf8("resultats"));
        resultats->resize(905, 620);
        resultats->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 204, 230);"));
        actionAide = new QAction(resultats);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        actionParam_trages = new QAction(resultats);
        actionParam_trages->setObjectName(QString::fromUtf8("actionParam_trages"));
        centralwidget = new QWidget(resultats);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_6->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frameGraphe = new QFrame(centralwidget);
        frameGraphe->setObjectName(QString::fromUtf8("frameGraphe"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameGraphe->sizePolicy().hasHeightForWidth());
        frameGraphe->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(frameGraphe);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        LayoutGraphe = new QVBoxLayout();
        LayoutGraphe->setObjectName(QString::fromUtf8("LayoutGraphe"));

        horizontalLayout_4->addLayout(LayoutGraphe);


        verticalLayout_5->addWidget(frameGraphe);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 168, 226);\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        recommencer = new QPushButton(centralwidget);
        recommencer->setObjectName(QString::fromUtf8("recommencer"));

        verticalLayout_4->addWidget(recommencer);

        QuitterResult = new QPushButton(centralwidget);
        QuitterResult->setObjectName(QString::fromUtf8("QuitterResult"));

        verticalLayout_4->addWidget(QuitterResult);


        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_3);

        resultats->setCentralWidget(centralwidget);
        menubar = new QMenuBar(resultats);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 905, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tre = new QMenu(menubar);
        menuParam_tre->setObjectName(QString::fromUtf8("menuParam_tre"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        resultats->setMenuBar(menubar);
        statusbar = new QStatusBar(resultats);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        resultats->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tre->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParam_tre->addAction(actionParam_trages);
        menuAide->addAction(actionAide);

        retranslateUi(resultats);

        QMetaObject::connectSlotsByName(resultats);
    } // setupUi

    void retranslateUi(QMainWindow *resultats)
    {
        resultats->setWindowTitle(QCoreApplication::translate("resultats", "MainWindow", nullptr));
        actionAide->setText(QCoreApplication::translate("resultats", "Aide", nullptr));
        actionParam_trages->setText(QCoreApplication::translate("resultats", "Param\303\251trages", nullptr));
        label->setText(QCoreApplication::translate("resultats", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; text-decoration: underline; color:#1a2465;\">R\303\251sultats</span></h1></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("resultats", "Sauvegardes :", nullptr));
        label_3->setText(QCoreApplication::translate("resultats", "Sauvegarde 1 :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("resultats", "Charger la sauvegarde 1", nullptr));
        label_4->setText(QCoreApplication::translate("resultats", "Sauvegarde 2 :", nullptr));
        pushButton_5->setText(QCoreApplication::translate("resultats", "Charger la sauvegarde 2", nullptr));
        label_5->setText(QCoreApplication::translate("resultats", "Sauvegarde 3 :", nullptr));
        pushButton_6->setText(QCoreApplication::translate("resultats", "Charger la sauvegarde 3", nullptr));
        label_6->setText(QCoreApplication::translate("resultats", "Ecarts-type :", nullptr));
        label_10->setText(QCoreApplication::translate("resultats", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("resultats", "Erreur-type :", nullptr));
        label_11->setText(QCoreApplication::translate("resultats", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("resultats", "Diff\303\251rence moyenne :", nullptr));
        label_12->setText(QCoreApplication::translate("resultats", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("resultats", "Intervalle confiance 95% :", nullptr));
        label_13->setText(QCoreApplication::translate("resultats", "TextLabel", nullptr));
        recommencer->setText(QCoreApplication::translate("resultats", "Recommencer", nullptr));
        QuitterResult->setText(QCoreApplication::translate("resultats", "Quitter", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("resultats", "Fichier", nullptr));
        menuParam_tre->setTitle(QCoreApplication::translate("resultats", "Param\303\250tre", nullptr));
        menuAide->setTitle(QCoreApplication::translate("resultats", "Aide ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultats: public Ui_resultats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTATS_H
