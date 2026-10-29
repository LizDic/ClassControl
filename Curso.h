#pragma once
#include "Grado.h"
#include "Division.h"

class Curso
{
public:
    Curso();
    Curso(int idCurso,
          Grado grado,
          Division div);

    void setIdCurso(int idCurso);
    void setGrado(Grado grado);
    void setDivision(Division division);
    void setEstado(bool estado);

    int getIdCurso();
    Grado getGrado();
    Division getDivision();
    bool getEstado();

private:
    int _idCurso;
    Grado _grado;
    Division _div;
    bool _estado;
};
