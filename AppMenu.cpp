#include "AppMenu.h"

AppMenu::AppMenu()
    :Menu(12)
{
    setOpciones(1, "                   Alumnos                  ");
    setOpciones(2, "                   Docentes                 ");
    setOpciones(3, "                   Cursos                   ");
    setOpciones(4, "           Inscripciones de Alumnos         ");
    setOpciones(5, "            Asignacion de Docentes          ");
    setOpciones(6, "                 Clases Dadas               ");
    setOpciones(7, "             Unidades Didacticas            ");
    setOpciones(8, "                    Temas                   ");
    setOpciones(9, "                    Notas                   ");
    setOpciones(10, "                   Listados                 ");
    setOpciones(11, "                   Consultas                ");
    setOpciones(12, "                   Informes                 ");
    setTituloMenu("   Menu Principal  ");
    setOpCero("                    Salir                   ");
}

void AppMenu::runApp()
{
    bool salir=false;

    do
    {
        int opcion=runMenu();
        switch(opcion)
        {
        case 0: _alumnoMenu.runAlumno(); break;
        case 1: _docenteMenu.runDocente(); break;
        case 2: _cursoMenu.runCurso(); break;
        case 3: _inscripcionMenu.runInscripcion(); break;
        case 4: _asignacionDocenteMenu.runAsignacionDocente(); break;
        case 5: _clasesDadasMenu.runClasesDadas(); break;
        case 6: _unidadDidacticaMenu.runUnidadDidactica(); break;
        case 7: _temaMenu.runTema(); break;
        case 8: _notaMenu.runNota(); break;
        case 9: _listadosMenu.runListados(); break;
        case 10: _consultasMenu.runConsultas(); break;
        case 11: _informesMenu.runInformes(); break;
        case 12: salir=true;
        }
    }while(!salir);
}
