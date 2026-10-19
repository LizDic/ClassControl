#pragma once
#include "Alumno.h"
#include "AlumnoArchivo.h"

class AlumnoManager
{
public:
    AlumnoManager();
    Alumno crearCurso();
    void registrarAlumno();
    void listarAlumnos();
    void modificarAlumno();
    void eliminarAlumno();
private:
    Alumno _crearAlumno();
    AlumnoArchivo _alumnoArchivo;
};
