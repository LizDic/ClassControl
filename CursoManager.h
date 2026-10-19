#pragma once
#include "Curso.h"
#include "CursoArchivo.h"

class CursoManager
{
public:
    CursoManager();
    Curso crearCurso();
    void registrarCurso();
    void listarCursos();
    void modificarCurso();
    void eliminarCurso();

private:
    Curso _crearCurso();
    CursoArchivo _cursoArchivo;
};
