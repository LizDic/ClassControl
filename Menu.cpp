#include <iostream>
#include <string>
#include "Menu.h"

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

void Menu::dibujarMenu()
{
    std::cout << "------------" << _tituloMenu << "------------" << std::endl;

    for(int i=0; i<_cantOpciones; i++)
    {
        std::cout << i+1 << ". " << _vOpciones[i] << std::endl;
    }
    std::cout << "-------------------------------" << std::endl;
    std::cout << "0. " << _opCero << std::endl << std::endl;
}

int Menu::obtenerOpcionSeleccionada()
{
    int opcion;

    do
    {
        std::cout << "Seleccione opcion: ";
        std::cin >> opcion;

        if(opcion<0 || opcion>_cantOpciones)
        {
            std::cout << "Seleccion incorrecta, vuelva a ingresar la opcion..." << std::endl;
        }
    }
    while(opcion<0 || opcion>_cantOpciones);
    std::cout << std::endl;
    return opcion;
}

void Menu::setTituloMenu(std::string tituloMenu)
{
    _tituloMenu=tituloMenu;
}

void Menu::setOpCero(std::string opCero)
{
    _opCero=opCero;
}

Menu::~Menu()
{
    delete []_vOpciones;
}
