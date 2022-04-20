/********************************************************************************
** Form generated from reading UI file 'dialogaide.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAIDE_H
#define UI_DIALOGAIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAide
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *DialogAide)
    {
        if (DialogAide->objectName().isEmpty())
            DialogAide->setObjectName(QString::fromUtf8("DialogAide"));
        DialogAide->resize(500, 600);
        DialogAide->setMinimumSize(QSize(500, 600));
        DialogAide->setMaximumSize(QSize(16777215, 16777215));
        DialogAide->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 238, 238);"));
        verticalLayout_3 = new QVBoxLayout(DialogAide);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 6);
        label = new QLabel(DialogAide);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DialogAide);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(DialogAide);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 100));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(DialogAide);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(DialogAide);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Louis George Caf\303\251\";"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(DialogAide);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        verticalLayout->addWidget(label_6);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(DialogAide);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(DialogAide);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";"));
        label_8->setWordWrap(true);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(DialogAide);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Louis George Caf\303\251\";\n"
"color: rgb(36, 41, 100);\n"
""));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(DialogAide);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"Louis George Caf\303\251\";"));
        label_10->setWordWrap(true);

        verticalLayout_2->addWidget(label_10);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(DialogAide);

        QMetaObject::connectSlotsByName(DialogAide);
    } // setupUi

    void retranslateUi(QDialog *DialogAide)
    {
        DialogAide->setWindowTitle(QCoreApplication::translate("DialogAide", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; text-decoration: underline; color:#4049b1;\">Aide</span></h1></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><h2 align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700; text-decoration: underline; color:#2b3176;\">Qu'est ce que la Loi de Fitts ? </span></h2></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><p align=\"center\">Bas\303\251e sur une \303\251quation math\303\251matique, la loi de Fitts est utilis\303\251e afin de mettre en \303\251vidence le temps n\303\251cessaire pour atteindre un objet cible. Quand on se met dans la cadre de l\342\200\231IHM, un objet cible est n\342\200\231importe quel \303\251l\303\251ment interactif, comme un lien hypertexte, un bouton d\342\200\231envoi ou un champ de saisie dans un formulaire sur internet. Dans notre test les cibles seront des ronds <span style=\" font-weight:700; color:#ff5e5e;\">ROUGE</span>.</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><h2 align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700; text-decoration: underline; color:#22275f;\">Formule loi de Fitss</span></h2></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">T = a + b*log</span><span style=\" font-weight:700; vertical-align:sub;\">2</span><span style=\" font-weight:700;\">(2*D/W)</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("DialogAide", "T repr\303\251sente le temps pour accomplir l'action, a et b sont des constantes empiriques, D est la distance de l'objet cible et L est la largeur de l'objet cible.", nullptr));
        label_7->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><h2 align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700; text-decoration: underline; color:#272d6d;\">D\303\251roulement du test</span></h2></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><p align=\"center\">Une fois sur la page de test il vous faudra appuyer sur le rond <span style=\" font-weight:700; color:#598bff;\">BLEU</span>. Suite \303\240 cel\303\240, le test se lance avec les param\303\250tres que vous avez saisis dans la page principale et dans la fenetre de dialogue des param\303\250tres. </p><p align=\"center\">Des ronds <span style=\" font-weight:700; color:#ff5c5c;\">ROUGE</span>, sur lesquelles il faut cliquer le plus rapidement, apparaitront succesivement sur votre \303\251cran.</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700; text-decoration: underline;\">R\303\251sultat du test</span></h2></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("DialogAide", "<html><head/><body><p align=\"center\">A la fin du test deux graphiques seront affich\303\251s. Le premier affiche le calcul de la loi de fitts pour chaque cible du test et  le second le temps d'ex\303\251cution en fonction de la distance relative.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAide: public Ui_DialogAide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAIDE_H
