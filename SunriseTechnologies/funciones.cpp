#include "rlutil.h"
#include <iostream>
#include <clocale>
#include "Usuario.h"
#include "Destino.h"
#include <cstring>
using namespace std;
using namespace rlutil;
void cargarUsuarios(){
    cls();
    Usuario reg;
    bool opc=1;
    while(opc){
        reg.cargar();
        reg.grabarEnDisco();
        cout << "DESEA CREAR UN NUEVO USUARIO(1:SI, 0:NO): ";
        cin >> opc;
        cin.ignore();
    }
}

int login(){
    cls();
    char usu[10];
    char contra[5];
    cout << "USUARIO: " ;
    cin.getline(usu, 10);
    Usuario reg;
    int pos = 0, con=0;
    while(reg.leerDeDisco(pos++)){
        if(strcmp(reg.getId(), usu)==0){
            if(strcmp(reg.getContrasenia(), "0000") == 0 ){
                cout << "INGRESE LA NUEVA CONTRASEÑA: ";
                cin.getline(contra, 5);
                reg.setContrasenia(contra);
                reg.grabarEnDisco(pos-1);
            }
            else{
                cout << "CONTRASEÑA:" ;
                cin.getline(contra, 5);
                if(strcmp(reg.getContrasenia(), contra)==0){
                    return reg.getPermiso();
                }
                else{
                    cout << "CONTRASEÑA INCORRECTA." << endl;
                    while(con<2){
                        cout << "REINGRESE CONTRASEÑA: ";
                        cin.getline(contra, 5);
                        if(strcmp(reg.getContrasenia(), contra)==0){
                            return reg.getPermiso();
                        }
                        else{
                            con++;
                        }
                        if(con == 2 ){
                            cout << "SE HA BLOQUEADO EL SISTEMA.";
                            return -1;
                        }
                    }
                }
            }
        }
    }
    return -1;
}

void altaDestinos(){
    cls();
    Destino des;
    cin.ignore();
    des.cargar();
    des.grabarEnDisco();
}

void bajaDestinos(){}

void modificarDestinos(){
    cls();
    int pos = 0;
    float precio;
    Destino reg;
    char nombre[50];
    cin.ignore();
    cout << "INGRESE DESTINO A MODIFICAR: ";
    cin.getline(nombre, 50);
    cout << "INGRESE NUEVO PRECIO: ";
    cin >> precio;
    while(reg.leerDeDisco(pos++)){
        if(strcmp(nombre, reg.getDestino()) == 0){
            reg.setPrecio(precio);
            reg.grabarEnDisco(pos-1);
            return;
        }
    }
}

void listadoDestinos(){
    cls();
    int pos=0;
    Destino reg;
    while(reg.leerDeDisco(pos++)){
        reg.mostrar();
    }
}
