#include <iostream>
#include "producto.h"

Producto::Producto(){
}

Producto::Producto( std::string nombre ){
    this->nombre = nombre;
}

void Producto::mostrarProducto( int numero ){
    std::cout << " " << numero + 1 << ". " << this->nombre << std::endl;
}