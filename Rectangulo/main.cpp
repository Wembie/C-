#include <iostream>

class Rectangulo{
    private: 
        float largo, ancho; //Variables de instancia
    public:
        /*Constructores:
        No específico ninguno:  No tengo que hacer nada. El compilador provee un constructor por defecto por mi 
        Declaro e implemento un constructor con parámetros: (Tengo) que declarar e implementar el constructor por defecto.  
        Declaro e implemento el constructor por defecto. (Puedo) definir tantos constructores con parámetros como tenga sentido para mi problema*/
        Rectangulo(); //Constructor por defecto "Pa arreglos o etc xd"
        Rectangulo( float, float ); //Constructor
        float getLargo(); //Ver el largo
        void setLargo( float ); //Cambiar el largo
        void calcularPerimetro();
        void calcularArea();
};

Rectangulo::Rectangulo(){
    this->largo = 5;
    this->ancho = 6;
    std::cout << "Entre y me cree :3 pero por el constructor por defecto" << std::endl;
}

//Sin cambiar nombre
Rectangulo::Rectangulo( float largo, float ancho ){
    //Inicializar las variables de instacia
    this->largo = largo; 
    this->ancho = ancho;
    std::cout << "Entre y me cree :3 pero por el constructor con parametros" << std::endl;
}

/*Cambiando nombre
Rectangulo::Rectangulo( float larguito, float anchito ){
    //Inicializar las variables de instacia
    largo = larguito; 
    ancho = anchito;
    std::cout << "Entre y me cree :3" << std::endl;
}*/

float Rectangulo::getLargo(){
    return this->largo;
    //return largo;
}

void Rectangulo::setLargo( float largo ){
    this->largo = largo;
}

void Rectangulo::calcularPerimetro(){
    float perimetro; //Variable Local
    perimetro = ( 2 * largo ) + ( 2 * ancho );
    std::cout << "El perimetro es: " << perimetro << std::endl;
}

void Rectangulo::calcularArea(){
    float area; //Variable Local
    area = ( ( largo * ancho ) );
    std::cout << "El area es: " << area << std::endl;
}

int main(){
    //Instanciar -> Crear objeto de una clase
    Rectangulo miRectangulo( 2, 2 ); 
    //Calcular perimetro
    miRectangulo.calcularPerimetro();
    //Calcular area
    miRectangulo.calcularArea();
    //Mostrar largo
    std::cout << "El largo es: " << miRectangulo.getLargo() << std::endl;
    //Cambiar el parametro (largo)
    std::cout << "Cambiando Largo..." << std::endl;
    miRectangulo.setLargo( 50 );
    miRectangulo.calcularPerimetro();
    miRectangulo.calcularArea();
    std::cout << "El largo es: " << miRectangulo.getLargo() << std::endl;
    //Probando el constructor por defecto
    Rectangulo miRectangulito;
    miRectangulito.calcularPerimetro();
    miRectangulito.calcularArea();
    std::cout << "El largo es: " << miRectangulito.getLargo() << std::endl;
    return 0;
}