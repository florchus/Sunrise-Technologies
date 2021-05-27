#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    private:
        int _dia;
        int _mes;
        int _anio;
    public:
        int getDia();
        void setDia(int val);
        int getMes();
        void setMes(int val);
        int getAnio();
        void setAnio(int val);
        void mostrar();
        void cargar();
};

#endif // FECHA_H
