#include <iostream>
#include <vector>

using namespace std;

class Pasajero{
	public:
	    Pasajero( string nombre, int cedula, string tipo, int silla ){
	        this->nombre = nombre;
	        this->cedula = cedula;
	        this->tipo = tipo;
	        this->silla = silla;
	    }
	    string getNombre() const{
	        return nombre;
	    }
	    int getCedula() const{
	        return cedula;
	    }
	    string getTipo() const{
	        return tipo;
	    }
	    int getSilla() const{
	        return silla;
	    }
	private:
	    string nombre;
	    int cedula;
	    string tipo;
	    int silla;
};

class Avion{
	public:
	    Avion( int numero, int turistas, int ejecutivas ){
	        this->numero = numero;
	        this->turistas = turistas;
	        this->ejecutivas = ejecutivas;
	        for( int i = 0; i < turistas + ejecutivas; i++ ){
	            pasajeros.push_back( NULL );
	        }
	    }
	    bool insertarPasajero( Pasajero * pasajero ){
	        if( pasajero->getTipo() == "turista" ){
	            if( numTuristas < turistas ){
	                pasajeros[ numTuristas++ ] = pasajero;
	                return true;
	            }
	        } 
			else if( pasajero->getTipo() == "ejecutivo" ){
	            if( numEjecutivas < ejecutivas ){
	                pasajeros[ turistas + numEjecutivas++ ] = pasajero;
	                return true;
	            }
	        }
	        return false;
	    }
	    vector< Pasajero* > getPasajeros( string tipo ) const{
	        vector< Pasajero* > result;
	        for( int i = 0; i < turistas + ejecutivas; i++ ){
	            if( pasajeros[ i ] != NULL && pasajeros[ i ]->getTipo() == tipo ){
	                result.push_back( pasajeros[ i ] );
	            }
	        }
	        return result;
	    }
	    int getNumSillas() const{
	        return turistas + ejecutivas;
	    }
	    int getNumTuristas() const{
	        return numTuristas;
	    }
	    int getNumEjecutivas() const{
	        return numEjecutivas;
	    }
	    int getSillaPorCedula( int cedula ) const{
	        for( int i = 0; i < turistas + ejecutivas; i++ ){
	            if( pasajeros[ i ] != NULL && pasajeros[ i ]->getCedula() == cedula ){
	                return pasajeros[ i ]->getSilla();
	            }
	        }
	        return -1;
	    }
	private:
	    int numero;
	    int turistas;
	    int ejecutivas;
	    int numTuristas = 0;
	    int numEjecutivas = 0;
	    vector< Pasajero* > pasajeros;
};

class Aerolinea{
	public:
	    Aerolinea(){
	        avion = NULL;
	    }
	    void crearAvion( int numero, int turistas, int ejecutivas ){
	        if( avion != NULL ){
	            delete avion;
	        }
	        avion = new Avion( numero, turistas, ejecutivas );
	    }
	    bool insertarPasajero( string nombre, int cedula, string tipo ){
	        int silla = avion->getNumTuristas() + avion->getNumEjecutivas() + 1;
	        Pasajero * pasajero = new Pasajero( nombre, cedula, tipo, silla );
	        if( avion->insertarPasajero( pasajero ) ){
	            pasajeros.push_back( pasajero );
	            return true;
	        }
	        delete pasajero;
	        return false;
	    }
	    void imprimirPasajeros( string tipo ) const{
	        vector<Pasajero*> pasajerosTipo = avion->getPasajeros(tipo);
	        for (int i = 0; i < pasajerosTipo.size(); i++) {
	    		Pasajero * pasajero = pasajerosTipo[i];
	            cout << "Nombre: " << pasajero->getNombre() << endl;
	            cout << "Cedula: " << pasajero->getCedula() << endl;
	            cout << "Tipo: " << pasajero->getTipo() << endl;
	            cout << "Silla: " << pasajero->getSilla() << endl;
	        }
	    }
	    void verNumSillas() const{
	        cout << "Numero de sillas: " << avion->getNumSillas() << endl;
	        cout << "Numero de sillas turistas: " << avion->getNumTuristas() << endl;
	        cout << "Numero de sillas ejecutivas: " << avion->getNumEjecutivas() << endl;
	    }
	    int getSillaPorCedula( int cedula ) const{
	        return avion->getSillaPorCedula( cedula );
	    }
	    Avion* getAvion() const{
	        return avion;
	    }
		~Aerolinea(){
		    for( int i = 0; i < pasajeros.size(); i++ ){
		        delete pasajeros[ i ];
		    }
		    if( avion != NULL ){
		        delete avion;
		    }
		}
	private:
	    Avion* avion;
	    vector< Pasajero* > pasajeros;
};

int main() {
    Aerolinea aerolinea;
    aerolinea.crearAvion( 100, 80, 20 );
    int opcion;
    do{
        cout << "Menu: " << endl;
        cout << "1. Insertar Pasajero" << endl;
        cout << "2. Imprimir Pasajeros por tipo de sillas" << endl;
        cout << "3. Ver numero de sillas" << endl;
        cout << "4. Ver silla por cedula" << endl;
        cout << "5. Salir" << endl;
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;
        cout << "" << endl;
        switch( opcion ){
            case 1: {
                string nombre, tipo;
                int cedula, silla;
                cout << "Ingrese el nombre del pasajero: ";
                cin >> nombre;
                cout << "Ingrese la cedula del pasajero: ";
                cin >> cedula;
                cout << "Ingrese el tipo de silla ( turista o ejecutivo ): ";
                cin >> tipo;
                if( aerolinea.insertarPasajero( nombre, cedula, tipo ) ) {
                    cout << "Pasajero registrado exitosamente" << endl;
                } 
				else {
                    cout << "No se pudo registrar el pasajero" << endl;
                }
                break;
            }
            case 2: {
                string tipo;
                cout << "Ingrese el tipo de silla ( turista o ejecutivo ): ";
                cin >> tipo;
                vector< Pasajero* > pasajeros = aerolinea.getAvion()->getPasajeros( tipo );
				vector< Pasajero* >::iterator it;
                if( pasajeros.empty() ){
                    cout << "No hay pasajeros registrados en esa categoria" << endl;
                } 
				else{
                    cout << "Pasajeros registrados en la categoria " << tipo << ":" << endl;
                    for( it = pasajeros.begin(); it != pasajeros.end(); ++it ){
    					Pasajero* pasajero = *it;
                        cout << "Nombre: " << pasajero->getNombre() << " - Cedula: " << pasajero->getCedula() << " - Silla: " << pasajero->getSilla() << endl;
                    }
                }
                break;
            }
            case 3: {
                cout << "El avion tiene " << aerolinea.getAvion()->getNumSillas() << " sillas, de las cuales " << aerolinea.getAvion()->getNumTuristas() << " son turistas y " << aerolinea.getAvion()->getNumEjecutivas() << " son ejecutivas" << endl;
                break;
            }
            case 4: {
                int cedula;
                cout << "Ingrese la cedula del pasajero: ";
                cin >> cedula;
                int silla = aerolinea.getSillaPorCedula( cedula );
                if( silla == -1 ) {
                    cout << "No se encontro un pasajero con esa cedula" << endl;
                } 
				else {
                    cout << "El pasajero con cedula " << cedula << " tiene asignada la silla " << silla << endl;
                }
                break;
            }
            case 5: {
                cout << "Saliendo del programa" << endl;
                break;
            }
            default: {
                cout << "Opcion invalida" << endl;
                break;
            }
        }
    cout << "" << endl;
    }while( opcion != 5 );
    return 0;
}
