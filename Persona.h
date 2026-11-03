#pragma once
#include <string>



class Persona {

public://CONSTRUCTORES
    Persona ();
    Persona (std::string nombre,std::string apellido, std::string dni);

    //SETTERS
    void setNombre (std::string nombre);
    void setApellido (std::string apellido);
    void setDni (std::string dni);
    void setEstado (bool estado);


    //GET
    std::string getNombre();
    std::string getApellido();
    std::string getDni();
    bool getEstado();

protected:
    char _nombre[50];
    char _apellido[50];
    char _dni[50];
    bool _estado;


};




