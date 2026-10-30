#include "AlumnoMenu.h"

AlumnoMenu::AlumnoMenu()
    :Menu(3)
{
    setOpciones(1, "               Registrar alumno             ");
    setOpciones(2, "               Modificar alumno             ");
    setOpciones(3, "            Dar de baja un alumno           ");
    setTituloMenu("      Alumnos      ");
    setOpCero("           Volver al menu principal         ");
}

void AlumnoMenu::runAlumno()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        case 0: _alumnoManager.registrarAlumno(); break;
        case 1: _alumnoManager.modificarAlumno(); break;
        case 2: _alumnoManager.eliminarAlumno(); break;
        case 3: salir=true;
        }
    }
    while(!salir);

}
