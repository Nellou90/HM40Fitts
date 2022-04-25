#ifndef RESULTAT_H
#define RESULTAT_H

#include <QWidget>

namespace Ui {
class resultat;
}

class resultat : public QWidget
{
    Q_OBJECT

public:
    explicit resultat(QWidget *parent = nullptr);
    ~resultat();

private:
    Ui::resultat *ui;
};

#endif // RESULTAT_H
