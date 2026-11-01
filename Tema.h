#pragma once
#ifndef TEMA_H
#define TEMA_H
#include <string>
#include <cstring>
using namespace std;

class Tema{
private:
    int _idTema;
    int _idUnidad;
    char _nombre[80];
    int _orden;
    bool _eliminado;

public:
    //Declaración de constructor.
    Tema();
    Tema(int IdTema, int IdUnidad, std::string nombre, int orden, bool eliminado);
    //Getters
    int getIdTema();
    int getIdUnidad();
    std::string getNombre();
    int getOrden();
    bool getEliminado();
    //Setters
    void setIdTema(int idTema);
    void setIdUnidad(int idUnidad);
    void setNombre(std::string nombre);
    void setOrden(int orden);
    void setEliminado(bool eliminado );
};
#endif // TEMA_H
