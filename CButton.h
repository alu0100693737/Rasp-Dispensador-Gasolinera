#ifndef CBUTTON_H
#define CBUTTON_H

#include <QPushButton>
#include <QString>
#include <Qt>
#include <QWidget>
#include <iostream>
using namespace std;

class CButton : public QPushButton {
Q_OBJECT
public:
    CButton(QString text);
};

#endif // CBUTTON_H
