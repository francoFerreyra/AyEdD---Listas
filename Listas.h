//
// Created by usuario on 15/04/2016.
//

#ifndef AYEDD_LISTAS_LISTAS_H
#define AYEDD_LISTAS_LISTAS_H

#include <iostream>
#include "nodo.h"

class Lista
{
private:
    //necesitamos un tamaño para la lista y un puntero iniciador
    int tamanio;
    nodo*primero;
public:
    //necesito un constructor, destructor
    //una funcion que adelante y retroceda por los nodos

    lista();
    lista(char p);
    ~lista();
    bool esVacio()
    {
        return primero== NULL;
    }

    int eliminar(int pos);
    void agregarincio(char p);
    void agregarfin(char p);
    void agregarentre(int pos, char p);
    int CargarTamanio();
    int buscar(char p);
    void imprimir();
    char CargarDato(int pos, int *err);
    char CargarDato(int pos);
    char VerDato(int pos, char p);


};
#endif //AYEDD_LISTAS_LISTAS_H
