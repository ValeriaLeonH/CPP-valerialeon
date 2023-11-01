/* MENU BASE PARA MANEJO DE DOS Listas */
/*******************************************************/
#include <iostream>
using namespace std;
struct lista{
int valor;
lista *prx;};
void insertar( lista **p, int n){
	/* Inserta n en la cabeza de la lista */
	// Se crea la nueva casilla
	lista *ax= new lista;
	ax->valor= n; ax->prx= NULL;
	// Se inserta
	if (*p==NULL) // si es vacia, ax es el primer elemento
	*p = ax;
	else { // si no, se mueve el puntero cabeza
	ax->prx = *p;
	*p= ax;
		};	
	};
	
void muestralista( lista *p, char c) {
	/* imprimie la lista por pantalla */
	lista *ax= p;
	cout<< "\n\n\tContenido de la lista \n\n"<<c<<"->";
	while (ax!=NULL){
	cout<<"["<<ax->valor <<"]->";
	ax=ax->prx;
	};
	cout<<"NULL \n";
};

void muestracomunes( lista *a, lista *b) {
	lista *ax  = a, *bx = b;
	int cont = 0;
	while(ax !=NULL ){
		bx = b;
		while(bx){
			if(ax->valor == bx -> valor){
				cont ++; 
				cout << ax->valor;
			
			};
			bx = bx -> prx;
		};
		ax = ax -> prx;
	};
	cout<< "\n\n";
	cout << "\nEl total de numeros repetidos es de "<< cont;
};

void intercalar(lista **a, lista **b){
	lista *ax = *a, *bx = *b;
	if(!ax) return;
	if(!bx){*b = *a; *a= NULL;};
	while((ax) && (bx)){
		*a = ax -> prx;
		ax -> prx = bx -> prx;
		bx -> prx = ax;
		ax = *a;
	};
	if(bx->prx->prx)
		bx = bx->prx->prx;
	else{
		bx ->prx->prx = *a;
	 *a=NULL;
	};
	muestralista(*b, 'I');
};

void separar(lista **a, lista **b){
	lista *ax = *a, *bx = *b;
	if(!ax) return;
	if(bx)return;
	if(*a){
		/* *a = ax ->prx;
		*a = bx;
		bx = bx->prx;
		bx ->prx = ax -> prx; */ 
		if(*b == NULL){
			ax = ax->prx;
			*b = ax;
		};
	};
	muestralista(*a, 'I');
	muestralista(*b, 'I');
};

int main ( )
{
int n =0, op=-1;
lista *a=NULL, *b=NULL;
while (op!=0){
	cout << "\n\n\t\tMenu base de DOS listas\n\n";
	cout << "1. Insertar en A \n";
	cout << "2. Insertar en B \n";
	cout << "3. Mostrar listas \n";
	cout << "4. Imprimir comunes\n";
	cout << "5. Intercalar en B\n";
	cout << "6. Separar en A y B\n";
	cout << "\n0. Salir\n";
	
	cout<<"\nOpcion -> ";cin>> op;
	switch (op){
	case 1:
		cout<< "\nLista A. Insertar numero = "; cin>> n;
		insertar(&a, n );
		cout<< "\n\n";
	break;
	
	case 2:
		cout<< "\nLista B. Insertar numero = "; cin>> n;
		insertar(&b, n );
		cout<< "\n\n";
	break;
	
	case 3:
		cout<<"\n\nMostrar las dos listas";
		muestralista( a , 'A');
		muestralista( b, 'B'); cout<< "\n\n";
	break;
	
	case 4: // mostrar comunes
		muestracomunes( a, b);
	break;
	
	case 5: // mezclar en B
		intercalar(&a, &b);
	break;

	case 6:
		separar(&a, &b);
	break;
	
	};
	system("pause");
	system("cls");
	};
return 0;
}