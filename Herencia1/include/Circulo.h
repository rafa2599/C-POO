#ifndef CIRCULO_H
#define CIRCULO_H

#include "../include/Punto.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std; 

class Circulo :public Punto{
public: 
    Circulo( int = 0, int = 0, double = 0.0 );  

    void estableceRadio( double );   // establece el radio
    double obtieneRadio() const;   // devuelve el radio

    double obtieneDiametro() const;       // devuelve el di?metro
    double obtieneCircunferencia() const; // devuelve la circunferencia
    double obtieneArea() const;           // devuelve el ?rea

    void imprime() const;          // muestra el objeto Circulo

private: 
   double radio;  // radio del Circulo4

};

#endif