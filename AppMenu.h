#pragma once
#include "Menu.h"
#include "CursoMenu.h"
#include "AlumnoMenu.h"
#include "DocentesMenu.h"
#include "ReportesMenu.h"

class AppMenu:public Menu
{
public:
    AppMenu();
    void runApp();
private:
    CursoMenu _cursoMenu;
    AlumnoMenu _alumnoMenu;
    DocenteMenu _docenteMenu;
    ReportesMenu _reportesMenu;

};
