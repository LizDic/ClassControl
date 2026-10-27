#include "DocenteMenu.h"

DocenteMenu::DocenteMenu()
    :Menu(3)
{
    setOpciones(1, "               Registrar docente            ");
    setOpciones(2, "               Modificar docente            ");
    setOpciones(3, "            Dar de baja un docente          ");
    setTituloMenu("      Docentes     ");
    setOpCero("           Volver al menu principal         ");
}

void DocenteMenu::runDocente()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        //case 0: _docenteManager.registrarDocente(); break;
        //case 1: _docenteManager.modificarDocente(); break;
        //case 2: _docenteManager.eliminarDocente(); break;
        case 3: salir=true;
        }
    }while(!salir);
}
