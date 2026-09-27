#pragma once
#include "CodigoCurso.h"
#include "Nivel.h"
#include "Grado.h"
#include "Division.h"
#include "DiaSemana.h"

class Curso
{
public:
    ///SETTERS
    void setIdCurso(int idCurso);
    void setCodigoCurso(CodigoCurso codigoCurso);
    void setNivel(Nivel nivel);
    void setGrado(Grado grado);
    void setDivision(Division division);
    void setDiaSemana(DiaSemana diaSemana);
    //void setHora(Hora hora);
    void setEstado(bool estado);
    ///GETTERS
    int getIdCurso()const;
    CodigoCurso getCodigoCurso()const;
    Nivel getNivel()const;
    Grado getGrado()const;
    Division getDivision()const;
    DiaSemana getDiaSemana()const;
    bool getEstado()const;

private:
    int _idCurso;
    CodigoCurso _codigoCurso;
    Nivel _nivel;
    Grado _grado;
    Division _division;
    DiaSemana _diaSemana;
    //Hora _hora;
    bool _estado;

};
