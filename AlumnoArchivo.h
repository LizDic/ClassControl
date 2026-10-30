#pragma once
#include <string>
#include "Alumno.h"
#include "ArchivoError.h"

class AlumnoArchivo
{
public:
    AlumnoArchivo (std::string fileName = "Alumnos.dat");
    ArchivoError guardar (Alumno reg);
    ArchivoError leerTodos (Alumno teg[] , int cant);
    Alumno leer (int index);
    ArchivoError actualizar (int index, Alumno reg);
    int getCantReg ();
    int getNewID();
    int buscarByID (int id);
    std::string getLastError();


private:
    std::string _fileName;
    std::string _errorMessage;

};
