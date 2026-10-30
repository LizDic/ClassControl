#pragma once
#include "Alumno.h"
#include "AlumnoArchivo.h"

class AlumnoManager
{
public:
    AlumnoManager();
    Alumno crearAlumno();
    void registrarAlumno();
    void modificarAlumno();
    void eliminarAlumno();

private:
    AlumnoArchivo _alumnoArchivo;

};
