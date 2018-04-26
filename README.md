# Rasp-Dispensador-Gasolinera

* El objetivo de esta última práctica es el desarrollo de una aplicación para sistemas empotrados
basado en la raspberrypi, y la pantalla táctil PiTFT. Se construirá una imagen del sistema
basándonos en Yocto para realizar alguna labor propia de un sistema empotrado y que necesite una
interfaz gráfica de usuario utilizando Qt.
La practica se desarrollará utilizando Yocto y qemu, y se podrá probar una vez funcione en el
emulador, en las raspberry disponibles en el laboratorio

<img src="https://github.com/alu0100693737/Rasp-Dispensador-Gasolinera/blob/master/qemux.JPG" width="500">


Se ha creado una aplicación en C++ y Qt utilizando las librias QMainWindow y QWidget y diversos componentes como QLabel, QButton y QComboBox.

Por otro lado, los eventos de los botones se han hecho utilizando SLOTS. especificados en la clase QVentana.
Se ha utilizado Programación Orientada a Objetos creando una clase heredada de todos los componentes necesarios.


La aplicación simula un dispensador de gasolinera permitiendo elegir entre diferentes tipos de gasolina y la cantidad que se desea repostar.
El programa calcula cuantos litros deben introducirse y simula el tiempo que tardaría en lograrlo.

* Enlace del repositorio:
https://github.com/alu0100693737/Rasp-Dispensador-Gasolinera

Proyecto probado con Aplicación de escritorio, QEMU y Raspberry.

Iván García Campos

Sistemas Empotrados.
