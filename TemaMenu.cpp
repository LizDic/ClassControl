#include "TemaMenu.h"

TemaMenu::TemaMenu()
    : Menu(3)
{
    setOpciones(1, "               Registrar tema               ");
    setOpciones(2, "               Modificar tema               ");
    setOpciones(3, "             Dar de baja un tema            ");
    setTituloMenu("      Temas        ");
    setOpCero("           Volver al menu principal         ");
}

void TemaMenu::runTema()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
            //case 0: _temaManageer.registrarTema(); break;
            //case 1: _temaManageer.modificarTema(); break;
            //case 2: _temaManageer.eliminarTema(); break;
            case 3: salir=true;
        }
    }while(!salir);
}
