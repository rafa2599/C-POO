#ifdef TIEMPO_H
#define TIEMPO_H 

#include <cstdlib>
#include <iostream>
#include <iomanip>


class Tiempo (){

    public:
        Tiempo (int = 0, int = 0 , int = 0);
        ~Tiempo();
        //SETTERS
        void establecerHora(int, int , int);
        //GETTERS
        int getHora();
        int getMin();
        int getSeg();

        void imprimeUniversal();
        voif imprimeEstandar();
    private:
        int hora;
        int minuto;
        int segundo;

};
#endif