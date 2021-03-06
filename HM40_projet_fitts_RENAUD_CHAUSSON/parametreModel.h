#ifndef PARAMETREMODEL_H
#define PARAMETREMODEL_H

#include <QPoint>
#include <QList>

class parametreModel
{
public:
    parametreModel();

    int cibleLeft = 10;
    int nbCible = 10;
    int minSize = 10;
    int maxSize = 150;

    double a = 0.20;
    double b = 0.10;

    double ecartType = 0;
    double erreurType = 0;
    double diffMoy = 0;
    double itc95 = 0;

    QList<QPoint> clickPoints;
    QList<QPoint> cercleCenter;
    QList<int> cercleSize;
    QList<qint64> times;
};

#endif // PARAMETREMODEL_H
