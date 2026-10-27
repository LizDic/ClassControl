#pragma once
#include "Menu.h"
#include "AlumnoMenu.h"
#include "DocenteMenu.h"
#include "CursoMenu.h"
#include "InscripcionMenu.h"
#include "AsignacionDocenteMenu.h"
#include "ClasesDadasMenu.h"
#include "UnidadDidacticaMenu.h"
#include "TemaMenu.h"
#include "NotaMenu.h"
#include "ListadosMenu.h"
#include "ConsultasMenu.h"
#include "InformesMenu.h"

class AppMenu:public Menu
{
public:
    AppMenu();
    void runApp();
private:
    AlumnoMenu _alumnoMenu;
    DocenteMenu _docenteMenu;
    CursoMenu _cursoMenu;
    InscripcionMenu _inscripcionMenu;
    AsignacionDocenteMenu _asignacionDocenteMenu;
    ClasesDadasMenu _clasesDadasMenu;
    UnidadDidacticaMenu _unidadDidacticaMenu;
    TemaMenu _temaMenu;
    NotaMenu _notaMenu;
    ListadosMenu _listadosMenu;
    ConsultasMenu _consultasMenu;
    InformesMenu _informesMenu;

};
