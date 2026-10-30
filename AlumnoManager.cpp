#include <iostream>
#include <string>
#include <cstdlib>
#include "AlumnoManager.h"
#include "utils.h"
#include "rlutil.h"

AlumnoManager::AlumnoManager()
{
}

Alumno AlumnoManager::crearAlumno(){

    int legajo, dia, mes, anio;
    std::string nombre, apellido, dni, email, adaptacion;

    legajo=_alumnoArchivo.getNewID();

    rlutil::cls();
    std::cout << "-----CARGAR ALUMNO-------" << std::endl;
    std::cout << "Legajo: " << legajo << std::endl;

    std::cout << "Nombre: ";
    nombre=cargarCadena();

    std::cout << "Apellido: ";
    apellido=cargarCadena();

    std::cout << "DNI: ";
    dni=cargarCadena();

    std::cout << "Fecha de nacimiento" << std::endl;
    std::cout << "Dia: ";
    std::cin >> dia;
    std::cout << "Mes: ";
    std::cin >> mes;
    std::cout << "Anio: ";
    std::cin >> anio;

    std::cout << "Email: ";
    email=cargarCadena();

    std::cout << "Adaptacion (si no tiene, escriba Ninguna): ";
    adaptacion=cargarCadena();

    return Alumno(nombre.c_str(), apellido.c_str(), dni.c_str(), legajo,
                  Fecha(dia, mes, anio), email.c_str(), adaptacion.c_str());
}

void AlumnoManager::registrarAlumno()
{
    if(_alumnoArchivo.guardar(crearAlumno())==ArchivoError::OK)
    {
        std::cout << "Alumno registrado..." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _alumnoArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();
}


void AlumnoManager::modificarAlumno()
{
    rlutil::cls();
    int index, legajo;
    Alumno reg;
    std::string nombre, apellido, dni, email, adaptacion;

    std::cout << "Legajo del alumno a modificar: ";
    std::cin >> legajo;

    index=_alumnoArchivo.buscarByID(legajo);

    if(index==-1)
    {
        std::cout << "El alumno con legajo " << legajo << " no se encuentra en el sistema..." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    reg=_alumnoArchivo.leer(index);

    if(reg.getLegajo()==-1 || !reg.getEstado())
    {
        std::cout << "El alumno con legajo " << legajo << " no se encuentra en el sistema..." << std::endl;
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
    std::cout << "Nuevo email (actual: " << reg.getEmail() << "): ";
    email=cargarCadena();
    std::cout << "Nueva adaptacion (actual: " << reg.getAdaptacion() << "): ";
    adaptacion=cargarCadena();

    reg.setNombre(nombre.c_str());
    reg.setApellido(apellido.c_str());
    reg.setDni(dni.c_str());
    reg.setEmail(email.c_str());
    reg.setAdaptacion(adaptacion.c_str());

    if(_alumnoArchivo.actualizar(index, reg)==ArchivoError::OK)
    {
        std::cout << "Alumno modificado con exito." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _alumnoArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();
}

void AlumnoManager::eliminarAlumno()
{
    rlutil::cls();
    int index, legajo;
    Alumno reg;

    std::cout << "Legajo del alumno a eliminar: ";
    std::cin >> legajo;

    index=_alumnoArchivo.buscarByID(legajo);

    if(index==-1)
    {
        std::cout << "El alumno con legajo " << legajo << " no se encuentra en el sistema..." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    reg=_alumnoArchivo.leer(index);

    if(reg.getLegajo()==-1)
    {
        std::cout << "Error: no se pudo leer el alumno." << std::endl;
        system("pause");
        rlutil::cls();
        return;
    }

    reg.setEstado(false);

    if(_alumnoArchivo.actualizar(index, reg)==ArchivoError::OK)
    {
        std::cout << "Alumno con legajo " << legajo << " eliminado con exito." << std::endl;
    }
    else
    {
        std::cout << "Error: " << _alumnoArchivo.getLastError() << std::endl;
    }
    system("pause");
    rlutil::cls();
}
