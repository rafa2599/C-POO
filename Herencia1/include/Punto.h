#ifndef PUNTO_H
#define PUNTO_H

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
class Punto {

    public: 
        Punto (int, int);
        //~Punto ();
        void estableceX( int );    // establece x en el par de coordenadas
        int obtieneX() const;      // devuelve x desde el par de coordenadas
   
        void estableceY( int );    // establece y en el par de coordenadas
        int obtieneY() const;      // devuelve y desde el par de coordenadas

        void imprime() const;  // muestra el objeto Punto3

    private: 
        int x ; 
        int y; 
};
#endif