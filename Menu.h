#pragma once
#include <string>

class Menu
{
public:
    Menu(int cantOpciones);
    void setOpciones(int opcion, std::string texto);
    void dibujarMenu();
    int obtenerOpcionSeleccionada();
    ~Menu();

private:
    int _cantOpciones;
    std::string* _vOpciones;
};
