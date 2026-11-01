#include "Tema.h"
#include "TemaManager.h"
using namespace std;
#include <string>
#include <iostream>
#include "CursoArchivo.h"

void TemaManager::modificarTema(){
}
void TemaManager::listarTema(){
}
/*void TemaManager::eliminarCurso()
{
    rlutil::cls();
    int index, id;
    Tema reg;

    std::cout << "ID del tema a eliminar: ";
    std::cin >> id;

    index=_cursoArchivo.buscarByID(id);

    if(index==-1)
    {
        std::cout << "El tema con ID " << id << " no se encuentra en el sistema..." << std::endl;
        return;
    }

    reg=_cursoArchivo.leer(index);

    if(reg.getTema()==-1)
    {
        std::cout << "Error Tema no encontrado por ID";
        return;
    }

    mostrarTema(reg);

    bool eliminar=false;

    std::cout << "Esta seguro que desea eliminar el tema " << reg.getIdCurso() << ". Ingrese 1 para eliminar, 0 para cancelar la operacion" << std::endl;
    std::cin >> eliminar;

    if(eliminar)
    {
        reg.setEstado(false);
        if(_cursoArchivo.guardar(index,reg)==ArchivoError::OK)
        {
            std::cout << "Curso con ID " << id << " eliminado con exito!" << std::endl;
        }

    }
    else
    {
        std::cout << "Operacion cancelada..." << std::endl;
    }

    system("pause");}*/
