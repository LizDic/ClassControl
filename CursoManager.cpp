#include <iostream>
#include "CursoManager.h"
#include "CursoArchivo.h"
#include "Curso.h"
#include "utils.h"
#include "rlutil.h"

CursoManager::CursoManager()
{
}

Curso CursoManager::crearCurso()
{
    int idCurso,cc,gr,div,ds;
    Grado grado;
    Division division;

    idCurso=_cursoArchivo.getNewID();

    rlutil::cls();
    std::cout << "-----CARGAR CURSO-------" << std::endl;
    std::cout << "ID " << idCurso << std::endl << std::endl;
    cargarCurso(gr, div);

    return Curso(idCurso,intToGrado(gr),intToDivision(div));

}

void CursoManager::registrarCurso()
{
    if(_cursoArchivo.guardar(crearCurso())==ArchivoError::OK)
    {
        std::cout << "Curso registrado..." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _cursoArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();

}

void CursoManager::listarCursos()
{
    rlutil::cls();
    int cantReg;

    std::cout << "-------------Listado de Cursos--------------" << std::endl;
    cantReg=_cursoArchivo.getCantReg();

    if(!cantReg)
    {
        std::cout << "No hay cursos registrados..." << std::endl;
    }
    else
    {
        Curso *vCursos=new Curso[cantReg];
        _cursoArchivo.leerTodos(vCursos,cantReg);

        for(int i=0; i<cantReg; i++)
        {
            if(vCursos[i].getEstado())
            {
                std::cout << "Id: "<< vCursos[i].getIdCurso() << std::endl;
                std::cout << "Grado: " << gradoToString(vCursos[i].getGrado()) << std::endl;
                std::cout << "Division: " << divisionToString(vCursos[i].getDivision()) << std::endl;
                std::cout << "--------------------------------------------" << std::endl;
            }
        }
        delete []vCursos;
    }
    system("pause");
    rlutil::cls();
}

void CursoManager::modificarCurso()
{
    rlutil::cls();
    int index, id;
    Curso reg;
    std::string descripcion;

    std::cout << "ID del Curso a modificar: ";
    std::cin >> id;

    index=_cursoArchivo.buscarByID(id);

    if(index==-1)
    {
        std::cout << "El curso con ID " << id << " no se encuentra en el sistema..." << std::endl;
        return;
    }

    reg=_cursoArchivo.leer(index);

    mostrarCurso(reg);

    int gr, div;
    Grado grado;
    Division division;

    std::cout << "Ingrese nuevamente los campos " << std::endl;
    cargarCurso(gr, div);

    grado=intToGrado(gr);
    division=intToDivision(div);

    reg.setGrado(grado);
    reg.setDivision(division);

    if(_cursoArchivo.guardar(index, reg)==ArchivoError::OK)
    {
        std::cout << "Se modifico exitosamente!" << std::endl;
    }
    else
    {
        std::cout << "Ocurrio un error al guardar el Curso: " << _cursoArchivo.getLastError() << std::endl;
    }

    system("pause");

}

void CursoManager::eliminarCurso()
{
    rlutil::cls();
    int index, id;
    Curso reg;

    std::cout << "ID del Curso a eliminar: ";
    std::cin >> id;

    index=_cursoArchivo.buscarByID(id);

    if(index==-1)
    {
        std::cout << "El curso con ID " << id << " no se encuentra en el sistema..." << std::endl;
        return;
    }

    reg=_cursoArchivo.leer(index);

    if(reg.getIdCurso()==-1)
    {
        std::cout << "Error curso no encontrado por ID";
        return;
    }

    mostrarCurso(reg);

    bool eliminar=false;

    std::cout << "Esta seguro que desea eliminar el curso " << reg.getIdCurso() << ". Ingrese 1 para eliminar, 0 para cancelar la operacion" << std::endl;
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

    system("pause");
}




