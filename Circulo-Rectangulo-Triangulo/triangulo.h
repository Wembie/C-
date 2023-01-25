#ifndef TRIANGULO_H
#define TRIANGULO_H

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

#endif