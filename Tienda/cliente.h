#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente{
    private:
        std::string nombre;
        std::string email;
        int id;
        int telefono;
        int cantidadLitrosTomados;
    public:
        Cliente();
};

#endif