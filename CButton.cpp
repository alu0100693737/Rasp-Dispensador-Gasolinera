
#include "CButton.h"
#include <QPushButton>
CButton::CButton(QString text) : QPushButton() {

 setText(text);
 setStyleSheet(" background-color: rgb(255, 255, 51); border-style: solid; border-width:1px; border-radius:10px; border-color: red; max-width:70px; max-height:30px; min-width:70px; min-height:30px");
}

