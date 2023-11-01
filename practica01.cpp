#include <iostream>
using namespace std;


void llenavector( int *p, int *n){


 // Recibe la dirección base del vector *p y
 // devuelve la cantidad de elementos leidos en *n

  int i;
    cout << "Indique la cantidad de elementos (1-20)\n";
    cin>> *n;

  if ((*n>1) && (*n<21)) // Valida la entrada
    for( i = 0 ; i< *n; i++){
    // despliegue posición i por pantalla en formato “A[i] =”
      cout<<"A["<< i << "]= ";
    // lectura del contenido de la dirección
      cin>> *p; // tomamos el contenido de la dirección p
      cout << "\n";
      
    }
  else { *n=0; return ; }
}; 

int main(int x, int y)
{
  llenavector(&x, &y);
  system("PAUSE");
}

