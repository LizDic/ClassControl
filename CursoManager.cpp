#include <iostream>
#include "CursoManager.h"
#include "CursoArchivo.h"
#include "Curso.h"
#include "utils.h"

CursoManager::CursoManager()
{
}

Curso CursoManager::crearCurso()
{
    int idCurso,cc,gr,div,ds;
    Grado grado;
    Division division;
    DiaSemana diaSemana;
    CodigoCurso codCurso;

    idCurso=_cursoArchivo.getNewID();

    system("cls");

    std::cout << "-----CARGAR CURSO-------" << std::endl;
    std::cout << "ID Curso: " << idCurso << std::endl;
    //AGREGAR LOS CODIGOS DE LOS CURSOS
    std::cout << "Codigo" << std::endl;
    std::cout << "1 - P3A" << std::endl;
    std::cin >> cc;

    std::cout << "Grado " << std::endl;
    std::cout << "1 - Primero" << std::endl;
    std::cout << "2 - Segundo" << std::endl;
    std::cout << "3 - Tercero" << std::endl;
    std::cout << "4 - Cuarto" << std::endl;
    std::cout << "5 - Quinto" << std::endl;
    std::cout << "6 - Sexto" << std::endl;
    std::cin >> gr;

    std::cout << "Division " << std::endl;
    std::cout << "1 - A" << std::endl;
    std::cout << "2 - B" << std::endl;
    std::cout << "3 - C" << std::endl;
    std::cin >> div;

    std::cout << "Dia semana " << std::endl;
    std::cout << "1 - Lunes" << std::endl;
    std::cout << "2 - Martes" << std::endl;
    std::cout << "3 - Miercoles" << std::endl;
    std::cout << "4 - Jueves" << std::endl;
    std::cout << "5 - Viernes" << std::endl;
    std::cout << "6 - Sabado" << std::endl;
    std::cout << "7 - Domingo" << std::endl;
    std::cin >> ds;

    return Curso(idCurso,intToCodCurso(cc),intToGrado(gr),intToDivision(div),intToDiaSemana(ds));
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
    system("cls");

}

void CursoManager::listarCursos()
{
    system("cls");
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
            //COMPLETAR LOS CODIGOS DE LOS CURSOS
            std::cout << "Codigo: " << codigoCursoToString(vCursos[i].getCodigoCurso()) << std::endl;
            std::cout << "Grado: " << gradoToString(vCursos[i].getGrado()) << std::endl;
            std::cout << "Division: " << divisionToString(vCursos[i].getDivision()) << std::endl;
            std::cout << "Dia de semana: " << diaSemanaToString(vCursos[i].getDiaSemana()) << std::endl;
            std::cout << "--------------------------------------------" << std::endl;
            }
        }
        delete []vCursos;
    }
    system("pause");
    system("cls");
}

void CursoManager::modificarCurso()
{
    system("cls");
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
}

void CursoManager::eliminarCurso()
{
    return;
}



