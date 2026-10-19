#include "AppMenu.h"
#include <iostream>

AppMenu::AppMenu()
    :Menu(4)
{
    setOpciones(1, "Gestion de Cursos");
    setOpciones(2, "Gestion de Alumnos");
    setOpciones(3, "Gestion de Docentes");
    setOpciones(4, "Reportes");
    setTituloMenu("Menu Principal");
    setOpCero("Salir");
}

void AppMenu::runApp()
{
    bool salir=false;

    do
    {
        dibujarMenu();
        switch(obtenerOpcionSeleccionada())
        {
        case 1: _cursoMenu.runCurso(); break;
        case 2: _alumnoMenu.runAlumno(); break;
        case 3: _docenteMenu.runDocente(); break;
        case 4: _reportesMenu.runReportes(); break;
        case 0:
            salir=true;
        }
    }
    while(!salir);
}
