#pragma once
#include <string>
#include "Docente.h"
#include "ArchivoError.h"

class DocenteArchivo
{
public:
    DocenteArchivo (std::string fileName = "Docente.dat");
//Funciones que escriben y leen
    ArchivoError guardar (Docente reg);
    ArchivoError leerTodos (Docente reg[] , int cant);
    Docente leer (int index);
    ArchivoError actualizar (int index, Docente reg);


    int getCantReg ();
    int getNewID();
    int buscarByID (int id);
    std::string getLastError();


private:
    std::string _fileName;
    std::string _errorMessage;

};
