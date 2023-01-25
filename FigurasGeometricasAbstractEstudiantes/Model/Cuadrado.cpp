#include "Cuadrado.h"

//CONSTRUCTORES CUADRADO
Cuadrado::Cuadrado(){

}

Cuadrado::Cuadrado( float lado ) : Cuadrado(){
    this->lado = lado;
}

//METODOS CUADRADO

void Cuadrado::calcularArea(){
    float area;
    area = lado * lado;
    cout << "El area del cuadrado es: " << area << endl;
}

void Cuadrado::calcularPerimetro(){
    float perimetro;
    perimetro = lado + lado + lado + lado;
    cout << "El perimetro del cuadrado es: " << perimetro << endl;
}

void Cuadrado::mostrarFigura(){
    cout << "El lado: " << lado << endl;
    if( this->area == 0 ){
        this->calcularArea();
    }
    if( this->perimetro == 0 ){
        this->calcularPerimetro();
    }

    FiguraGeometrica::mostrarFigura();
}

float Cuadrado::getLado() const{
    return this->lado;
}

void Cuadrado::setLado( float lado ){
    this->lado = lado;
}