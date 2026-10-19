#include "Menu.h"
#include "AlumnoMenu.h"
#include "AlumnoManager.h"

AlumnoMenu::AlumnoMenu()
    :Menu(9)
{
    setOpciones(1, "Registrar Alumno");
    setOpciones(2, "Listar Alumnos");
    setOpciones(3, "Listar Alumno por apellido");
    setOpciones(4, "Listar Alumnos por curso");
    setOpciones(5, "Dar de baja un Alumno");
    setOpciones(6, "Listar alumnos con adaptacion curricular");
    setOpciones(7, "Consultas de alumnos");
    setOpciones(8, "Gestion de notas");
    setOpciones(9, "Inscripcion de alumnos a cursos");
    setTituloMenu("Menu Alumno");
    setOpCero("Volver al menu principal");
}

void AlumnoMenu::runAlumno()
{
    system("cls");
    bool salir=false;

    do
    {
        dibujarMenu();

        switch(obtenerOpcionSeleccionada())
        {

        case 0: salir=true;
        }
    }
    while(!salir);
    system("cls");

}
