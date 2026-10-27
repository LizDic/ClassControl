#include "UnidadDidacticaMenu.h"

UnidadDidacticaMenu::UnidadDidacticaMenu()
    : Menu(3)
{
    setOpciones(1, "          Registrar unidad didactica        ");
    setOpciones(2, "          Modificar unidad didactica        ");
    setOpciones(3, "       Dar de baja una unidad didactica     ");
    setTituloMenu("Unidades Didacticas");
    setOpCero("           Volver al menu principal         ");
}

void UnidadDidacticaMenu::runUnidadDidactica()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
            //case 0: _unidadDidacticaManageer.registrarUnidadDidactica(); break;
            //case 1: _unidadDidacticaManageer.modificarUnidadDidactica(); break;
            //case 2: _unidadDidacticaManageer.eliminarUnidadDidactica(); break;
            case 3: salir=true;
        }
    }while(!salir);
}
