#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto{
    private:
        std::string nombre;
        std::string marca;
        int codigo;
        float precio;
    public:
        Producto();
        Producto( std::string );
        void mostrarProducto( int );
};

#endif