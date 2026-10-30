#include <cstdio> //Agrego las funciones de archivo (fopen,fclose,fwrite, etc y FILE)
#include <string>
#include "AlumnoArchivo.h"

//CONSTRUCTOR

AlumnoArchivo::AlumnoArchivo(std::string fileName)
    :_fileName(fileName)
{
}

ArchivoError AlumnoArchivo::guardar (Alumno reg)
{
    FILE *pFile; //puntero del archivo abierto
    size_t escritura; //guarda cuantos registros se pueden escribir
    const int CANT_REG = 1;

     pFile=fopen(_fileName.c_str(),"ab");

    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return ArchivoError::ABRIR;
    }

    escritura=fwrite(&reg,sizeof(Alumno),CANT_REG,pFile);
    fclose(pFile);

    if(escritura!=CANT_REG)
    {
        _errorMessage="No se pudo escribir el registro...";
        return ArchivoError::ESCRIBIR;
    }

    _errorMessage="";
    return ArchivoError::OK;
}
ArchivoError AlumnoArchivo::leerTodos(Alumno reg[], int cant)
{
    FILE *pFile;
    size_t lectura;

    pFile=fopen(_fileName.c_str(),"rb");

    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return ArchivoError::ABRIR;
    }

    lectura=fread(reg,sizeof(Alumno),cant,pFile);
    fclose(pFile);

    if(lectura!=(size_t)cant)
    {
        _errorMessage="No se pudieron leer los registros...";
        return ArchivoError::LEER;
    }

    _errorMessage="";
    return ArchivoError::OK;
}

Alumno AlumnoArchivo::leer(int index)
{
    FILE *pFile;
    Alumno reg;
    size_t lectura;
    const int CANT_REG=1;

    reg.setLegajo(-1);
    pFile=fopen(_fileName.c_str(),"rb");

    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return reg;
    }

    fseek(pFile,index*sizeof(Alumno),SEEK_SET);
    lectura=fread(&reg,sizeof(Alumno),CANT_REG,pFile);
    fclose(pFile);

    if(lectura!=CANT_REG)
    {
        _errorMessage="No se pudo leer el registro...";
        reg.setLegajo(-1);
        return reg;
    }

    _errorMessage="";
    return reg;
}

ArchivoError AlumnoArchivo::actualizar(int index, Alumno reg)
{
    FILE *pFile;
    size_t escritura;
    const int CANT_REG=1;

    pFile=fopen(_fileName.c_str(),"rb+");

    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return ArchivoError::ABRIR;
    }

    fseek(pFile,index*sizeof(Alumno),SEEK_SET);
    escritura=fwrite(&reg,sizeof(Alumno),CANT_REG,pFile);
    fclose(pFile);

    if(escritura!=CANT_REG)
    {
        _errorMessage="No se pudo actualizar el registro...";
        return ArchivoError::ESCRIBIR;
    }

    _errorMessage="";
    return ArchivoError::OK;
}

int AlumnoArchivo::getCantReg()
{
    FILE *pFile;
    int cant;

    pFile=fopen(_fileName.c_str(),"rb");

    if(pFile==nullptr)
    {
        return 0;
    }

    fseek(pFile,0,SEEK_END);
    cant=ftell(pFile)/sizeof(Alumno);
    fclose(pFile);
    return cant;
}

int AlumnoArchivo::getNewID()
{
    return getCantReg()+1;
}

int AlumnoArchivo::buscarByID(int id)
{
    FILE *pFile;
    Alumno reg;
    int index=0;

    pFile=fopen(_fileName.c_str(),"rb");

    if(pFile==nullptr)
    {
        return -1;
    }

    while(fread(&reg,sizeof(Alumno),1,pFile))
    {
        if(reg.getLegajo()==id)
        {
            fclose(pFile);
            return index;
        }
        index++;
    }

    fclose(pFile);
    return -1;
}

std::string AlumnoArchivo::getLastError()
{
    return _errorMessage;
}
