#pragma once
#include "CursoCodigo.h"
#include "Grado.h"
#include "Division.h"
#include "DiaSemana.h"

class Curso
{
public:
    ///CONSTRUCTORES
    Curso();
    Curso(int idCurso,
          CodigoCurso codCurso,
          Grado grado,
          Division div,
          DiaSemana dSemana);
    ///SETTERS
    void setIdCurso(int idCurso);
    void setCodigoCurso(CodigoCurso codigoCurso);
    void setGrado(Grado grado);
    void setDivision(Division division);
    void setDiaSemana(DiaSemana diaSemana);
    //void setHora(Hora hora);
    void setEstado(bool estado);
    ///GETTERS
    int getIdCurso();
    CodigoCurso getCodigoCurso();
    Grado getGrado();
    Division getDivision();
    DiaSemana getDiaSemana();
    bool getEstado();

private:
    int _idCurso;
    CodigoCurso _codCurso;
    Grado _grado;
    Division _div;
    DiaSemana _dSemana;
    //Hora _hora;
    bool _estado;

};
