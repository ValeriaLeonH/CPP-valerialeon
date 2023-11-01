/* MENU BASE PARA MANEJO DE listas */
/***********************************************************************************
****/
#include <iostream>
using namespace std;
int cont=0;

struct lista{
	int valor;
	lista *prx;
};

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
	cout<< "\n\n\tContenido de la lista \n\n "<<c<<"->";
	while (ax!=NULL){
		cout<<"["<<ax->valor <<"]->";
		ax=ax->prx;
	};
	cout<<"NULL \n\n";
};

void eliminar(lista **p, int x) {
	lista *ax= *p, *t;
	if(ax){
		if(ax-> valor == x){
			*p = ax->prx; 
			delete ax;
		};
	};
};

int buscar( lista *p, int x){
	/* Busca el valor x en la lista y devuelve Si/NO **/
	lista *ax= p;
	while ( ax!=NULL){
		if (ax->valor==x) return 1;
			ax=ax->prx;
	};
	return 0;
};

int buscarcontar( lista *p, int x){
	/* Busca el valor x en la lista y devuelve Si/NO **/
	lista *ax= p;
	while ( ax!=NULL){
		if (ax->valor==x)
			ax=ax->prx;
			cont ++;
	};
	return cont;
};

int main ( )
{
	int n =0, op=-1, res;
	lista *p=NULL;
	while (op!=0){
		cout << "\n\n\t\tMenu base de listas\n\n";
		cout << "1. Insertar por cabeza \n";
		cout << "2. Mostrar lista \n";
		cout << "3. Buscar un elemento\n";
		cout << "4. Eliminar un elemento\n";
		cout << "5. Cuantas veces esta un elemento\n";
		cout << "\n0. Salir\n";

		cin>> op;
		switch (op){
		case 1: cout<< "\nIndique un numero = "; cin>> n;
		insertar(&p, n );
		cout<< "\n\n";

		break;
		case 2: muestralista( p , 'P');
		break;

		case 3: cout<< "\nIndique un numero = "; cin>> n;

			res=buscar (p,n);
			cout<< "\nEl valor valor "<< n <<" ";
			if (!(res)) cout<< " NO ";
			cout<< " esta en la lista \n\n";

		break;

		case 4:
			cout<<"Ingrese el numero que quiere eliminar";
			cin>> n;
			eliminar(&p, n);
		break;

		case 5: cout<< "\nIndique un numero = "; cin>> n;
			res = buscarcontar(p, n);
			cout<< "Se repite "<< res << "veces";

		break;

		};
	system("pause");
	system("cls");
	};
	return 0;
}