#include "../include/Punto.h"
#include "../include/Circulo.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std; 

Circulo :: Circulo (int x_ ,int y_ , double r):Punto:: Punto (x_, y_)
{
    radio = r;
}

void Circulo :: estableceRadio (double r) {radio = r ;}

double Circulo :: obtieneRadio ()const {return radio;}

double Circulo :: obtieneDiametro() const
{
	
   return 2 * obtieneRadio();

} 
double Circulo :: obtieneCircunferencia() const
{
   return 3.14159 * obtieneDiametro();

} 
double Circulo :: obtieneArea() const
{
   return 3.14159 * obtieneRadio() * obtieneRadio();

} 
void Circulo ::imprime() const
{
   cout << "Centro = ";
   Punto::imprime();      // invoca a la funci?n imprime de Punto3
   cout << "; Radio = " << obtieneRadio();

} // fin de la funci?n imprime