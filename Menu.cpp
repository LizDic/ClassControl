#include <iostream>
#include <string>
#include "Menu.h"
#include "utils.h"
#include "rlutil.h"

Menu::Menu(int cantOpciones)
{
    _vOpciones=new std::string[cantOpciones];

    if(_vOpciones==nullptr)
    {
        std::cout << "No se pudo asignar memoria..." << std::endl;
        exit(-100);
    }
    _cantOpciones=cantOpciones;
}

void Menu::setOpciones(int opcion, std::string texto)
{
    if(opcion>0 && opcion<=_cantOpciones)
    {
        for(int i=0; i<_cantOpciones; i++)
        {
            _vOpciones[opcion-1]=texto;
        }
    }
}

void Menu::setTituloMenu(std::string tituloMenu)
{
    _tituloMenu=tituloMenu;
}

void Menu::setOpCero(std::string opCero)
{
    _opCero=opCero;
}

int Menu::runMenu()
{
    int y = 0;

    rlutil::hidecursor();
    rlutil::cls();

    // Título
    rlutil::locate(40, 10);
    std::cout << "+================================================+" << std::endl;
    rlutil::locate(40, 11);
    std::cout << "||              " << _tituloMenu << "             ||" << std::endl;
    rlutil::locate(40, 12);
    std::cout << "+================================================+" << std::endl;

    while(true)
    {
        for(int i = 0; i < _cantOpciones; i++)
        {
            showItem("   " + _vOpciones[i] + "   ", 40, 13 + i, y == i);
        }
        rlutil::locate(40, 14 + _cantOpciones);
        std::cout << "--------------------------------------------------";

        showItem("   " + _opCero + "   ", 40, 15 + _cantOpciones, y == _cantOpciones);

        switch(rlutil::getkey())
        {
        case rlutil::KEY_UP:
            if(y > 0) y--;
            break;
        case rlutil::KEY_DOWN:
            if(y < _cantOpciones) y++;
            break;
        case rlutil::KEY_ENTER:
            return y;
        }
    }
}

Menu::~Menu()
{
    delete []_vOpciones;
}


