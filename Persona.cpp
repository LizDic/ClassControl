#include "Persona.h"
#include <cstring>

Persona::Persona(){ //CONSTRUCTOR VACIO
    strcpy (_nombre, "");
    strcpy (_apellido, "");
    strcpy (_dni, "");
    _estado = true;

}


Persona::Persona(std::string nombre, std::string apellido, std::string dni)
{
    setNombre (nombre);
    setApellido (apellido);
    setDni (dni);
    _estado = true;

}

void Persona::setNombre (std::string nombre)
{
    if(nombre.size() <= 49) //si el tamaño es menor que 49
    {
        strcpy(_nombre, nombre.c_str()); //lo copia directamente en el atributo _nombre
    }
    else
    {
        strcpy(_nombre, nombre.substr(0, 49).c_str()); // lo corta y copia lo que hay
    }
}


void Persona::setApellido (std::string apellido)
{
    if(apellido.size() <= 49)
    {
        strcpy(_apellido, apellido.c_str());
    }
    else
    {
        strcpy(_apellido, apellido.substr(0, 49).c_str());
    }
}


void Persona::setDni (std::string dni)
{
    if(dni.size() <= 49)
    {
        strcpy(_dni, dni.c_str());
    }
    else
    {
        strcpy(_dni, dni.substr(0, 49).c_str());
    }
}

void Persona::setEstado (bool estado)
{
    _estado = estado;
}

//Getters
std::string Persona::getNombre()
{
    return std::string (_nombre);
}


std::string Persona::getApellido()
{
    return std::string (_apellido);
}


std::string Persona::getDni()
{
    return std::string(_dni);
}


bool Persona::getEstado()
{
    return _estado;
}

