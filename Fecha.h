#pragma once
#include <string>

class Fecha
{

public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    int getDia();
    int getMes();
    int getAnio();

    std::string toString(std::string formatoFecha = "DD/MM/YYYY");


private:
    int _dia;
    int _mes;
    int _anio;
};
