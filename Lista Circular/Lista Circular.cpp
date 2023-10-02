#include <iostream>
#include "ListaCircular.h"
#include "Lista Circular.h"
using namespace std;

int main()
{
    ListaCircular lc;
    lc.agregar(5);
    lc.agregar(3);
    lc.agregar(2);
    lc.agregar(8);
    //lc.mostrar();
    //cout << "El tamaño de la lista circular es:" << lc.tamaño() << endl;
    lc.borrar(4);
    lc.mostrar();
};
