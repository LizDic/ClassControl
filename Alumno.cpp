#include "Alumno.h"
#include <cstring>

//Constructores
Alumno::Alumno() : Persona()
{
    _legajo = 0;
    strcpy (_email, "");
    strcpy (_adaptacion,"");

}

Alumno::Alumno(std::string nombre, std::string apellido, std::string dni, int legajo, Fecha fechaNacimiento, std::string email, std::string adaptacion)
    : Persona (nombre, apellido,dni)
{
    setLegajo(legajo);
    setEmail (email);
    setAdaptacion (adaptacion);
    setFechaNacimiento (fechaNacimiento);

}

//SETTERS
void Alumno::setLegajo(int legajo)
{
    _legajo = legajo;
}


void Alumno::setFechaNacimiento(Fecha fechaNacimiento)
{
    _fechaNacimiento = fechaNacimiento;
}


void Alumno::setEmail(std::string email)
{
    if (email.size() <= 49) {
        strcpy (_email, email.c_str());
    }
    else
    {
        strcpy(_email, email.substr (0,49).c_str());
    }
}


void Alumno::setAdaptacion (std::string adaptacion)
{
   if (adaptacion.size() <= 200) {
        strcpy (_adaptacion, adaptacion.c_str());
    }
    else
    {
        strcpy(_adaptacion, adaptacion.substr (0,49).c_str());
    };
}

//GETT
int Alumno::getLegajo()
{
    return _legajo;
}


Fecha Alumno::getFechaNacimiento()
{
    return _fechaNacimiento;
}


std::string Alumno::getEmail()
{
    return _email;
}


std::string Alumno::getAdaptacion()
{
    return _adaptacion;
}

