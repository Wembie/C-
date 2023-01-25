#include <iostream>
#include "tienda.h"
#include "producto.h"
#include "menu.h"

int main(){
    Tienda miTienda;
    std::string nombre, nombreBoss, nombreProducto;
    int opcion, cuantosProductosHay = 0, cuantosProductosParaAgregar, i;
    std::cout << "Digita el nombre de la tienda: ";
    std::cin >> nombre;
    std::cout << "Digita el nombre del jefe de la tienda: ";
    std::cin >> nombreBoss;
    miTienda.setNombre( nombre );
    miTienda.setNombreBoss( nombreBoss );
    std::cout << "\n";
    do{
        opcion = menu();
        switch( opcion ){
            case 0: 
                break;
            case 1:
                std::cout << "\nCuantos Productos deseas agregar?: ";
                std::cin >> cuantosProductosParaAgregar;
                std::cout << "\n";
                if( cuantosProductosHay + cuantosProductosParaAgregar <= SIZE ){
                    for( i = 0; i < cuantosProductosParaAgregar; i++, cuantosProductosHay++ ){
                        std::cout << "Digita el nombre del producto " << cuantosProductosHay + 1 << ": ";
                        std::cin >> nombreProducto;
                        miTienda.setProducto( cuantosProductosHay, Producto( nombreProducto ) );
                    }
                    std::cout << "\n";
                }
                else{
                    std::cout << "Se sobrepasa el limite\n" << std::endl;
                }
                break;
            case 2:
                std::cout << "\n";
                miTienda.mostrarTodosLosProductos( cuantosProductosHay );
                std::cout << "\n";
                break;
            default:
                std::cout << "\nNumero invalido\n" << std::endl;
                break;
        }
    }while( opcion != 0 );
    return 0;
}