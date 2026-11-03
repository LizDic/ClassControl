#include "Docente.h"

Docente::Docente() : Persona()
{
    _idDocente = 0;

}

Docente::Docente (std::string nombre, std::string apellido, std::string dni, int idDocente)
                  : Persona (nombre,apellido,dni)
{
    setIdDocente (idDocente);
}

void Docente :: setIdDocente (int idDocente)
{
    _idDocente = idDocente;
}

int Docente :: getIdDocente ()
{
    return _idDocente;
}
