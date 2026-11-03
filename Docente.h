#pragma once
#include <string>
#include "Persona.h"

class Docente : public Persona
{
public:
    Docente ();
    Docente (std::string nombre, std::string apellido, std::string dni, int idDocente);

    void setIdDocente (int idDocente);

    int getIdDocente();

private:
    int _idDocente;

};
