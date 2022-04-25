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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *recommencer;
    QPushButton *QuitterResult;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QFrame *frameGraphe;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *LayoutGraphe;
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        recommencer = new QPushButton(centralwidget);
        recommencer->setObjectName(QString::fromUtf8("recommencer"));

        horizontalLayout->addWidget(recommencer);

        QuitterResult = new QPushButton(centralwidget);
        QuitterResult->setObjectName(QString::fromUtf8("QuitterResult"));

        horizontalLayout->addWidget(QuitterResult);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frameGraphe = new QFrame(centralwidget);
        frameGraphe->setObjectName(QString::fromUtf8("frameGraphe"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameGraphe->sizePolicy().hasHeightForWidth());
        frameGraphe->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(frameGraphe);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        LayoutGraphe = new QVBoxLayout();
        LayoutGraphe->setObjectName(QString::fromUtf8("LayoutGraphe"));

        horizontalLayout_4->addLayout(LayoutGraphe);


        verticalLayout_5->addWidget(frameGraphe);


        horizontalLayout_3->addLayout(verticalLayout_5);


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
#if QT_CONFIG(whatsthis)
        recommencer->setWhatsThis(QCoreApplication::translate("resultats", "<html><head/><body><p><span style=\" font-weight:700; color:#ff6254;\">Fonction non impl\303\251ment\303\251 </span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
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
