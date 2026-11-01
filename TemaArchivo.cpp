#include <cstdio>
#include <iostream>
using namespace std;
#include "Tema.h"
#include "TemaArchivo.h"

void TemaArchivo::guardar(Tema reg){
 FILE *pFile;
 pFile=fopen("temas.dat","ab");
 if (pFile==nullptr){
    cout<<"ERROR de archivo"<<endl;
    return;
 }
 fwrite(&reg,sizeof(Tema),1,pFile);
 fclose(pFile);
}

void TemaArchivo::leerTodos(Tema reg[], int cant){
 FILE *pFile;
 pFile=fopen("temas.dat","rb");
 if (pFile==nullptr){
    cout<<"ERROR de archivo"<<endl;
    return;
 }
 fread(&reg,sizeof(Tema),1,pFile);
 fclose(pFile);
}
int TemaArchivo::getCantidadRegistros(){
     FILE *pFile;
     pFile=fopen("temas.dat","rb");
     if (pFile==nullptr){
        return 0;
     }
     fseek(pFile,0,SEEK_END);
     int cantidad=ftell(pFile)/sizeof(Tema);

     fclose(pFile);

     return cantidad;
}
