#include "../Clases/POO/include/Tiempo.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std; 

Tiempo::Tiempo(int hora, int minuto, int segundo){
    cout<< "/n Soy el constructor\n"<<endl;
}
Tiempo :: ~Tiempo()
{
    cout<<"\nSoy el destructor\n"<<endl;

}
void Tiempo:: etablecerHora(int)