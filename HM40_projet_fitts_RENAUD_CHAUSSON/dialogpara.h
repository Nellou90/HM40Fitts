#ifndef DIALOGPARA_H
#define DIALOGPARA_H

#include <QDialog>

namespace Ui {
class dialogPara;
}

class dialogPara : public QDialog
{
    Q_OBJECT

public:
    explicit dialogPara(QWidget *parent = nullptr);
    ~dialogPara();

private:
    Ui::dialogPara *ui;
};

#endif // DIALOGPARA_H
