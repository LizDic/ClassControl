#include "Curso.h"

Curso::Curso()
    :_idCurso(0),
     _grado(Grado::NONE),
     _div(Division::NONE),
     _estado(true)
{
}

Curso::Curso(int id, Grado grado, Division div)
{
    setIdCurso(id);
    setGrado(grado);
    setDivision(div);
    setEstado(true);
}

void Curso::setIdCurso(int idCurso)
{
    _idCurso=idCurso;
}

void Curso::setGrado(Grado grado)
{
    _grado = grado;
}

void Curso::setDivision(Division div)
{
    _div=div;
}

void Curso::setEstado(bool estado)
{
    _estado=estado;
}

int Curso::getIdCurso()
{
    return _idCurso;
}

Grado Curso::getGrado()
{
    return _grado;
}

Division Curso::getDivision()
{
    return _div;
}

bool Curso::getEstado()
{
    return _estado;
}
