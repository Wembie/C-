#include <iostream>

int menu(){
    int opcion;
    std::cout << "Menu\n" << std::endl;
    std::cout << "1. Rectangulos" << std::endl;
    std::cout << "2. Mostrar Rectangulos" << std::endl;
    std::cout << "3. Circulos" << std::endl;
    std::cout << "4. Mostrar Circulos" << std::endl;
    std::cout << "5. Triangulos" << std::endl;
    std::cout << "6. Mostrar Triangulos" << std::endl;
    std::cout << "0. Salir\n" << std::endl;
    std::cout << "Digita el numero: ";
    std::cin >> opcion;
    return opcion;
}