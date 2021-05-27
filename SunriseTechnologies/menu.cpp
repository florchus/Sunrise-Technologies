
#include <iostream>
using namespace std;
#include <cstring>
#include <clocale>
#include "Usuario.h"
#include "funciones.h"

void menuOperador(){
    int opcion, pos=0;
    Usuario usu;
    char nombre[10];
    bool grabo;
    do{
        cout << "MENÚ OPERADOR" << endl;
        cout << "-------------" << endl;
        cout << "1-ALTA USUARIO" << endl;
        cout << "2-BLANQUEO DE USUARIO" << endl; //SETEAR 0000 Y VERIFICAR QUE SEA ASI, ENTONCES EL USUARIO INGRESA NUEVA CONTRASEÑA CON UN SETCONTRASENIA
        cout << "0-SALIR" << endl;
        cout << "--> ";
        cin >> opcion;
        switch (opcion){
        case 1:
            cin.ignore();
            usu.cargar();
            usu.grabarEnDisco();
            break;
        case 2:
            cin.ignore();
            cout << "INGRESE NOMBRE DE USUARIO: ";
            cin.getline(nombre, 10);
            while(usu.leerDeDisco(pos)){
                if(strcmp(nombre, usu.getId()) == 0){
                    usu.setContrasenia("0000");
                    grabo = usu.grabarEnDisco(pos);
                    cout << "USUARIO BLANQUEADO CORRECTAMENTE." << endl;
                }
                pos++;
            }
            break;
        case 0:
            cout << endl << endl;
            break;
        default:
            cout << "OPCIÓN INCORRECTA.";
            break;
        }

    } while (opcion !=0);
}


void menuDestinos(){
    int opcion;
    do{
        cout << "MENÚ DESTINOS" << endl;
        cout << "-------------" << endl;
        cout << "1-ALTA DE DESTINOS" << endl;
        cout << "2-BAJA DE DESTINOS" << endl;
        cout << "3-MODIFICACIÓN DE DESTINOS" << endl;
        cout << "4-LISTADO DE DESTINOS" << endl;
        cout << "0-SALIR" << endl;
        cout << "--> ";
        cin >> opcion;
        switch (opcion){
        case 1:
            altaDestinos();
            break;
        case 2:
            bajaDestinos();
            break;
        case 3:
            modificarDestinos();
            break;
        case 4:
            listadoDestinos();
            break;
        case 0:
            cout << endl << endl;
            break;
        default:
            cout << "OPCIÓN INCORRECTA.";
            break;
        }

    } while (opcion != 0);
}

void menuSistemas(){
    int opcion;
    do{
        cout << "MENÚ SISTEMAS" << endl;
        cout << "-------------" << endl;
        cout << "1-OPERADOR" << endl;
        cout << "2-DESTINOS" << endl;
        cout << "3-VUELOS" << endl;
        cout << "0-SALIR" << endl;
        cout << "--> ";
        cin >> opcion;
        switch (opcion){
        case 1:
            menuOperador();
            break;
        case 2:
            menuDestinos();
            break;
        case 3:
            break;
        case 0:
            cout << "GRACIAS POR VISITAR SUNRISE TECHNOLOGIES.";
            break;
        default:
            cout << "OPCIÓN INCORRECTA.";
            break;
        }


    } while (opcion !=0);
}

void menuVentas(){}

void menuCheckin(){}
