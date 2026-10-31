#include <cstdio>
#include <string>
#include "DocenteArchivo.h"

DocenteArchivo :: DocenteArchivo (std::string fileName) : _fileName (fileName)
{
}

//Necesito guardar
ArchivoError DocenteArchivo::guardar(Docente reg)
{
    FILE *pFile;
    size_t escritura;
    const int CANT_REG = 1;


    pFile = fopen (_fileName.c_str() , "ab");


    if (pFile == nullptr){
        _errorMessage = "No se pudo abrir el Archivo... " + _fileName;
        return ArchivoError::ABRIR;
    }


    escritura = fwrite (&reg, sizeof (Docente), CANT_REG, pFile);
    fclose (pFile);

    if (escritura != CANT_REG){
        _errorMessage = "No se pudo escribir el registro... " + _fileName;
        return ArchivoError::ESCRIBIR;
    }

    _errorMessage = "";
    return ArchivoError::OK;
}

ArchivoError DocenteArchivo::leerTodos (Docente reg[], int cant)
{
    FILE *pFile;
    size_t lectura;

    pFile = fopen (_fileName.c_str() , "rb");


    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return ArchivoError::ABRIR;
    }


    lectura = fread (reg, sizeof(Docente), cant, pFile);
    fclose (pFile);

    if(lectura!=(size_t)cant)
    {
        _errorMessage="No se pudieron leer los registros...";
        return ArchivoError::LEER;
    }

    _errorMessage="";
    return ArchivoError::OK;
}

Docente DocenteArchivo::leer (int index)
{
    FILE *pFile;
    Docente reg;
    size_t lectura;
    const int CANT_REG = 1;

    reg.setIdDocente (-1);
    pFile = fopen (_fileName.c_str(), "rb");

    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return reg;
    }

    fseek (pFile, index*sizeof (Docente), SEEK_SET); // me muevo a la direccion
    lectura = fread (&reg, sizeof (Docente), CANT_REG, pFile);
    fclose (pFile);

    if(lectura!=(size_t)CANT_REG)
    {
        _errorMessage="No se pudieron leer los registros...";
        return reg;
    }

    _errorMessage = "";
    return reg;

}

ArchivoError DocenteArchivo::actualizar(int index, Docente reg)
{
    FILE *pFile;
    size_t escritura;
    const int CANT_REG = 1;

    pFile = fopen (_fileName.c_str(), "rb+");

    if(pFile==nullptr)
    {
        _errorMessage="No se pudo abrir el archivo..." + _fileName;
        return ArchivoError::ABRIR;
    }

    fseek(pFile,index*sizeof(Docente),SEEK_SET);
    escritura=fwrite(&reg,sizeof(Docente),CANT_REG,pFile);
    fclose(pFile);

    if(escritura!=CANT_REG)
    {
        _errorMessage="No se pudo actualizar el registro...";
        return ArchivoError::ESCRIBIR;
    }

    _errorMessage="";
    return ArchivoError::OK;
}

int DocenteArchivo::getCantReg()
{
    FILE *pFile;
    int cant;

    pFile= fopen(_fileName.c_str(), "rb");

    if (pFile == nullptr){
        return 0;
    }

    fseek(pFile,0,SEEK_END);
    cant=ftell(pFile)/sizeof(Docente);

    fclose(pFile);
    return cant;
}

int DocenteArchivo::getNewID()
{
    return getCantReg()+1;
}

int DocenteArchivo::buscarByID(int id){

    FILE *pFile;
    Docente reg;
    int index = 0;

    pFile=fopen(_fileName.c_str(),"rb");

    if(pFile==nullptr)
    {
        return -1;
    }


    while(fread(&reg,sizeof(Docente),1,pFile))
    {
        if(reg.getIdDocente()==id)
        {
            fclose(pFile);
            return index;
        }
        index++;
    }

    fclose(pFile);
    return -1;
}

std::string DocenteArchivo::getLastError()
{
    return _errorMessage;
}


