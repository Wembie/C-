#include <iostream>
#include "menu.h"

int menu(){
    int opcion;
    std::cout << "Menu Tienda\n" << std::endl;
    std::cout << "1. Agregar Productos" << std::endl;
    std::cout << "2. Mostrar Productos" << std::endl;
    std::cout << "0. Salir\n" << std::endl;
    std::cout << "Digita el numero: ";
    std::cin >> opcion;
    return opcion;
}