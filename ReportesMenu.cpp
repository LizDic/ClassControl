#include "ReportesMenu.h"
#include "Menu.h"

ReportesMenu::ReportesMenu()
    :Menu(3)
{
    setOpciones(1, "Listados");
    setOpciones(2, "Consultas");
    setOpciones(3, "Informes");
    setTituloMenu("Menu Reportes");
    setOpCero("Volver al menu principal");
}

void ReportesMenu::runReportes()
{
    system("cls");
    bool salir=false;

    do
    {
        dibujarMenu();

        switch(obtenerOpcionSeleccionada())
        {
        case 0:
            salir=true;

        }
    }
    while(!salir);
    system("cls");
}
