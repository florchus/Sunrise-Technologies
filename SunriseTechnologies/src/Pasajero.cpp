
#include <iostream>
using namespace std;

#include <clocale>
#include "Pasajero.h"
#include "Persona.h"

Pasajero::Pasajero()
{
    //ctor
}

void Pasajero::cargar(){
}
void Pasajero::mostrar(){
}
char *Pasajero::getPnr(){
    return _pnr;
}
int Pasajero::getEdad(){
    return _edad;
}
float Pasajero::getKilos(){
    return _kilos;
}
bool Pasajero::getEmbarco(){
    return _embarco;
}
bool Pasajero::grabarEnDisco(int pos){
    bool guardo;
    FILE *p;
    p = fopen("pasajeros.dat", "rb+");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Pasajero)*pos, SEEK_SET);
    guardo = fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return guardo;
}
bool Pasajero::leerDeDisco(int pos){
    bool lectura;
    FILE *p;
    p = fopen("pasajeros.dat", "rb");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Pasajero)*pos, SEEK_SET);
    lectura = fread(this, sizeof *this, 1, p);
    fclose(p);
    return lectura;
}
