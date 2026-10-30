#pragma once
#include "Persona.h"
#include "Fecha.h"


class Alumno: public Persona
{
public://constructores
    Alumno();
    Alumno(const char *nombre, const char *apellido, const char *dni, int legajo, Fecha fechaNacimiento, const char *email, const char *adaptacion);

    //SET
    void setLegajo (int legajo);
    void setFechaNacimiento (Fecha fechaNacimiento);
    void setEmail (const char *email);
    void setAdaptacion (const char *adaptacion);

    //GET
    int getLegajo();
    Fecha getFechaNacimiento ();
    const char *getEmail();
    const char *getAdaptacion();


private:
    int _legajo;
    Fecha _fechaNacimiento;
    char _email [50];
    char _adaptacion[200];

};
