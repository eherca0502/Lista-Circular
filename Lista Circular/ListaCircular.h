#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
class ListaCircular
{
private:
	Nodo * inicio;
	Nodo * fin;

public:
	ListaCircular();
	void agregar(int valor);
	void mostrar();
	int  tamaño();
	void borrar(int pos);

};

