#include <iostream>
#include <math.h>

class Triangulo{
    private:
        float base, altura;
    public:
        Triangulo();
        void setBase( float );
        void setAltura( float );
        float getBase();
        float getAltura();
        void calcularArea();
        void calcularPerimetro();
};

Triangulo::Triangulo(){
    this->altura = 0;
    this->base = 0;
}

void Triangulo::setBase( float base ){
    this->base = base;
}

void Triangulo::setAltura( float altura ){
    this->altura = altura;
}

float Triangulo::getBase(){
    return this->base;
}

float Triangulo::getAltura(){
    return this->altura;
}

void Triangulo::calcularArea(){
    float area;
    area = ( base * altura ) / 2;
    std::cout << "El area del Triangulo es: " << area << std::endl;
}

void Triangulo::calcularPerimetro(){
    float perimetro, temp;
    temp = base / 2;
    perimetro = 2 * ( ( sqrt( ( temp * temp ) ) + ( altura * altura ) ) ) + base;
    std::cout << "El perimetro del Triangulo es: " << perimetro << std::endl;
}

int main(){
    Triangulo miTriangulo;
    miTriangulo.calcularArea();
    miTriangulo.calcularPerimetro();
    return 0;
}