#include "Docente.h"

Docente::Docente() : Persona()
{
    _idDocente = 0;

}

Docente::Docente (const char *nombre, const char *apellido, const char *dni, int idDocente)
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
