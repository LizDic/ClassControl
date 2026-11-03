#pragma once
#include "Docente.h"
#include "DocenteArchivo.h"

class DocenteManager
{
public:
    DocenteManager();
    Docente crearDocente();
    void registrarDocente();
    //void listarDocente();
    void modificarDocente();
    void eliminarDocente();

private:
    DocenteArchivo _docenteArchivo;

};
