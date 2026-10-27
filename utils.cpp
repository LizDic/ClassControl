#include <iostream>
#include <string>
#include "rlutil.h"
#include "utils.h"

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

CodigoCurso intToCodCurso(int cc)
{
    switch(cc)
    {
        case 1: return CodigoCurso::P3A;
        default: return CodigoCurso::NONE;
    }
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

DiaSemana intToDiaSemana(int dSemana)
{
    switch(dSemana)
    {
        case 1: DiaSemana::LUNES;
        case 2: DiaSemana::MARTES;
        case 3: DiaSemana::MIERCOLES;
        case 4: DiaSemana::JUEVES;
        case 5: DiaSemana::VIERNES;
        case 6: DiaSemana::SABADO;
        case 7: DiaSemana::DOMINGO;
        default: DiaSemana::NONE;
    }
}

std::string codigoCursoToString(CodigoCurso codCurso)
{
    switch(codCurso)
    {
        case CodigoCurso::P3A: return "PA3";
        default: return "Desconocido";
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

std::string diaSemanaToString(DiaSemana dSemana)
{
    switch(dSemana)
    {
        case DiaSemana::LUNES: return "Lunes";
        case DiaSemana::MARTES: return "Martes";
        case DiaSemana::MIERCOLES: return "Miercoles";
        case DiaSemana::JUEVES: return "Jueves";
        case DiaSemana::VIERNES: return "Viernes";
        case DiaSemana::SABADO: return "Sabado";
        case DiaSemana::DOMINGO: return "Domingo";
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
