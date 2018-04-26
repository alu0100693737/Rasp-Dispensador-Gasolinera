#include "QVentana.h"

#include <time.h>
#include <sys/time.h>

void delay(int milisecs) {
    for(int i = (time(NULL) + milisecs/1000); time(NULL)!= i; time(NULL));
}

QVentana::QVentana() {

    widget = new QWidget();
    layout = new QGridLayout();
    widget->setLayout(getLayout());
    setCentralWidget(getWidget());

    //setFixedSize(this-, 500);
    int x = 310;
    int y = 200;
    setFixedSize(x, y);
    setWindowTitle("Gasolinera");

    tipoGasolina = new CLabel("Tipo de Gasolina");
    importe = new CLabel("Importe");
    litros = new CLabel("Litros");
    precioLitro = new CLabel("precioLitro");

    valorTipoGasolina = new CLabel("Gasolina 95");
    valorImporte = new CLabel("0");
    valorLitros = new CLabel("0");
    valorPrecioLitro = new CLabel("0");

    boton1Euro = new CButton("1 Euro");
    boton10Euros = new CButton("10 Euros");
    borrarCantidad = new CButton("Borrar");
    empezar = new CButton("Empezar");

    comboTipoGasolinas = new QComboBox();

    getComboTipoGasolinas()->setStyleSheet("background-color: rgb(233, 233, 233); border-style: solid; border-width:2px; border-radius:5px; border-color: black;  max-width: 150px; min-width: 150px; ");

    QFont f("Arial", 10, QFont::Bold);
    getComboTipoGasolinas()->setFont(f);
    getComboTipoGasolinas()->addItem("Gasolina 95");
    getComboTipoGasolinas()->addItem("Gasolina 98");
    getComboTipoGasolinas()->addItem("Diesel");

    getLayout()->addWidget(getStringTipoGasolina(), 0, 0, 1, 2);
    getLayout()->addWidget(getStringImporte(), 1, 0, 1, 2);
    getLayout()->addWidget(getStringLitros(), 2, 0, 1, 2);
    getLayout()->addWidget(getStringPrecioLitro(), 3, 0, 1, 2);

    getLayout()->addWidget(getComboTipoGasolinas(), 0, 2, 1, 2);
    getLayout()->addWidget(getValorImporte(), 1, 2, 1, 2);
    getLayout()->addWidget(getValorLitro(), 2, 2, 1, 2);
    getValorPrecioLitro()->setText(VALORGASOLINA95);
    getLayout()->addWidget(getValorPrecioLitro(), 3, 2, 1, 2);

    getLayout()->addWidget(getBoton1Euro(), 5, 0, 1, 1);
    getLayout()->addWidget(getBoton10Euros(), 5, 1, 1, 1);
    getLayout()->addWidget(getBorrarCantidad(), 5, 2, 1, 1);
    getLayout()->addWidget(getEmpezar(), 5, 3, 1, 1);

    getWidget()->setStyleSheet("background-color: rgb(105, 183, 201)");

    actionBoton1Euro = new QAction(QIcon(""), tr("Pulsando"), this);
    actionBoton10Euros = new QAction(QIcon(""), tr("Boton 10 Euros"), this);
    actionBotonBorrar = new QAction(QIcon(""), tr("Boton Borrar"), this);
    actionBotonEmpezar = new QAction(QIcon(""), tr("Boton Empezar"), this);
    actionCambioTipoGasolina = new QAction(QIcon(""), tr("Cambio Tipo Gasolina"), this);

    getComboTipoGasolinas()->addAction(getActionCambioTipoGasolina());
    getBoton1Euro()->addAction(getActionBoton1Euro());
    getBoton10Euros()->addAction(getActionBoton10Euro());
    getEmpezar()->addAction(getActionBotonEmpezar());
    getBorrarCantidad()->addAction(getActionBotonBorrar());

    connect(getBoton1Euro(), SIGNAL(clicked()), this, SLOT(slotBoton1Euro()));
    connect(getBoton10Euros(), SIGNAL(clicked()), this, SLOT(slotBoton10Euros()));
    connect(getBorrarCantidad(), SIGNAL(clicked()), this, SLOT(slotBotonBorrar()));
    connect(getEmpezar(), SIGNAL(clicked()), this, SLOT(slotBotonEmpezar()));
    connect(getComboTipoGasolinas(), SIGNAL(currentIndexChanged(int)), this, SLOT(slotCambioTipoGasolina()));
}

