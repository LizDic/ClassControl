#pragma once
#ifndef TEMAARCHIVO_H
#define TEMAARCHIVO_H

class TemaArchivo{
public:
    TemaArchivo();
    void guardar(Tema reg);
    //nos deja recibir un vector de temas, sirve para listarlos
    //Primero lee, guarda en la memoria y muestra.
    void leerTodos(Tema reg[], int cant);
    int getCantidadRegistros();
protected:
private:

};


#endif // TEMAARCHIVO_H
