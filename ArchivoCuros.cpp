#include "ArchivoCuros.h"
#include <string>
#include "Curso.h"

ArchivoCursos::ArchivoCursos(std::string nombreArchivo)
    :_nombreArchivo(nombreArchivo)
{
}

bool ArchivoCursos::guardar(const Curso &reg)
{
    FILE *pFile;
    bool pudoEscribir;

    pFile = fopen(_nombreArchivo.c_str(), "ab");

    if (pFile == NULL)
    {
        return false;
    }

    pudoEscribir = fwrite(&reg, sizeof(Curso), 1, pFile);

    fclose(pFile);

    return pudoEscribir;
}

Curso ArchivoCursos::leer(int pos)
{
    FILE *pFile;
    Curso reg;

    reg.setIdCurso(-1);

    pFile = fopen(_nombreArchivo.c_str(), "rb");

    if (pFile == NULL)
    {
        return reg;
    }

    fseek(pFile, pos * sizeof(Curso), SEEK_SET);

    fread(&reg, sizeof(Curso), 1, pFile);

    fclose(pFile);

    return reg;
}

int ArchivoCursos::getCantReg()const
{
    FILE *pFile;
    int cant;

    pFile = fopen(_nombreArchivo.c_str(), "rb");

    if(pFile == NULL)
    {
        return 0;
    }

    fseek(pFile,0,SEEK_END);

    cant = ftell(pFile)/sizeof(Curso);

    fclose(pFile);

    return cant;
}

int ArchivoCursos::getNuevoId()const
{
    return getCantReg()+1;
}
//	int getPosById(int id);
