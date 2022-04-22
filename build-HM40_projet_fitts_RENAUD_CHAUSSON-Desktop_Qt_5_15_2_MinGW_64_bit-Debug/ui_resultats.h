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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tre;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *resultats)
    {
        if (resultats->objectName().isEmpty())
            resultats->setObjectName(QString::fromUtf8("resultats"));
        resultats->resize(800, 600);
        actionAide = new QAction(resultats);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        actionParam_trages = new QAction(resultats);
        actionParam_trages->setObjectName(QString::fromUtf8("actionParam_trages"));
        centralwidget = new QWidget(resultats);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 781, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(19, 69, 501, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(gridLayoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(540, 490, 241, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(540, 70, 241, 411));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        pushButton_6 = new QPushButton(verticalLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        resultats->setCentralWidget(centralwidget);
        menubar = new QMenuBar(resultats);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QCoreApplication::translate("resultats", "R\303\251sultats", nullptr));
        pushButton_3->setText(QCoreApplication::translate("resultats", "Changer d'absices", nullptr));
        pushButton->setText(QCoreApplication::translate("resultats", "Quitter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("resultats", "Recommencer", nullptr));
        label_2->setText(QCoreApplication::translate("resultats", "Sauvegardes :", nullptr));
        label_3->setText(QCoreApplication::translate("resultats", "Sauvegarde 1 :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("resultats", "Charger la sauvegarde 1", nullptr));
        label_4->setText(QCoreApplication::translate("resultats", "Sauvegarde 2 :", nullptr));
        pushButton_5->setText(QCoreApplication::translate("resultats", "Charger la sauvegarde 2", nullptr));
        label_5->setText(QCoreApplication::translate("resultats", "Sauvegarde 3 :", nullptr));
        pushButton_6->setText(QCoreApplication::translate("resultats", "Charger la sauvegarde 3", nullptr));
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
