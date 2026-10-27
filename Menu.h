#pragma once
#include <string>

class Menu
{
public:
    Menu(int cantOpciones);
    void setOpciones(int opcion, std::string texto);
    void setTituloMenu(std::string tituloMenu);
    void setOpCero(std::string opCero);
    int runMenu();
    ~Menu();


private:
    int _cantOpciones;
    std::string* _vOpciones;
    std::string _tituloMenu;
    std::string _opCero;
};
