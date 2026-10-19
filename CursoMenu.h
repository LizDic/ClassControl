#pragma once
#include "Menu.h"
#include "CursoManager.h"

class CursoMenu:public Menu
{
public:
    CursoMenu();
    void runCurso();
private:
    CursoManager _cursoManager;

};
