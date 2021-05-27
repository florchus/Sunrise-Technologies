#ifndef PASAJERO_H
#define PASAJERO_H
#include "Persona.h"

class Pasajero:public Persona
{
    private:
        char _pnr[6];
        int _edad;
        float _kilos;
        bool _embarco;
    public:
        Pasajero();
        void cargar();
        void mostrar();
        char *getPnr();
        int getEdad();
        float getKilos();
        bool getEmbarco();
        bool grabarEnDisco(int);
        bool leerDeDisco(int);
};

#endif // PASAJERO_H
