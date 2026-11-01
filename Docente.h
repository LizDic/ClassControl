#pragma once
#include "Persona.h"

class Docente : public Persona
{
public:
    Docente ();
    Docente (const char *nombre, const char *apellido, const char *dni, int idDocente);

    void setIdDocente (int idDocente);

    int getIdDocente();

private:
    int _idDocente;

};
