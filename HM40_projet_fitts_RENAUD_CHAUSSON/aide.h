#ifndef AIDE_H
#define AIDE_H

#include <QWidget>

namespace Ui {
class aide;
}

class aide : public QWidget
{
    Q_OBJECT

public:
    explicit aide(QWidget *parent = nullptr);
    ~aide();

private:
    Ui::aide *ui;
};

#endif // AIDE_H
