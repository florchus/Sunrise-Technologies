#ifndef ASIENTO_H
#define ASIENTO_H
#include "Vuelo.h"

class Asiento{
    private:
        bool _clase;
        bool _numAsiento[20][6];
        char idPnr[6];
    public:
        void cargar();
        void mostrar();
        bool getClase();
        bool getNumAsiento();
        char *getIdPnr();
        void setClase(bool);
        void setNumAsiento(bool, int, int);
        void setIdPnr(char*);
};

#endif // ASIENTO_H
