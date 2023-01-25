//#ifndef CUADRADO_H
// Guardas
//#define CUADRADO_H

#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

#include "FiguraGeometrica.h"

//CLASE CUADRADO

class Cuadrado : public FiguraGeometrica{
    private: //atributos
        float lado;
    public:
        Cuadrado(); //NO OLVIDAR
        Cuadrado( float );
        virtual void calcularArea();
        virtual void calcularPerimetro();
        virtual void mostrarFigura();
        float getLado() const;
        void setLado( float );
};

//#endif /* !CIRCULO_H */