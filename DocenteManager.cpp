#include <iostream>
#include <string>
#include <cstdlib>
#include "DocenteManager.h"
#include "utils.h"
#include "rlutil.h"

DocenteManager::DocenteManager()
{
}

Docente DocenteManager::crearDocente(){

    int idDocente;
    std::string nombre, apellido, dni;

    idDocente=_docenteArchivo.getNewID();

    rlutil::cls();
    std::cout << "-----CARGAR DOCENTE-------" << std::endl;
    std::cout << "Id Docente: " << idDocente << std::endl;

    std::cout << "Nombre: ";
    nombre=cargarCadena();

    std::cout << "Apellido: ";
    apellido=cargarCadena();

    std::cout << "DNI: ";
    dni=cargarCadena();

    return Docente (nombre, apellido, dni, idDocente);
}

void DocenteManager::registrarDocente()
{
    if(_docenteArchivo.guardar(crearDocente())==ArchivoError::OK)
    {
        std::cout << "Docente registrado..." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _docenteArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();
}


void DocenteManager::modificarDocente()
{
    rlutil::cls();
    int index, idDocente;
    Docente reg;
    std::string nombre, apellido, dni;

    std::cout << "Id del docente a modificar: ";
    std::cin >> idDocente;

    index=_docenteArchivo.buscarByID(idDocente);

    if(index==-1)
    {
        std::cout << "El docente con Id " << idDocente << " no se encuentra en el sistema..." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    reg=_docenteArchivo.leer(index);

    if(reg.getIdDocente()==-1 || !reg.getEstado())
    {
        std::cout << "El docente con ID " << idDocente << " no se encuentra en el sistema..." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    std::cout << "Nuevo nombre (actual: " << reg.getNombre() << "): ";
    nombre=cargarCadena();
    std::cout << "Nuevo apellido (actual: " << reg.getApellido() << "): ";
    apellido=cargarCadena();
    std::cout << "Nuevo DNI (actual: " << reg.getDni() << "): ";
    dni=cargarCadena();


    reg.setNombre(nombre);
    reg.setApellido(apellido);
    reg.setDni(dni);


    if(_docenteArchivo.actualizar(index, reg)==ArchivoError::OK)
    {
        std::cout << "Docente modificado con exito." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _docenteArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();
}

void DocenteManager::eliminarDocente()
{
    rlutil::cls();
    int index, idDocente;
    Docente reg;

    std::cout << "ID Docente a eliminar: ";
    std::cin >> idDocente;

    index=_docenteArchivo.buscarByID(idDocente);

    if(index==-1)
    {
        std::cout << "El docente con ID " << idDocente << " no se encuentra en el sistema..." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    reg=_docenteArchivo.leer(index);

    if(reg.getIdDocente()==-1)
    {
        std::cout << "Error: no se pudo leer el docente." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    reg.setEstado(false);

    if(_docenteArchivo.actualizar(index, reg)==ArchivoError::OK)
    {
        std::cout << "Docente con ID " << idDocente << " eliminado con exito." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _docenteArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();
}
