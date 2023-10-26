//
// Created by virrr on 10/25/2023.
//
#include <fstream>
#include <sstream>
#include "Archivos.h"

void cargarArticulosDesdeCSV(Lista<Articulo>& lista, const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    std::string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            std::stringstream ss(linea);
            std::string nombre;
            int stock, minimoStock;

            getline(ss, nombre, ',');
            ss >> stock;
            ss.ignore(); // Ignorar la coma
            ss >> minimoStock;

            Articulo articulo(nombre, stock, minimoStock);
            lista.insertar(lista.getTamanio(), articulo); // Añadir al final de la lista
        }
        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }
}

