#ifndef RESERVA_H
#define RESERVA_H
#include "Fecha.h"

class Reserva
{
    private:
        char _idPnr[6];
        Fecha _fechaEmbarque;
        char _idVenta[5];
        float _importe;
    public:
        Reserva();
        void cargar();
        void mostrar();
        char *getIdPnr();
        Fecha getFechaEmbarque();
        char *getIdVentas();
        float getImporte();
        void setIdPnr(char*);
        void setFechaEmbarque(Fecha);
        void setIdVenta(char*);
        void setImporte(float);
        bool grabarEnDisco(int);
        bool leerDeDisco(int);

};

#endif // RESERVA_H
