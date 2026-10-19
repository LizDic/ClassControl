#include "DocentesMenu.h"
#include "Menu.h"

DocenteMenu::DocenteMenu()
    :Menu(6)
{
    setOpciones(1, "Registrar docente");
    setOpciones(2, "Listar docentes");
    setOpciones(3, "Listar docentes por apellido");
    setOpciones(4, "Listar docentes por curso asignado");
    setOpciones(5, "Consultas de docentes");
    setOpciones(6, "Asignacion docente a curso ");
    setTituloMenu("Menu Docente");
    setOpCero("Volver al menu principal");
}

void DocenteMenu::runDocente()
{
    system("cls");
    bool salir=false;

    do
    {
        dibujarMenu();

        switch(obtenerOpcionSeleccionada())
        {

        case 0: salir=true;
        }
    }
    while(!salir);
    system("cls");
}
