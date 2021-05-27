#ifndef VUELO_H
#define VUELO_H
#include "Fecha.h"

class Vuelo{
    private:
        char idAvion[5];
        char idVuelo[5];
        Fecha fechaEmbarque;
        float precioW;
        float precioJ;
        float horaEmb;
        float _std;
        float sta;
        Fecha fechaAterrizaje;
        float eta;
        float etd;
    public:
        char *getidAvion();
        char *getidVuelo();
        Fecha getFechaEmbarque();
        float getPrecioW();
        float getPrecioJ();
        float getHoraEmb();
        float get_Std();
        float getSta();
        Fecha getFechaAterrizaje();
        float getEta();
        float getEtd();
        void setidAvion(char *);
        void setidVuelo(char *);
        void setFechaEmbarque(Fecha);
        void setPrecioW(float);
        void setPrecioJ(float);
        void setHoraEmb(float);
        void set_Std(float);
        void setSta(float);
        void setFechaAterrizaje(Fecha);
        void setEta(float);
        void setEtd(float);
        void cargar();
        void mostrar();
        bool grabarEnDisco(int);
        bool leerDeDisco(int);
};

#endif // VUELO_H
