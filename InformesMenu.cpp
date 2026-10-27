#include "InformesMenu.h"

InformesMenu::InformesMenu()
    :Menu(4)
{
    setOpciones(1, "        Cantidad de alumnos por grado       ");
    setOpciones(2, "        Promedio de notas por alumno        ");
    setOpciones(3, "   Cantidad de clases suspendidas por curso ");
    setOpciones(4, "Alumnos con adaptacion curricular por curso ");
    setTituloMenu("     Informes      ");
    setOpCero("           Volver al menu principal         ");
}

void InformesMenu::runInformes()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        case 4: salir=true;
        }
    }while(!salir);
}
