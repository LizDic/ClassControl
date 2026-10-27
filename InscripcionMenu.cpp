#include "InscripcionMenu.h"

InscripcionMenu::InscripcionMenu()
    : Menu(3)
{
    setOpciones(1, "               Inscribir alumno             ");
    setOpciones(2, "              Modificar inscripcion         ");
    setOpciones(3, "             Dar de baja inscripcion        ");
    setTituloMenu("   Inscripciones   ");
    setOpCero("           Volver al menu principal         ");
}

void InscripcionMenu::runInscripcion()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
            //case 0: _inscripcionManageer.registrarInscripcion(); break;
            //case 1: _inscripcionManageer.registrarInscripcion(); break;
            //case 2: _inscripcionManageer.registrarInscripcion(); break;
            case 3: salir=true;
        }
    }while(!salir);
}
