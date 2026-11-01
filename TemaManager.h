#ifndef TEMAMANAGER_H
#define TEMAMANAGER_H
#include <string>
#include <iostream>
using namespace std;
#include "Tema.h"
class TemaManager
{
public:
    TemaManager();
    TemaManager crearTema();
    void listarTema();
    void modificarTema();
    void eliminarTema();
private:

};

#endif
