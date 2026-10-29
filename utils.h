#pragma once
#include "Grado.h"
#include "Division.h"
#include "Curso.h"

std::string cargarCadena();
Grado intToGrado(int grado);
Division intToDivision(int div);
std::string gradoToString(Grado grado);
std::string divisionToString(Division div);
void showItem(const std::string text, int posx, int posy, bool selected);
void cargarCurso(int &gr, int &div);
void mostrarCurso(Curso &reg);

