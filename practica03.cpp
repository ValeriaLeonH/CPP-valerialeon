/* realiza el intercambio de valores por referencia. Usado más abajo
void swap ( int *a, int *b) { int c=*a; *a=*b; *b=c; }  */

#include <iostream>
#include <bits/stdc++.h>
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

void muestravector (int *p, int n){
 // recibe la dirección de vector *p y la cantidad de elementos que contiene
  int i;
  for( int i = 0 ; i< n; i++)
    // tomamos dirección base p mas desplazamiento i e indireccionamos
    cout << "A[" << i << "]= " << *(p+i) << "\n";
    // es equivalente a p[i]
    cout << "\n" ;
};

void swap ( int *a, int *b) { int c=*a; *a=*b; *b=c; };

void Intercambio(int* A, int N, int p){ 
  for (int i = 0; i < N; i++)
  for (int j = i + 1; j < N; j++)
  if (A[j] < A[i])
    swap(&A[j], &A[ i]);
    for( int i = 0 ; i< N; i++)
      cout << "A[" << i << "]= " << *(p+i) << "\n";
};

int main ( )
{
  int A[20];
  int n =0;
  int op;
  op=-1;

  while (op!=0){
    cout << "\n\n\t\tMenu base de vectores\n\n";
    cout << "1. Llenar vector desde teclado\n";
    cout << "2. Mostrar vector en pantalla\n";
    cout << "3. Hacer intercambio de valores por referencia\n";
    cout << "\n0. Salir\n";
    cin>> op;
    switch (op){

      case 1: llenavector( &A[0], &n );
      break;
      
      case 2: muestravector( A, n);
      break;

      case 3: Intercambio( A, N);
      break;

    };

    system("pause");
    
  };


  return 0;
};


