#include "ClasesDadasMenu.h"

ClasesDadasMenu::ClasesDadasMenu()
    : Menu(3)
{
    setOpciones(1, "            Registrar clase dada            ");
    setOpciones(2, "            Modificar clase dada            ");
    setOpciones(3, "          Dar de baja una clase dada        ");
    setTituloMenu("   Clases dadas    ");
    setOpCero("           Volver al menu principal         ");
}

void ClasesDadasMenu::runClasesDadas()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        //case 0: _claseDadaManageer.registrarClaseDada); break;
        //case 1: _claseDadaManageer.modificarClaseDada(); break;
        //case 2: _claseDadaManageer.eliminarClaseDada(); break;
        case 3: salir=true;
        }
    }while(!salir);
}
