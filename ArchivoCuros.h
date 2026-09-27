#pragma once
#include <string>
#include "Curso.h"

class ArchivoCursos
{
public:
    ArchivoCursos(std::string nombreArchivo = "Cursos.dat");
    bool guardar(const Curso &reg);
    Curso leer(int pos);
    int getCantReg()const;
    int getNuevoId()const;
//	int getPosById(int id);

private:
    std::string _nombreArchivo;
};
