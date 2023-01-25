#include <iostream>
#include "tienda.h"

Tienda::Tienda(){
}

void Tienda::setProducto( int n, Producto producto ){
    this->listaProductos[ n ] = producto;
}

void Tienda::setNombre( std::string nombre ){
    this->nombre = nombre;
}

void Tienda::setNombreBoss( std::string nombreBoss ){
    this->nombreBoss = nombreBoss;
}

void Tienda::mostrarTodosLosProductos( int cuantosProductosHay ){
    int i;
    std::cout << "Productos: " << std::endl;
    for( i = 0; i < cuantosProductosHay; i++ ){
        listaProductos[ i ].mostrarProducto( i );
    }
}
