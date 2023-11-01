#include <iostream> 
using namespace std; 
int cont= 0;

struct lista{
  int valor;
  lista *prx;
};

void insertar(lista **p, int n){
  lista *ax= new lista;
  ax -> valor = n;
  ax ->prx = NULL;

  if (*p==NULL)
    *p = ax;
  else {
    ax->prx = *p;
    *p = ax;
  }
};

int main(){
  int n=0, op=-1, res;
  lista *p=NULL;
  while(op!=NULL){
    cout << "MENU BASE DE LISTAS \n";
    cout << "1. Insertar por cabeza \n";
    cout << "2. Mostrar una lista\n";
    cout << "3. Buscar un elemento\n";
    cout << "4. Eliminar un elemento \n";
    cout << "5. Cuantas veces esta un elemento  \n";
    cout << "1. Insertar por cabeza \n";

  }
  
}