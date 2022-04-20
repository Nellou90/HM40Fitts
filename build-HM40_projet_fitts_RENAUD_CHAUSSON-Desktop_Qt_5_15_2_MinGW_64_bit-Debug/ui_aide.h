/********************************************************************************
** Form generated from reading UI file 'aide.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIDE_H
#define UI_AIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aide
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *aide)
    {
        if (aide->objectName().isEmpty())
            aide->setObjectName(QString::fromUtf8("aide"));
        aide->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aide->sizePolicy().hasHeightForWidth());
        aide->setSizePolicy(sizePolicy);
        aide->setMinimumSize(QSize(400, 500));
        aide->setMaximumSize(QSize(400, 500));
        verticalLayout = new QVBoxLayout(aide);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(aide);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 219, 131);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(aide);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(aide);

        QMetaObject::connectSlotsByName(aide);
    } // setupUi

    void retranslateUi(QWidget *aide)
    {
        aide->setWindowTitle(QCoreApplication::translate("aide", "Form", nullptr));
        label->setText(QCoreApplication::translate("aide", "bouuu", nullptr));
        pushButton->setText(QCoreApplication::translate("aide", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aide: public Ui_aide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIDE_H
