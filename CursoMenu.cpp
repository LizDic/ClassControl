#include "CursoMenu.h"
#include "Menu.h"
#include "CursoManager.h"

CursoMenu::CursoMenu()
    :Menu(7)
{
    setOpciones(1, "Crear Curso");
    setOpciones(2, "Listar Cursos");
    setOpciones(3, "Modificar Curso");
    setOpciones(4, "Dar de baja un Curso");
    setOpciones(5, "Gestion de unidades didacticas");
    setOpciones(6, "Gestion de temas");
    setOpciones(7, "Gestion de clases dadas");
    setTituloMenu("Menu Curso");
    setOpCero("Volver al menu principal");
}

void CursoMenu::runCurso()
{
    system("cls");
    bool salir=false;

    do
    {
        dibujarMenu();

        switch(obtenerOpcionSeleccionada())
        {
        case 1: _cursoManager.registrarCurso(); break;
        case 2: _cursoManager.listarCursos(); break;
        case 3: _cursoManager.modificarCurso(); break;
        case 4: _cursoManager.eliminarCurso(); break;
        //case 5: _unidadesDidacticasManager.gestionUnidadesDidacticas(); break;
        //case 6: _temasManager.gestionTemas(); break;
        //case 7: _clasesDadasManager.gestionClasesDadas(); break;
        case 0: salir=true;
        }
    }
    while(!salir);
    system("cls");
}
