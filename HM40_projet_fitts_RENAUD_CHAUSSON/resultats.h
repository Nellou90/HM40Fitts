#ifndef RESULTATS_H
#define RESULTATS_H

#include <QMainWindow>

namespace Ui {
class resultats;
}

class resultats : public QMainWindow
{
    Q_OBJECT

public:
    explicit resultats(QWidget *parent = nullptr);
    ~resultats();

private:
    Ui::resultats *ui;
};

#endif // RESULTATS_H
