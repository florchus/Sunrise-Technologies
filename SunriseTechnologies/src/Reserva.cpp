
#include <iostream>
using namespace std;

#include <clocale>
#include <cstring>
#include "Reserva.h"
#include "Fecha.h"

Reserva::Reserva()
{
    //ctor
}


void Reserva::cargar(){}
void Reserva::mostrar(){}

char *Reserva::getIdPnr(){
    return _idPnr;
}
Fecha Reserva::getFechaEmbarque(){
    return _fechaEmbarque;
}
char *Reserva::getIdVentas(){
    return _idVenta;
}
float Reserva::getImporte(){
    return _importe;
}
void Reserva::setIdPnr(char *pnr){
    strcpy(_idPnr, pnr);
}
void Reserva::setFechaEmbarque(Fecha fecha){
    _fechaEmbarque = fecha;
}
void Reserva::setIdVenta(char *venta ){
    strcpy(_idVenta, venta);
}
void Reserva::setImporte(float importe){
    if(importe >= 0){
        _importe = importe;
    }
    else{
        _importe = 0;
    }
}
bool Reserva::grabarEnDisco(int pos){
    bool guardo;
    FILE *p;
    p = fopen("reservas.dat", "rb+");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Reserva)*pos, SEEK_SET);
    guardo = fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return guardo;
}
bool Reserva::leerDeDisco(int pos){
    bool lectura;
    FILE *p;
    p = fopen("reservas.dat", "rb");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Reserva)*pos, SEEK_SET);
    lectura = fread(this, sizeof *this, 1, p);
    fclose(p);
    return lectura;
}
