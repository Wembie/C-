#include <iostream>
#include "rectangulo.h"

Rectangulo::Rectangulo(){
    this->largo = 0;
    this->ancho = 0;
}

void Rectangulo::setLargo( float largo ){
    this->largo = largo;
}

void Rectangulo::setAncho( float ancho ){
    this->ancho = ancho;
}

float Rectangulo::getLargo(){
    return this->largo;
}

float Rectangulo::getAncho(){
    return this->ancho;
}

void Rectangulo::calcularPerimetro(){
    float perimetro; 
    perimetro = ( 2 * largo ) + ( 2 * ancho );
    std::cout << "El perimetro es: " << perimetro << std::endl;
}

void Rectangulo::calcularArea(){
    float area; 
    area = ( ( largo * ancho ) );
    std::cout << "El area es: " << area << std::endl;
}