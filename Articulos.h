#ifndef ARTICULO_H
#define ARTICULO_H

#include <iostream>
#include <string>
using namespace std;

class Articulo {
private:
    string nombre;
    int stock;
    int minimoStock;

public:
    // Constructor por defecto
    Articulo() : nombre(""), stock(0), minimoStock(0) {}

    // Constructor con parámetros
    Articulo(string nombre, int stock, int minimoStock) : nombre(nombre), stock(stock), minimoStock(minimoStock) {}

    // Métodos getter y setter
    string getNombre() const {
        return nombre;
    }

    void setNombre(const string& n) {
        nombre = n;
    }

    int getStock() const {
        return stock;
    }

    void setStock(int s) {
        stock = s;
    }

    int getMinimoStock() const {
        return minimoStock;
    }

    void setMinimoStock(int ms) {
        minimoStock = ms;
    }

    // Método para mostrar la información del artículo
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Stock: " << stock << endl;
        cout << "Mínimo Stock: " << minimoStock << endl;
    }
};


#endif
