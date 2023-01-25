#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo{
    private: 
        float largo, ancho; 
    public:
        Rectangulo(); 
        void setLargo( float ); 
        void setAncho( float );
        float getLargo();
        float getAncho();
        void calcularPerimetro();
        void calcularArea();
};

#endif