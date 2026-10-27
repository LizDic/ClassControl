#include "AsignacionDocenteMenu.h"

AsignacionDocenteMenu::AsignacionDocenteMenu()
:Menu(3)
{
    setOpciones(1, "               Asignar docente              ");
    setOpciones(2, "             Modificar asignacion           ");
    setOpciones(3, "            Dar de baja asignacion          ");
    setTituloMenu("    Asignaciones   ");
    setOpCero("           Volver al menu principal         ");
}

void AsignacionDocenteMenu::runAsignacionDocente()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
            //case 0: _asignacionDocenteManageer.asignarDocente(); break;
            //case 1: _asignacionDocenteManageer.modificarAsignacion(); break;
            //case 2: _asignacionDocenteManageer.eliminarAsignacion(); break;
            case 3: salir=true;
        }
    }while(!salir);
}
