#pragma once
#include "CursoCodigo.h"
#include "Grado.h"
#include "Division.h"
#include "DiaSemana.h"

std::string cargarCadena();
CodigoCurso intToCodCurso(int cc);
Grado intToGrado(int grado);
Division intToDivision(int div);
DiaSemana intToDiaSemana(int dSemana);
std::string codigoCursoToString(CodigoCurso codCurso);
std::string gradoToString(Grado grado);
std::string divisionToString(Division div);
std::string diaSemanaToString(DiaSemana dSemana);
