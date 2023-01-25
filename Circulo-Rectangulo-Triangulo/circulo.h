#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo{
    private:
        float radio, pi;
    public:
        Circulo();
        Circulo( float );
        float getRadio();
        void setRadio( float );
        void calcularArea();
        void calcularPerimetro();
};

#endif