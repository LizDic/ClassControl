#include "ListadosMenu.h"

ListadosMenu::ListadosMenu()
: Menu(3)
{
    setOpciones(1, "        Listado de alumnos por curso        ");
    setOpciones(2, "    Listado de docentes por curso asignado  ");
    setOpciones(3, "         Listado de temas por estado        ");
    setTituloMenu("     Listados      ");
    setOpCero("           Volver al menu principal         ");
}

void ListadosMenu::runListados()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        //case 0: _ListadosManager.(); break;
        //case 1: _ListadosManager.(); break;
        //case 2: _ListadosManager.(); break;
        case 3: salir=true;
        }

    }while(!salir);
}
