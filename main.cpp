#include <QApplication>
#include <QVentana.h>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QVentana ventana;
    ventana.show();

    return app.exec();
}