QVentana::~QVentana() {
}

QWidget* QVentana::getWidget() {
    return widget;
}

QGridLayout* QVentana::getLayout() {
    return layout;
}


CLabel* QVentana::getStringTipoGasolina() {
    return tipoGasolina;
}

CLabel* QVentana::getStringImporte() {
    return importe;
}

CLabel* QVentana::getStringLitros() {
    return litros;
}

CLabel* QVentana::getStringPrecioLitro() {
    return precioLitro;
}

CLabel* QVentana::getValorTipoGasolina() {
    return valorTipoGasolina;
}

CLabel* QVentana::getValorImporte() {
    return valorImporte;
}

CLabel* QVentana::getValorLitro() {
    return valorLitros;
}

CLabel* QVentana::getValorPrecioLitro() {
    return valorPrecioLitro;
}


void QVentana::setValorPrecioLitro(QString text) {
    valorPrecioLitro->setText(text);
}

//Opciones
CButton* QVentana::getBoton1Euro() {
    return boton1Euro;
}

CButton* QVentana::getBoton10Euros() {
    return boton10Euros;
}

CButton* QVentana::getBorrarCantidad() {
    return borrarCantidad;
}

CButton* QVentana::getEmpezar() {
    return empezar;
}

QComboBox* QVentana::getComboTipoGasolinas() {
    return comboTipoGasolinas;
}

//Actions
QAction* QVentana::getActionBoton1Euro() {
    return actionBoton1Euro;
}

QAction* QVentana::getActionBoton10Euro() {
    return actionBoton10Euros;
}

QAction* QVentana::getActionBotonBorrar() {
    return actionBotonBorrar;
}

QAction* QVentana::getActionBotonEmpezar() {
    return actionBotonEmpezar;
}

QAction* QVentana::getActionCambioTipoGasolina() {
    return actionCambioTipoGasolina;
}

//Public slots
void QVentana::slotBoton1Euro() {
    cout << "Evento Boton1 " << endl;
    getValorImporte()->setText(QString::number(getValorImporte()->text().toInt() + 1));
}

void QVentana::slotBoton10Euros() {
    cout << "Evento Boton10" << endl;
    getValorImporte()->setText(QString::number(getValorImporte()->text().toInt() + 10));

}

void QVentana::slotBotonBorrar() {
    cout << "Evento Boton Borrar" << endl;
    getValorImporte()->setText("0");
    getValorLitro()->setText("0");

}

void QVentana::slotBotonEmpezar() {
    cout << "Evento Boton Empezar" << endl;
    cout << "elemento " << getComboTipoGasolinas()->currentText().toStdString() << endl;
    QMessageBox msgBox;
    msgBox.setText("Se procede a llenar el deposito.");
    msgBox.setInformativeText("Pulse ok para empezar la operacion");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();

    switch(ret) {
    case QMessageBox::Ok: {
        float litrosTotales = getValorImporte()->text().toFloat() / getValorPrecioLitro()->text().toFloat() ;
        cout << "Valor  " << litrosTotales << endl;
        float auxlitros = 0;

        while(auxlitros < litrosTotales) {
            getValorLitro()->setText(QString::number(auxlitros, 'f', 2));
            repaint();
            update();
            delay(100);
            auxlitros += 0.05;
        }
        getValorLitro()->setText(QString::number(litrosTotales, 'f', 2));
        repaint();
        update();
        break;
    } case QMessageBox::Cancel: {
        cout << "Cancelando" << endl;
        break;
    }
    default:
        cout << "Error con la ventana de confirmacion" << endl;
        break;
    }

    }

    void QVentana::slotCambioTipoGasolina() {
        cout << "Se ha producido un cambio de tipo de gasolina" << endl;
        //Gasolina 95
        cout << "elemento " << getComboTipoGasolinas()->currentText().toStdString() << endl;

        if(getComboTipoGasolinas()->currentText().toStdString() == "Gasolina 95") {
            setValorPrecioLitro(VALORGASOLINA95);

        } else if (getComboTipoGasolinas()->currentText() == "Gasolina 98") {
            setValorPrecioLitro(VALORGASOLINA98);
        } else if (getComboTipoGasolinas()->currentText() == "Diesel") {
            setValorPrecioLitro(VALORDIESEL);
        } else {
            cout << "Se ha producido un error, index no valido" << endl;
        }

    }
