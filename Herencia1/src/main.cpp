#include "../include/Punto.h"
#include "../include/Circulo.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std; 

int main(int argc, char *argv[])
{  Circulo *circulo; // crea puntero a Circulo
   Circulo xc(10,10,5.75); // crea objeto de tipo Circulo
   circulo= new Circulo( 37, 43, 2.5 ); // crea la instancia del objeto Circulo
   // despliega las coordenadas del punto
   cout << "La coordenada X es " << circulo->obtieneX() 
        << "\nLa coordenada Y es " << circulo->obtieneY()
        << "\nEl radio es " << (*circulo).obtieneRadio();// circulo->obtieneRadio()
    cout<<endl<<endl;    
    cout << "La coordenada X de xc es " << xc.obtieneX() 
        << "\nLa coordenada Y de xc es " << xc.obtieneY()
        << "\nEl radio de xc es " << xc.obtieneRadio();// circulo->obtieneRadio()

   circulo->estableceX( 2 );          // establece la nueva coordenada x
   circulo->estableceY( 2 );          // establece la nueva coordenada y
   circulo->estableceRadio( 4.25 );   // establece el nuevo radio

   // despliega el nuevo valor de c?rculo
   cout << "\n\nLa nueva ubicacion y el radio del circulo es\n";
   circulo->imprime();

   // despliega los valores en punto flotante con 2 d?gitos de precisi?n
   cout << fixed << setprecision( 2 );

   // despliega el di?metro de Circulo
   cout << "\nEl diametro es " << circulo->obtieneDiametro();

   // despliega la circunferencia de Circulo
   cout << "\nLa circunferencia es " << circulo->obtieneCircunferencia();

   // despliega el ?rea de Circulo
   cout << "\nEl area es " << circulo->obtieneArea();

   cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}