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

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionAide;
    QAction *actionParam_trage;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *nbCibleLabel;
    QPushButton *pushButton;
    QPushButton *pushButtonInfo;
    QPushButton *pushButtonParam;
    QFrame *frameQGraphicsView;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *frameLayout;
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
        MainWindow->resize(1049, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 204, 230);"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAide = new QAction(MainWindow);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        actionParam_trage = new QAction(MainWindow);
        actionParam_trage->setObjectName(QString::fromUtf8("actionParam_trage"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        nbCibleLabel = new QLabel(centralwidget);
        nbCibleLabel->setObjectName(QString::fromUtf8("nbCibleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nbCibleLabel->sizePolicy().hasHeightForWidth());
        nbCibleLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(nbCibleLabel);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButtonInfo = new QPushButton(centralwidget);
        pushButtonInfo->setObjectName(QString::fromUtf8("pushButtonInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonInfo->sizePolicy().hasHeightForWidth());
        pushButtonInfo->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButtonInfo);

        pushButtonParam = new QPushButton(centralwidget);
        pushButtonParam->setObjectName(QString::fromUtf8("pushButtonParam"));
        sizePolicy2.setHeightForWidth(pushButtonParam->sizePolicy().hasHeightForWidth());
        pushButtonParam->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButtonParam);


        verticalLayout->addLayout(horizontalLayout);

        frameQGraphicsView = new QFrame(centralwidget);
        frameQGraphicsView->setObjectName(QString::fromUtf8("frameQGraphicsView"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameQGraphicsView->sizePolicy().hasHeightForWidth());
        frameQGraphicsView->setSizePolicy(sizePolicy3);
        frameQGraphicsView->setFrameShape(QFrame::StyledPanel);
        frameQGraphicsView->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frameQGraphicsView);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frameLayout = new QVBoxLayout();
        frameLayout->setObjectName(QString::fromUtf8("frameLayout"));

        horizontalLayout_2->addLayout(frameLayout);


        verticalLayout->addWidget(frameQGraphicsView);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";\n"
"border-color: rgb(43, 66, 130);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1049, 22));
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
        menuParam_tre->addAction(actionParam_trage);
        menuAide->addAction(actionAide);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Fitts", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
#if QT_CONFIG(shortcut)
        actionQuitter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAide->setText(QCoreApplication::translate("MainWindow", "Aide", nullptr));
#if QT_CONFIG(shortcut)
        actionAide->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+,", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParam_trage->setText(QCoreApplication::translate("MainWindow", "Param\303\250trage", nullptr));
#if QT_CONFIG(shortcut)
        actionParam_trage->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Nombre de cible restante :", nullptr));
        nbCibleLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Recommencer", nullptr));
        pushButtonInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        pushButtonParam->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Pour commencer le test, veuillez cliquer que le rond </span><span style=\" font-size:10pt; font-weight:700; color:#425bff;\">BLEU</span><span style=\" font-size:10pt;\"> puis vous devrez cliquez sur le rond </span><span style=\" font-size:10pt; font-weight:700; color:#ff6254;\">ROUGE</span><span style=\" font-size:10pt;\"> qui apparaitra al\303\251atoirement jusqu'\303\240 la fin du test </span></p></body></html>", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
        menuParam_tre->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
