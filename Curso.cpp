#include "Curso.h"

void Curso::setIdCurso(int idCurso)
{
    _idCurso = idCurso;
}

void Curso::setCodigoCurso(CodigoCurso codigoCurso)
{
    _codigoCurso = codigoCurso;
}

void Curso::setNivel(Nivel nivel)
{
    _nivel = nivel;
}

void Curso::setGrado(Grado grado)
{
    _grado = grado;
}

void Curso::setDivision(Division division)
{
    _division = division;
}

void Curso::setDiaSemana(DiaSemana diaSemana)
{
    _diaSemana = diaSemana;
}

/*void Curso::setHora(Hora hora)
{

}*/

void Curso::setEstado(bool estado)
{
    _estado = estado;
}

int Curso::getIdCurso()const
{
    return _idCurso;
}

CodigoCurso Curso::getCodigoCurso()const
{
    return _codigoCurso;
}

Nivel Curso::getNivel()const
{
    return _nivel;
}

Grado Curso::getGrado()const
{
    return _grado;
}

Division Curso::getDivision()const
{
    return _division;
}

DiaSemana Curso::getDiaSemana()const
{
    return _diaSemana;
}

bool Curso::getEstado()const
{
    return _estado;
}
