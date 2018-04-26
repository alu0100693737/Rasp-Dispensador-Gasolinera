#ifndef QVENTANA_H
#define QVENTANA_H

#include <QWidget>
#include <QGridLayout>
#include <QComboBox>
#include "CLabel.h"
#include "CButton.h"
#include <QAction>
#include <QMainWindow>
#include <QMessageBox>
#include <iostream>

using namespace std;


class QVentana : public QMainWindow {
    Q_OBJECT
private:
    const QString VALORGASOLINA95 = "0.95";
    const QString VALORGASOLINA98 = "1.08";
    const QString VALORDIESEL = "0.91";
    CLabel* tipoGasolina;
    CLabel* importe;
    CLabel* litros;
    CLabel* precioLitro;

    CLabel* valorTipoGasolina;
    CLabel* valorImporte;
    CLabel* valorLitros;
    CLabel* valorPrecioLitro;

    CButton* boton1Euro;
    CButton* boton10Euros;
    CButton* borrarCantidad;
    CButton* empezar;

    QComboBox* comboTipoGasolinas;


    QGridLayout* layout;
    QWidget* widget;

    QAction* actionBoton1Euro;
    QAction* actionBoton10Euros;
    QAction* actionBotonBorrar;
    QAction* actionBotonEmpezar;
    QAction* actionCambioTipoGasolina;

public slots:
    void slotBoton1Euro();
    void slotBoton10Euros();
    void slotBotonBorrar();
    void slotBotonEmpezar();
    void slotCambioTipoGasolina();
public:
    QVentana();
    ~QVentana();
    QWidget* getWidget();
    QGridLayout* getLayout();

    CLabel* getStringTipoGasolina();
    CLabel* getStringImporte();
    CLabel* getStringLitros();
    CLabel* getStringPrecioLitro();

    CLabel* getValorTipoGasolina();
    CLabel* getValorImporte();
    CLabel* getValorLitro();
    CLabel* getValorPrecioLitro();

    void setValorPrecioLitro(QString text);

    CButton* getBoton1Euro();
    CButton* getBoton10Euros();
    CButton* getBorrarCantidad();
    CButton* getEmpezar();

    QComboBox* getComboTipoGasolinas();

    QAction* getActionBoton1Euro();
    QAction* getActionBoton10Euro();
    QAction* getActionBotonBorrar();
    QAction* getActionBotonEmpezar();
    QAction* getActionCambioTipoGasolina();

};

#endif // QVENTANA_H
