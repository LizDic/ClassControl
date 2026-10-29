#include <iostream>
#include <string>
#include "rlutil.h"
#include "utils.h"
#include "CursoArchivo.h"

std::string cargarCadena()
{
    std::string texto;

    if(std::cin.peek() == '\n')
    {
        std::cin.ignore();
    }
    std::getline(std::cin, texto);
    return texto;
}

Grado intToGrado(int grado)
{
    switch(grado)
    {
        case 1: return Grado::PRIMERO;
        case 2: return Grado::SEGUNDO;
        case 3: return Grado::TERCERO;
        case 4: return Grado::CUARTO;
        case 5: return Grado::QUINTO;
        case 6: return Grado::SEXTO;
        default: return Grado::NONE;
    }
}

Division intToDivision(int div)
{
    switch(div)
    {
        case 1: return Division::A;
        case 2: return Division::B;
        case 3: return Division::C;
        default: return Division::NONE;
    }
}

std::string gradoToString(Grado grado)
{
    switch(grado)
    {
        case Grado::PRIMERO: return "Primero";
        case Grado::SEGUNDO: return "Segundo";
        case Grado::TERCERO: return "Tercero";
        case Grado::CUARTO: return "Cuarto";
        case Grado::QUINTO: return "Quinto";
        case Grado::SEXTO: return "Sexto";
        default: return "Desconocido";
    }
}

std::string divisionToString(Division div)
{
    switch(div)
    {
        case Division::A: return "A";
        case Division::B: return "B";
        case Division::C: return "C";
        default: return "Desconocido";
    }
}

void showItem(const std::string text, int posx, int posy, bool selected)
{
    if(selected)
    {
        setBackgroundColor(rlutil::BLUE);
        //locate(posx -4, posy);
        //cout << " " << text << " " << endl;
    }
    else
    {
        setBackgroundColor(rlutil::BLACK);
        //locate(posx -4, posy);
        //cout << " " << text << " " << endl;
    }

    rlutil::locate(posx, posy);
    std::cout << text << std::endl;
    setBackgroundColor(rlutil::BLACK);
}

void cargarCurso(int &gr, int &div)
{
    std::cout << "Grado " << std::endl;
    std::cout << "(1)Primero - (2)Segundo - (3)Tercero - (4)Cuarto - (5)Quinto - (6)Sexto" << std::endl;
    std::cout << "Seleccion: ";
    std::cin >> gr;
    std::cout << "Divison " << std::endl;
    std::cout << "(1)A - (2)B - (3)C" << std::endl;
    std::cout << "Seleccion: ";
    std::cin >> div;
}

void mostrarCurso(Curso &reg)
{
    std::cout << "ID: " << reg.getIdCurso() << std::endl;
    std::cout << "Grado: " << gradoToString(reg.getGrado()) << std::endl;
    std::cout << "Division: " << divisionToString(reg.getDivision()) << std::endl << std::endl;
}
