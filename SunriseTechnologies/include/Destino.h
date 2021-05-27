#ifndef DESTINO_H
#define DESTINO_H


class Destino
{
    private:
        char _destino[50];
        float _precio;
        char _pais[50];
    public:
        Destino();
        void cargar();
        void mostrar();
        char *getDestino();
        float getPrecio();
        char *getPais();
        void setDestino(char*);
        void setPrecio(float);
        void setPais(char*);
        bool grabarEnDisco(int);
        void grabarEnDisco();
        bool leerDeDisco(int);
};

#endif // DESTINO_H
