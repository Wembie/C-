#include <iostream>
#include <math.h>

class Circulo{
    private:
        float radio, pi;
    public:
        Circulo( float );
        float getRadio();
        void calcularArea();
        void calcularPerimetro();
};

Circulo::Circulo( float radio ){
    this->radio = radio;
    this->pi = 3.14159265359;
}

float Circulo::getRadio(){
    return this->radio;
}

void Circulo::calcularArea(){
    float area, piPorRadio;
    piPorRadio = pi * radio;
    area = pow( piPorRadio, 2 );
    std::cout << "El area es: " << area << std::endl;
}

void Circulo::calcularPerimetro(){
    float perimetro;
    perimetro =  2 * pi * radio;
    std::cout << "El perimetro es: " << perimetro << std::endl;
}

int main(){
    Circulo miCirculo( 5 );
    miCirculo.calcularArea();
    miCirculo.calcularPerimetro();
    std::cout << "El radio es: " << miCirculo.getRadio() << std::endl;
    return 0;
}