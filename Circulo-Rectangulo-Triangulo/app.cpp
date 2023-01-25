#include <iostream>
#include <math.h>
#include "menu.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "circulo.h"

int main(){
    const int SIZE = 10;
    Rectangulo listaRectangulo [ SIZE ];
    Circulo listaCirculo[ SIZE ];
    Triangulo listaTriangulo[ SIZE ];
    int cantidadCirculos = 0, cantidadRectangulos = 0, cantidadTriangulos = 0, cuantosCirculos, cuantosRectangulos, cuantosTriangulos, opcion, i;
    do{
        opcion = menu();
        switch( opcion ){
            case 0: 
                break;
            case 1: //Rectangulos
                float largo, ancho;
                std::cout << "\nCuantos Rectangulos deseas agregar?: ";
                std::cin >> cuantosRectangulos;
                if( cantidadRectangulos + cuantosRectangulos <= SIZE ){
                    for( i = 0; i < cuantosRectangulos; i++, cantidadRectangulos++ ){
                        std::cout << "Digita el largo del rectangulo " << cantidadRectangulos + 1 << ": ";
                        std::cin >> largo;
                        std::cout << "Digita el ancho del rectangulo " << cantidadRectangulos + 1 << ": ";
                        std::cin >> ancho;
                        listaRectangulo[ cantidadRectangulos ].setAncho( ancho );
                        listaRectangulo[ cantidadRectangulos ].setLargo( largo );
                    }
                }
                else{
                    std::cout << "\nSe sobrepasa el limite\n" << std::endl;
                }
                break;
            case 2: //Mostrar Rectangulos
                std::cout << "\n";
                for( i = 0; i < cantidadRectangulos; i++ ){
                    std::cout << "Rectangulo " << i + 1 << ":" << std::endl;
                    std::cout << " El largo es: " << listaRectangulo[ i ].getLargo()<< std::endl;
                    std::cout << " El Ancho es: " << listaRectangulo[ i ].getAncho()<< std::endl;
                }
                std::cout << "\n";
                break;
            case 3: //Circulos
                float radio;
                std::cout << "\nCuantos Circulos deseas agregar?: ";
                std::cin >> cuantosCirculos;
                if( cantidadCirculos + cuantosCirculos <= SIZE ){
                    for( i = 0; i < cuantosCirculos; i++, cantidadCirculos++ ){
                        std::cout << "Digita el radio del circulo " << cantidadRectangulos + 1 << ": ";
                        std::cin >> radio;
                        listaCirculo[ cantidadCirculos ].setRadio( radio );
                    }
                }
                else{
                    std::cout << "\nSe sobrepasa el limite\n" << std::endl;
                }
                break;
            case 4: //Mostrar Circulos
                std::cout << "\n";
                for( i = 0; i < cantidadCirculos; i++ ){
                    std::cout << "Circulo " << i + 1 << ":" << std::endl;
                    std::cout << " El Radio es: " << listaCirculo[ i ].getRadio()<< std::endl;
                }
                std::cout << "\n";
                break;
            case 5: //Triangulos
                float altura, base;
                std::cout << "\nCuantos Triangulos deseas agregar?: ";
                std::cin >> cuantosTriangulos;
                if( cantidadTriangulos + cuantosTriangulos <= SIZE ){
                    for( i = 0; i < cuantosTriangulos; i++, cantidadTriangulos++ ){
                        std::cout << "Digita la base del triangulo " << cantidadTriangulos + 1 << ": ";
                        std::cin >> altura;
                        std::cout << "Digita la altura del triangulo" << cantidadTriangulos + 1 << ": ";
                        std::cin >> base;
                        listaTriangulo[ cantidadTriangulos ].setAltura( altura );
                        listaTriangulo[ cantidadTriangulos ].setBase( base );
                    }
                }
                else{
                    std::cout << "\nSe sobrepasa el limite\n" << std::endl;
                }
                break;
            case 6: //Mostrar Triangulos
                std::cout << "\n";
                for( i = 0; i < cantidadTriangulos; i++ ){
                    std::cout << "Triangulo " << i + 1 << ":" << std::endl;
                    std::cout << " La altura es: " << listaTriangulo[ i ].getAltura()<< std::endl;
                    std::cout << " La base es: " << listaTriangulo[ i ].getBase()<< std::endl;
                }
                std::cout << "\n";
                break;
            default:
                std::cout << "\nNumero invalido\n" << std::endl;
                break;
        }
    }while( opcion != 0 );
    return 0;
}