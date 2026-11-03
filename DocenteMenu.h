#pragma once
#include "Menu.h"
#include "DocenteManager.h"

class DocenteMenu:public Menu
{
public:
    DocenteMenu();
    void runDocente();
private:
    DocenteManager _docenteManager;
};
