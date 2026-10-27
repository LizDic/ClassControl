#include "CursoMenu.h"

CursoMenu::CursoMenu()
    :Menu(3)
{
    setOpciones(1, "               Registar curso               ");
    setOpciones(2, "               Modificar curso              ");
    setOpciones(3, "             Dar de baja un curso           ");
    setTituloMenu("      Cursos       ");
    setOpCero("           Volver al menu principal         ");
}

void CursoMenu::runCurso()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        case 0: _cursoManager.registrarCurso(); break;
        case 1: _cursoManager.modificarCurso(); break;
        case 2: _cursoManager.eliminarCurso(); break;
        case 3: salir=true;
        }
    }while(!salir);
}
