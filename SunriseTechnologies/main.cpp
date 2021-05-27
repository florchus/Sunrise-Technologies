//Nombre: María Soledad Arena - Florencia Farias - Miguel Acosta
//TP Nº:
//EJ Nº:
/*Comentarios:
*/
#include <iostream>
#include <clocale>
#include "Usuario.h"
#include "funciones.h"
#include "menu.h"
#include "rlutil.h"
using namespace std;
using namespace rlutil;


int main(){
	setlocale(LC_ALL, "Spanish");
    Usuario usu1;
    //usu1.cargar();
    //cargarUsuarios();
    int permiso, opcion =0;
    permiso = login();
    while(opcion == 0){
        switch (permiso){
            case 1:
                cls();
                menuSistemas();
                opcion =1;
                break;
            case 2:
                cls();
              //  menuReserva();
                opcion =1;
                break;
            case 3:
                cls();
            //    menuCheckin();
                opcion =1;
                break;
            case -1:
                cls();
                cout << "VUELVA A INGRESAR AL SISTEMA" << endl;
                permiso = login();
                break;
        }
    }

	return 0;
}
