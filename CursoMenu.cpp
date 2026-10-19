#include "CursoMenu.h"
#include "Menu.h"
#include "CursoManager.h"

CursoMenu::CursoMenu()
    :Menu(4)
{
    setOpciones(1, "Crear Curso");
    setOpciones(2, "Listar Curso");
    setOpciones(3, "Modificar Curso");
    setOpciones(4, "Eliminar Curso");
}

void CursoMenu::runCurso()
{
    bool salir=false;

    do
    {
        dibujarMenu();

        switch(obtenerOpcionSeleccionada())
        {
        case 1:
            _cursoManager.registrarCurso();
            break;
        case 2:
            _cursoManager.listarCursos();
            break;
        case 3:
            _cursoManager.modificarCurso();
            break;
        case 4:
            _cursoManager.eliminarCurso();
        case 0:
            salir=true;
        }
    }
    while(!salir);

}
