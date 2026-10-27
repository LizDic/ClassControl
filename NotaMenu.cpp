#include "NotaMenu.h"

NotaMenu::NotaMenu()
: Menu(3)
{
    setOpciones(1, "               Registrar nota               ");
    setOpciones(2, "               Modificar nota               ");
    setOpciones(3, "             Dar de baja una nota           ");
    setTituloMenu("       Notas       ");
    setOpCero("           Volver al menu principal         ");
}

void NotaMenu::runNota()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        //case 0: _notaManager.registrarNota(); break;
        //case 1: _notaManager.modificarNota(); break;
        //case 2: _notaManager.eliminarNota(); break;
        case 3: salir=true;
        }

    }while(!salir);
}
