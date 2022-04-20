#ifndef DIALOGAIDE_H
#define DIALOGAIDE_H

#include <QDialog>

namespace Ui {
class DialogAide;
}

class DialogAide : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAide(QWidget *parent = nullptr);
    ~DialogAide();

private:
    Ui::DialogAide *ui;
};

#endif // DIALOGAIDE_H
