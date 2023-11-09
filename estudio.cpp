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

void mostrarlista(lista *p, char c){
  lista *ax = p; 
  cout << "\n\n Contenido de la lista \n\n";
  while (ax!=NULL){
    cout << "[" << ax -> valor <<"]";
    ax = ax -> prx; 
  };
};

int buscar(lista *p, int n){
  lista *ax=p; 
  while (ax!=NULL){
    if (ax -> valor == n){
      ax = ax -> prx; 
    };
  };
  return 0; 
};

void eliminar(lista **p, int x){
  lista *ax = *p, *t;
  if (ax){
    if( ax -> valor == x){
      *p = ax -> prx;
      delete ax; 
    };
  };
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
    cout << "6. Salir \n";

    cin >> op;
    switch (op){
      case 1: 
        cout<< "Indique un numero"; cin>>n;
        insertar(&p, n);
        cout<< "\n\n";
      break;

      case 2:
        mostrarlista(p, 'P');
      break;

      case 3:
        cout << "Introduzca el numero a buscar"; cin>> n;
        res=buscar(p, n);
        cout<< "El valor "<<n<<" ";
        if (!(res)) cout<< "NO";
          cout<< "No esta en la lista\n\n";
      break;

      case 4:
        cout<< "Indique el numero que quiere eliminar"; cin>> n ;
        eliminar(&p,n);
      break;

      case 5: 

      break;
    };


  };
  
}