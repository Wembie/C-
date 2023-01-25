#include <iostream>
#include "circulo.h"

Circulo::Circulo(){
    radio = 0;
    pi = 3.14159265359;
}

Circulo::Circulo( float radio ){
    this->radio = radio;
    this->pi = 3.14159265359;
}

float Circulo::getRadio(){
    return this->radio;
}

void Circulo::setRadio( float radio ){
    this->radio = radio;
}

void Circulo::calcularArea(){
    float area, piPorRadio;
    piPorRadio = pi * radio;
    area = piPorRadio * piPorRadio; //Potencia 2
    std::cout << "El area es: " << area << std::endl;
}

void Circulo::calcularPerimetro(){
    float perimetro;
    perimetro =  2 * pi * radio;
    std::cout << "El perimetro es: " << perimetro << std::endl;
}