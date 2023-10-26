#include "Estructuras/Lista.h"
#include "Articulos.h"
#include "Archivos.h"

#include <iostream>

int main() {
    Lista<Articulo> listaDeArticulos;

    cargarArticulosDesdeCSV(listaDeArticulos, "articulos.csv");


    return 0;
}

