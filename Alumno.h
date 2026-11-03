#pragma once
#include <string>
#include "Persona.h"
#include "Fecha.h"


class Alumno: public Persona
{
public://constructores
    Alumno();
    Alumno(std::string nombre, std::string apellido, std::string dni, int legajo, Fecha fechaNacimiento, std::string email, std::string adaptacion);

    //SET
    void setLegajo (int legajo);
    void setFechaNacimiento (Fecha fechaNacimiento);
    void setEmail (std::string email);
    void setAdaptacion (std::string adaptacion);

    //GET
    int getLegajo();
    Fecha getFechaNacimiento ();
    std::string getEmail();
    std::string getAdaptacion();


private:
    int _legajo;
    Fecha _fechaNacimiento;
    char _email [50];
    char _adaptacion[200];

};
