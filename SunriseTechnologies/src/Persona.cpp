
#include <iostream>
using namespace std;

#include <clocale>
#include "Persona.h"
#include "Fecha.h"
#include <cstring>

Persona::Persona()
{
    //ctor
}

void Persona::cargar(){

}
void Persona::mostrar(){

}
char *Persona::getDni(){
    return _dni;
}
char *Persona::getNombre(){
    return _nombre;
}
char *Persona::getApellido(){
    return _apellido;
}
char *Persona::getTelefono(){
    return _telefono;
}
char *Persona::getEmail(){
    return _email;
}
void Persona::setDni(char *dni){
    strcpy(_dni, dni);
}
void Persona::setNombre(char *nombre){
    strcpy(_nombre, nombre);
}
void Persona::setApellido(char *apellido){
    strcpy(_apellido, apellido);
}
void Persona::setTelefono(char *telefono){
    strcpy(_telefono, telefono);
}
void Persona::setEmail(char *email){
    strcpy(_email, email);
}
