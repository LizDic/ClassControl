#include <iostream>
#include "CursoManager.h"
#include "CursoArchivo.h"
#include "Curso.h"

CursoManager::CursoManager()
{
}

Curso CursoManager::crearCurso()
{
    int idCurso,cc,gr,div,ds;
    bool estado=true;
    Grado grado;
    Division division;
    DiaSemana diaSemana;
    CodigoCurso codCurso;

    idCurso=_cursoArchivo.getNewID();

    std::cout << "-----CARGAR CURSO-------" << std::endl;
    std::cout << "ID Curso: " << idCurso << std::endl;
    //AGREGAR LOS CODIGOS DE LOS CURSOS
    std::cout << "Codigo: 1(P3A)-";
    std::cin >> cc;
    std::cout << "Grado: 1(1ro)-2(2do)-3(ro)-4(4to)-5(5to)-6(6to)";
    std::cin >> gr;
    std::cout << "Division: 1(A), 2(B), 3(C)";
    std::cin >> div;
    std::cout << "Dia Semana: 1(Lunes)-2(Martes)-3(Miercoles)-4(Jueves)-5(Viernes)-6(Sabado)-7(Domingo)";
    std::cin >> ds;

    switch(cc)
    {
    case 1:
        CodigoCurso::P3A;
        break;
    }

    switch(gr)
    {
    case 1:
        Grado::PRIMERO;
        break;
    case 2:
        Grado::SEGUNDO;
        break;
    case 3:
        Grado::TERCERO;
        break;
    case 4:
        Grado::CUARTO;
        break;
    case 5:
        Grado::QUINTO;
        break;
    case 6:
        Grado::SEXTO;
        break;
    }

    switch(div)
    {
    case 1:
        Division::A;
        break;
    case 2:
        Division::B;
        break;
    case 3:
        Division::C;
        break;
    }

    switch(ds)
    {
    case 1:
        DiaSemana::LUNES;
        break;
    case 2:
        DiaSemana::MARTES;
        break;
    case 3:
        DiaSemana::MIERCOLES;
        break;
    case 4:
        DiaSemana::JUEVES;
        break;
    case 5:
        DiaSemana::VIERNES;
        break;
    case 6:
        DiaSemana::SABADO;
        break;
    case 7:
        DiaSemana::DOMINGO;
        break;
    }

    return Curso(idCurso,codCurso,grado,division,diaSemana,estado);
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
}

void CursoManager::listarCursos()
{
    int cantReg;

    std::cout << "---------Listado de Cursos-----------------" << std::endl;
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
            std::cout << "Id: "<<vCursos[i].getIdCurso() << std::endl;
            //COMPLETAR LOS CODIGOS DE LOS CURSOS
            if(vCursos[i].getCodigoCurso()==CodigoCurso::P3A) std::cout << "Codigo: P3A" << std::endl;
            if(vCursos[i].getGrado()==Grado::PRIMERO) std::cout << "Primer Grado" << std::endl;
            if(vCursos[i].getGrado()==Grado::SEGUNDO) std::cout << "Segundo Grado" << std::endl;
            if(vCursos[i].getGrado()==Grado::TERCERO) std::cout << "Tercero Grado" << std::endl;
            if(vCursos[i].getGrado()==Grado::CUARTO) std::cout << "Cuarto Grado" << std::endl;
            if(vCursos[i].getGrado()==Grado::QUINTO) std::cout << "Quinto Grado" << std::endl;
            if(vCursos[i].getGrado()==Grado::SEXTO) std::cout << "Sexto Grado" << std::endl;
            if(vCursos[i].getDivision()==Division::A) std::cout << "Division A" << std::endl;
            if(vCursos[i].getDivision()==Division::B) std::cout << "Division B" << std::endl;
            if(vCursos[i].getDivision()==Division::C) std::cout << "Division C" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::LUNES) std::cout << "Lunes" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::MARTES) std::cout << "Martes" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::MIERCOLES) std::cout << "Miercoles" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::JUEVES) std::cout << "Jueves" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::VIERNES) std::cout << "Viernes" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::SABADO) std::cout << "Sabado" << std::endl;
            if(vCursos[i].getDiaSemana()==DiaSemana::DOMINGO) std::cout << "Domingo" << std::endl;
            std::cout<<"Estado: "<<vCursos[i].getIdCurso()<<std::endl;
        }
        delete []vCursos;
    }
    system("pause");
}

void CursoManager::modificarCurso()
{
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

}



