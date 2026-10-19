#include "Curso.h"

Curso::Curso()
    :_idCurso(0),
     _codCurso(CodigoCurso::NONE),
     _grado(Grado::NONE),
     _div(Division::NONE),
     _dSemana(DiaSemana::NONE),
     _estado(true)
{
}

Curso::Curso(int id, CodigoCurso codCurso, Grado grado, Division div, DiaSemana dSemana)
{
    setIdCurso(id);
    setCodigoCurso(codCurso);
    setGrado(grado);
    setDivision(div);
    setDiaSemana(dSemana);
    setEstado(true);
}

void Curso::setIdCurso(int idCurso)
{
    _idCurso=idCurso;
}

void Curso::setCodigoCurso(CodigoCurso codCurso)
{
    _codCurso=codCurso;
}

void Curso::setGrado(Grado grado)
{
    _grado = grado;
}

void Curso::setDivision(Division div)
{
    _div=div;
}

void Curso::setDiaSemana(DiaSemana dSemana)
{
    _dSemana=dSemana;
}

/*void Curso::setHora(Hora hora)
{

}*/

void Curso::setEstado(bool estado)
{
    _estado=estado;
}

int Curso::getIdCurso()
{
    return _idCurso;
}

CodigoCurso Curso::getCodigoCurso()
{
    return _codCurso;
}

Grado Curso::getGrado()
{
    return _grado;
}

Division Curso::getDivision()
{
    return _div;
}

DiaSemana Curso::getDiaSemana()
{
    return _dSemana;
}

bool Curso::getEstado()
{
    return _estado;
}
