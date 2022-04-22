/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
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

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionAide;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *nbCible;
    QPushButton *pushButtonInfo;
    QPushButton *pushButtonParam;
    QGraphicsView *testView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tre;
    QMenu *menuAide;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(912, 641);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 255);"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAide = new QAction(MainWindow);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nbCible = new QLabel(centralwidget);
        nbCible->setObjectName(QString::fromUtf8("nbCible"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nbCible->sizePolicy().hasHeightForWidth());
        nbCible->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(nbCible);

        pushButtonInfo = new QPushButton(centralwidget);
        pushButtonInfo->setObjectName(QString::fromUtf8("pushButtonInfo"));

        horizontalLayout->addWidget(pushButtonInfo);

        pushButtonParam = new QPushButton(centralwidget);
        pushButtonParam->setObjectName(QString::fromUtf8("pushButtonParam"));

        horizontalLayout->addWidget(pushButtonParam);


        verticalLayout->addLayout(horizontalLayout);

        testView = new QGraphicsView(centralwidget);
        testView->setObjectName(QString::fromUtf8("testView"));
        testView->setMinimumSize(QSize(900, 500));

        verticalLayout->addWidget(testView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";\n"
"border-color: rgb(43, 66, 130);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 912, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tre = new QMenu(menubar);
        menuParam_tre->setObjectName(QString::fromUtf8("menuParam_tre"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tre->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionAide);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionAide->setText(QCoreApplication::translate("MainWindow", "Aide", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre de cible restante :", nullptr));
        nbCible->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        pushButtonInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        pushButtonParam->setText(QCoreApplication::translate("MainWindow", "Param\303\250tre", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Pour commencer le test, veuillez cliquer que le rond </span><span style=\" font-size:10pt; font-weight:700; color:#425bff;\">BLEU</span><span style=\" font-size:10pt;\"> puis vous devrez cliquez sur le rond </span><span style=\" font-size:10pt; font-weight:700; color:#ff6254;\">ROUGE</span><span style=\" font-size:10pt;\"> qui apparaitra al\303\251atoirement jusqu'\303\240 la fin du test </span></p></body></html>", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
        menuParam_tre->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tre", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
