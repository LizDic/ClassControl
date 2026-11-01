#include <iostream>
#include "Tema.h"
using namespace std;
#include <string>
#include <cstring>
//Constructor
Tema::Tema(){
    _idTema=0;
    _idUnidad=0;
    _nombre[0]= '\0';
    _orden=0;
    _eliminado=false;
}
Tema::Tema(int idTema, int idUnidad, std::string nombre, int orden, bool eliminado){
     _idTema=idTema;
     _idUnidad=idUnidad;
     if(nombre.size() <= 49)
    {
        strcpy(_nombre, nombre.c_str());
    }
    else
    {
        strcpy(_nombre, nombre.substr(0, 49).c_str());
    }

     _orden=orden;
     _eliminado=eliminado;

}
//Métodos GETTERS
int Tema::getIdTema(){
    return _idTema;
}
int Tema::getIdUnidad(){
    return _idUnidad;
}
std::string Tema::getNombre(){
    return _nombre;
}
int Tema::getOrden(){
    return _orden;
}
bool Tema::getEliminado(){
    return _eliminado;
}
//Métodos SETTERS
void Tema::setIdTema(int idTema){
    _idTema=idTema;
}
void Tema::setIdUnidad(int idUnidad){
    _idUnidad=idUnidad;
};
void Tema::setNombre(std::string nombre){
  if(nombre.size() <= 49)
    {
        strcpy(_nombre, nombre.c_str());
    }
    else
    {
        strcpy(_nombre, nombre.substr(0, 49).c_str());
    }

};
void Tema::setOrden(int orden){
    _orden=orden;
};
void Tema::setEliminado(bool eliminado){
    _eliminado=eliminado;
};

