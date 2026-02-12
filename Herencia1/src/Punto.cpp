#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "../include/Punto.h"

using namespace std; 

Punto :: Punto (int x_ , int y_){
    x=x_;
    y=y_;
}
void Punto ::  estableceX (int x_){ x = x_ ; }
void Punto :: estableceY (int y_){y = y_ ;}

int Punto :: obtieneX()const {return x ;}
int Punto :: obtieneY()const {return y ;}

void Punto :: imprime() const{
    cout << '[' << obtieneX() << ", " << obtieneY() << ']';
}