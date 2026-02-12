#include "../include/Tiempo.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{  
    {Tiempo t(14,40,0),x,y(10);              // crea el objeto de Tiempo
      t.imprimeEstandar(); cout<<endl;
      x.imprimeEstandar(); cout<<endl;
      y.imprimeEstandar(); cout<<endl;
    
      //Tiempo *p= new Tiempo(11,11,11);
      //p->imprimeEstandar();cout<<endl;
      
   // establece la hora mediante funciones establece (set) individuales
   t.estableceHora1( 17 );     // establece hora en un valor válido
   t.estableceMinuto( 34 );   // establece minuto en un valor válido
   t.estableceSegundo( 25 );   // establece segundo en un valor válido

   // funciones obtener (get) para obtener hora, minuto y segundo
   cout << "Resultado de establecer todos los valores validos:\n" 
        << "  Hora: " << t.obtieneHora1()
        << "  Minuto: " << t.obtieneMinuto()
        << "  Segundo: " << t.obtieneSegundo();

   // establece hora mediante el uso de funciones individuales
   t.estableceHora1( 234 );     // establece hora no válida en 0
   t.estableceMinuto( 43 );    // establece minuto en un valor válido
   t.estableceSegundo( 6373 ); // establece segundo no válido en 0

   // despliega hora, minuto y segundo después de establecer 
   // los valores no válidos de hora y segundo
   cout << "\n\nResultado del intento de establecer los valores no validos de minuto"
        << " y segundo:\n  Hora: " << t.obtieneHora1()
        << "  Minuto: " << t.obtieneMinuto()
        << "  Segundo: " << t.obtieneSegundo() << "\n\n";

   t.estableceHora( 11, 58, 0 );    // establece hora
   t.incrementaSegundos( 150 );  // incrementa los minutos de t en 3
   t.imprimeEstandar(); cout<<endl;



    cout<<endl<<endl;

  }
    cout<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}