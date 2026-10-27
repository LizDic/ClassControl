#include "ConsultasMenu.h"

ConsultasMenu::ConsultasMenu()
: Menu(5)
{
    setOpciones(1, "        Consultar alumnos por legajo        ");
    setOpciones(2, "         Consultar docentes por DNI         ");
    setOpciones(3, "         Consultar notas por alumno         ");
    setOpciones(4, "      Consultar curricula por docente       ");
    setOpciones(5, "  Consultar desempenio academico por alumno ");
    setTituloMenu("    Consultas      ");
    setOpCero("           Volver al menu principal         ");
}

void ConsultasMenu::runConsultas()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        //case 0: _consultasManager.(); break;
        //case 1: _consultasManager.(); break;
        //case 2: _consultasManager.(); break;
        //case 3: _consultasManager.(); break;
        //case 4: _consultasManager.(); break;
        case 5: salir=true;
        }

    }while(!salir);

}
