#pragma once
#include <string>
#include "Curso.h"
#include "ArchivoError.h"

class CursoArchivo
{
public:
    CursoArchivo(std::string fileName="Cursos.dat");
    ArchivoError guardar(Curso reg);
    ArchivoError guardar(int index, Curso reg);
    ArchivoError leerTodos(Curso reg[], int cant);
    Curso leer(int index);
    int getCantReg();
    int getNewID();
    int buscarByID(int id);
    std::string getLastError();

private:
    Curso _curso;
    std::string _fileName;
    std::string _errorMessage;
};
