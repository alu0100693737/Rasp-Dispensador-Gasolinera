#include "CLabel.h"

CLabel::CLabel(QString text) : QLabel() {

    setText(text);
    setAlignment(Qt::AlignCenter);

    setStyleSheet("background-color: rgb(233, 233, 233); border-style: solid; border-width:2px; border-radius:5px; border-color: black;  max-width: 150px; min-width: 150px; ");

    QFont f("Arial", 10, QFont::Bold);
    setFont(f);
}

