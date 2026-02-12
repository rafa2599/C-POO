#ifndef PERSONA_H
#define PERSONA_H

#include <cstdlib>
#include <iostream>
#include <iomanip>


class Tiempo {

    public:
        Tiempo (int = 0, int = 0 , int = 0);
        ~Tiempo();
        //SETTERS
        
        void estableceHora(int, int , int);
        void estableceHora1( int );   // establece hora
        void estableceMinuto( int );  // establece minuto
        void estableceSegundo( int );
        //GETTERS
        int obtieneHora1();        // obtiene hora
        int obtieneMinuto();       // obtiene minuto
        int obtieneSegundo(); 

        void imprimeUniversal();
        void imprimeEstandar();

        void incrementaSegundos(const int);
        void incrementaMinutos(const int );
        void incrementaHoras(const int);

    private:
        int hora;
        int minuto;
        int segundo;

}; 
#endif