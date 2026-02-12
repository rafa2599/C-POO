#include "../include/Tiempo.h"
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
void Tiempo:: estableceHora(int h , int m , int s){
    estableceHora1( h);
    estableceMinuto (m);
    estableceSegundo (s);
}

void Tiempo::estableceHora1(int h){
    hora = (h>=0 && h<24) ? h : 0;
}

void Tiempo::estableceMinuto(int m){
    minuto = (m>=0 && m<60)? m : 0;
}

void Tiempo:: estableceSegundo (int s){
    segundo = (s>=0 && s<60) ? s : 0 ;

}

int Tiempo:: obtieneHora1 (){
    return hora;
}

int Tiempo :: obtieneMinuto (){
    return minuto;
}
int Tiempo :: obtieneSegundo(){
    return segundo;

}
void Tiempo::imprimeUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hora << ":"
        << setw( 2 ) << minuto << ":"
        << setw( 2 ) << segundo;
}
void Tiempo::imprimeEstandar()
{
   cout << ( ( hora == 0 || hora == 12 ) ? 12 : hora % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minuto
        << ":" << setw( 2 ) << segundo 
        << ( hora < 12 ? " AM" : " PM" );
}
void Tiempo::incrementaSegundos(const int cuenta )
{
   cout << "Incrementa segundo " << cuenta
        << " veces:\nHora inicio: ";
   imprimeEstandar();

   for ( int i = 0; i < cuenta; i++ ) {
      estableceSegundo( ( obtieneSegundo() + 1 ) % 60 );  

      if ( obtieneSegundo() == 0 )
         incrementaMinutos(1);

      cout << "\nsegundo + 1: ";
      imprimeEstandar();

   } // fin de for

   cout << endl;

} // fin de la función incrementaSegundos

void Tiempo::incrementaMinutos(const int cuenta )
{
   cout << "Incrementa minuto " << cuenta
        << " veces:\nHora inicio: ";
   imprimeEstandar();

   for ( int i = 0; i < cuenta; i++ ) {
      estableceMinuto( ( obtieneMinuto() + 1 ) % 60 );  

      if ( obtieneMinuto() == 0 )
         incrementaHoras(1);

      cout << "\nminuto + 1: ";
      imprimeEstandar();

   } // fin de for

   cout << endl;

} // fin de la función incrementaMinutos

void Tiempo::incrementaHoras(const int cuenta )
{
   cout << "Incrementa hora " << cuenta
        << " veces:\nHora inicio: ";
   imprimeEstandar();

   for ( int i = 0; i < cuenta; i++ ) {
      estableceHora1( ( obtieneHora1() + 1 ) % 24 );

      cout << "\nhora + 1: ";
      imprimeEstandar();

   } // fin de for

   cout << endl;

} 