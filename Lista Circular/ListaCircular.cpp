#include "ListaCircular.h"

ListaCircular::ListaCircular()
{
	inicio = NULL;
	fin = NULL;
}

void ListaCircular::agregar(int valor)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = valor;
	if (inicio == NULL) {
		inicio = nuevo;
		fin = nuevo;
	}
	else {
		fin->sig = nuevo;
		nuevo->sig = inicio;
		fin = nuevo;
	}
}

void ListaCircular::mostrar()
{
	if (inicio == NULL) {
		cout << "Lista Circular vacia " << endl;
	}
	else{
		Nodo* reco = inicio;
		int i = 1;
		do {
			cout << i << "-" << reco->info << endl;
			reco = reco->sig;
			i++;
		} while (reco != inicio);
		

		
	}

	
}


int ListaCircular::tamaño()
{

	if (inicio == NULL) {
		return 0;
	}
	else {
		Nodo* reco = inicio;
		int i = 0;
		do {
			reco = reco->sig;
			i++;
		} while (reco != inicio);
		return i;


	}
	
	
}

void ListaCircular::borrar(int pos)
{
	Nodo* reco;
	Nodo* ante = inicio;
	if (inicio == NULL) {
		cout << " Lista Circular Vacia " << endl;
	}
	else if (pos == 0) {
		cout << "No existe la posicion 0 la lista inicia en: 1 y termina en: " <<tamaño() << endl;
	}
	else if (pos > tamaño()) {
		cout << "La posicion" << pos << "excede el tamaño de la lista que es:" << tamaño() << endl;
	}
	else if (pos == 1) {
		Nodo* borrar = inicio;
		inicio = inicio->sig;
		fin->sig = inicio;
		delete borrar;
	}
	else  if (pos == tamaño()) {
		Nodo* borrarUltimo;
		reco = inicio;
		int i = 0;
		do {
			i++;
			if (i == pos - 1) {
				ante = reco;
				ante->sig = inicio;
			}
			else if (i== pos ) {
				borrarUltimo = reco;
				delete borrarUltimo;
			}
			reco = reco->sig;
		} while (reco != inicio);
	}
	else {
		reco = inicio->sig;
		Nodo* borrarMedio;
		int i = 1;
		do {
			i++;
			if (i == pos) {
				borrarMedio = reco;
				ante->sig = reco->sig;
				delete borrarMedio;
				break;
			}
			else {
				ante = ante->sig;
				reco = reco->sig;
			}
			//reco = reco->sig;
		} while (reco != inicio);
	}
}
