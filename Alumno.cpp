#include "Alumno.h"
#include <cstring>

//Constructores
Alumno::Alumno() : Persona()
{
    _legajo = 0;
    strcpy (_email, "");
    strcpy (_adaptacion,"");

}

Alumno::Alumno(const char *nombre, const char *apellido, const char *dni, int legajo, Fecha fechaNacimiento, const char *email, const char *adaptacion)
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


void Alumno::setEmail(const char *email)
{
    strncpy (_email, email, sizeof (_email) - 1);
    _email [sizeof (_email) - 1] = '\0';
}


void Alumno::setAdaptacion (const char *adaptacion)
{
    strncpy (_adaptacion, adaptacion, sizeof (_adaptacion) - 1);
    _adaptacion [sizeof (_adaptacion) - 1] = '\0';
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


const char *Alumno::getEmail()
{
    return _email;
}


const char *Alumno::getAdaptacion()
{
    return _adaptacion;
}

