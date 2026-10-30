#pragma once



class Persona {

public://CONSTRUCTORES
    Persona ();
    Persona (const char *nombre,
             const char *apellido,
             const char *dni);

    //SETTERS
    void setNombre (const char *nombre);
    void setApellido (const char *apellido);
    void setDni (const char *dni);
    void setEstado (bool estado);


    //GET
    const char *getNombre();
    const char *getApellido();
    const char *getDni();
    bool getEstado();

protected:
    char _nombre[50];
    char _apellido[50];
    char _dni[50];
    bool _estado;


};




