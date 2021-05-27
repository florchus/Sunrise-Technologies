#include <iostream>
#include <cstring>
using namespace std;
#include <clocale>
#include "Vuelo.h"
char *Vuelo::getidAvion(){
    return idAvion;
}
char *Vuelo::getidVuelo(){
    return idVuelo;
}
Fecha Vuelo::getFechaEmbarque(){
    return fechaEmbarque;
}
float Vuelo::getPrecioW(){
    return precioW;
}
float Vuelo::getPrecioJ(){
    return precioJ;
}
float Vuelo::getHoraEmb(){
    return horaEmb;
}
float Vuelo::get_Std(){
    return _std;
}
float Vuelo::getSta(){
    return sta;
}
Fecha Vuelo::getFechaAterrizaje(){
    return fechaAterrizaje;
}
float Vuelo::getEta(){
    return eta;
}
float Vuelo::getEtd(){
    return etd;
}
void Vuelo::setidAvion(char * _idAvion){
    strcpy(idAvion, _idAvion);
}
void Vuelo::setidVuelo(char * _idVuelo){
    strcpy(idVuelo, _idVuelo);
}
void Vuelo::setFechaEmbarque(Fecha _fechaEmbarque){
    fechaEmbarque=_fechaEmbarque;
}
void Vuelo::setPrecioW(float _precioW){
    precioW=_precioW;
}
void Vuelo::setPrecioJ(float _precioJ){
    precioJ=_precioJ;
}
void Vuelo::setHoraEmb(float _horaEmb){
    horaEmb=_horaEmb;
}
void Vuelo::set_Std(float std_){
    _std=std_;
}
void Vuelo::setSta(float _sta){
    sta=_sta;
}
void Vuelo::setFechaAterrizaje(Fecha _fechaAterrizaje){
    fechaAterrizaje=_fechaAterrizaje;
}
void Vuelo::setEta(float _eta){
    eta=_eta;
}
void Vuelo::setEtd(float _etd){
    etd=_etd;
}
void Vuelo::cargar(){
}
void Vuelo::mostrar(){
}
bool Vuelo::grabarEnDisco(int pos){
    bool guardo;
    FILE *p;
    p = fopen("vuelos.dat", "rb+");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Vuelo)*pos, SEEK_SET);
    guardo = fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return guardo;
}
bool Vuelo::leerDeDisco(int pos){
    bool lectura;
    FILE *p;
    p = fopen("vuelos.dat", "rb");
    if( p == NULL ){
        return false;
    }
    fseek(p, sizeof(Vuelo)*pos, SEEK_SET);
    lectura = fread(this, sizeof *this, 1, p);
    fclose(p);
    return lectura;
}
