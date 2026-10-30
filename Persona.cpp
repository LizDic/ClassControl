#include "Persona.h"
#include <cstring>

Persona::Persona(){ //CONSTRUCTOR VACIO
    strcpy (_nombre, "");
    strcpy (_apellido, "");
    strcpy (_dni, "");
    _estado = true;

}


Persona::Persona(const char *nombre, const char *apellido, const char *dni)
{
    setNombre (nombre);
    setApellido (apellido);
    setDni (dni);
    _estado = true;

}

void Persona::setNombre (const char *nombre)
{
    strncpy(_nombre, nombre, sizeof(_nombre) - 1);
    _nombre [sizeof (_nombre) - 1] = '\0';
}


void Persona::setApellido (const char *apellido)
{
    strncpy(_apellido, apellido, sizeof(_apellido) - 1);
    _apellido [sizeof (_apellido) - 1] = '\0';
}


void Persona::setDni (const char *dni)
{
    strncpy(_dni, dni, sizeof(_dni) - 1);
    _dni [sizeof (_dni) - 1] = '\0';
}


void Persona::setEstado (bool estado)
{
    _estado = estado;
}

//Getters
const char *Persona::getNombre()
{
    return _nombre;
}


const char *Persona::getApellido()
{
    return _apellido;
}


const char *Persona::getDni()
{
    return _dni;
}


bool Persona::getEstado()
{
    return _estado;
}

