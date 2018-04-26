#ifndef CLABEL_H
#define CLABEL_H

#include <QLabel>
#include <Qt>
#include <QWidget>
#include <iostream>
using namespace std;

class CLabel : public QLabel {
Q_OBJECT
public:
    CLabel(QString text);
};

#endif // CLABEL_H
