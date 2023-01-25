//
// Created by lufe0 on 7/05/2021.
//

#include "View.h"

View::View(){
    controller = Controller();
}
void View::agregarJugador(){
    string nombreJugador;
    float dineroPesos;
    long idJugador;
    cout << "Ingrese el nombre del jugador \n";
    cin.ignore(100, '\n');
    getline(cin, nombreJugador);
    // Id del jugador
    cout << "Ingrese el id del jugador \n";
    cin >> idJugador;
    // Validacion de los datos del jugador
    do{
        cout << "Ingrese el dinero en pesos \n";
        cin >> dineroPesos;
    }while (dineroPesos <= 0);

    // Esta linea de codigo controla la excepcion que lanza el controller y lo muestra en pantalla
    try {
        controller.agregarJugador(idJugador, nombreJugador, dineroPesos);
    } catch (std::domain_error ex) {
        cout << "ERROR: " << ex.what();
    }
}


void View::pedirUsuario(){
    try {
        long idJugador;
        cout << "Ingrese el id del jugador para el que quiere jugar \n";
        cin >> idJugador;
        controller.verInfoJugador(idJugador);

        // LLama a la función que hacer toda la logica de jugar.
        jugarView(idJugador);

    }catch (std::domain_error ex){
        // Se muestra un error si el usuario no existe
        cout << ex.what();
    }
}

void View:: jugarView(long idJugador) {
    int opcion;
    float cantGonzos;
    int idJuego;
    DosColores dosColores;
    Mayor13 mayor13;
    do{
        try {
            do {
                cout << "Cuantos gonzos desea apostar \n";
                cin >> cantGonzos;
                if( controller.getCasino().consultarJugador(idJugador)->getCantGonzos() <= cantGonzos ){
                    cout << "No tiene la cantidad de Gonzos suficientes\n";
                }
            } while (cantGonzos <= 0 || controller.getCasino().consultarJugador(idJugador)->getCantGonzos() <= cantGonzos );
            // Agregue el esto de la logica para el juego 1. Juego mayor a 13, 2 juego de dos colores.
            cout<<"1. Juego Mayor\n2.Juego de dos colores\n0.Salir\nOpcion: "; cin>>opcion;
           if( opcion == 1 ){
                mayor13.jugar(cantGonzos);
           }
           else if( opcion == 2 ){
                dosColores.jugar(cantGonzos);
           }
           else{
               cout<<"Numero invalido\n";
           }
        } catch (std::domain_error ex){
            cout << ex.what();
        }
    }while (opcion!=0);
}

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n";
    cout << "1. Agregar jugador " << std::endl;
    cout << "2. Jugar" << std::endl;
    cout << "3. Consultar jugador - pendiente " << std::endl;
    cout << "4. Vender gonzos - pendiente " << std::endl;
    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
            case 1: agregarJugador();
                break;
            case 2:
                pedirUsuario();
                break;
        }
    } while (opcion != 0);
}

void View::mostrarJugador() {
    // LLama al metodo del controller que muestra los datos
    cout << "Fase dos, por hacer \n";
}

void View::retirarJugador() {
    cout << "Fase dos, por hacer \n";
}

