
#include <iostream>
using namespace std;

#include <clocale>
#include "Destino.h"
#include <cstring>
#include "Persona.h"
Destino::Destino()
{
    //ctor
}

void Destino::cargar(){
    cout << "DESTINO: " ;
    cin.getline(_destino, 50);
    cout << "PAÍS: " ;
    cin.getline(_pais, 50);
    cout << "PRECIO: " ;
    cin >> _precio;
}
void Destino::mostrar(){
    cout << "DESTINO: " << _destino << endl;
    cout << "PAÍS   : " << _pais << endl;
    cout << "PRECIO : " << _precio << endl;
    cout << "-------  " << endl;
}
char *Destino::getDestino(){
    return _destino;
}
float Destino::getPrecio(){
    return _precio;
}
char *Destino::getPais(){
    return _pais;
}

void Destino::setDestino(char *destino){
    strcpy(_destino, destino);
}
void Destino::setPrecio(float precio){
    if(precio >= 0){
        _precio = precio;
    }
    else{
        _precio = 0;
    }
}

void Destino::setPais(char *pais){
    strcpy(_pais, pais);
}
bool Destino::grabarEnDisco(int pos){
    bool guardo;
    FILE *p;
    p = fopen("destinos.dat", "rb+");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Destino)*pos, SEEK_SET);
    guardo = fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return guardo;
}
bool Destino::leerDeDisco(int pos){
    bool lectura;
    FILE *p;
    p = fopen("destinos.dat", "rb");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Destino)*pos, SEEK_SET);
    lectura = fread(this, sizeof *this, 1, p);
    fclose(p);
    return lectura;
}

void Destino::grabarEnDisco(){
    bool guardo;
    FILE *p;
    p = fopen("destinos.dat", "ab");
    if( p == NULL ){
        return;
    }
    guardo = fwrite(this, sizeof *this, 1, p);
    fclose(p);
}
