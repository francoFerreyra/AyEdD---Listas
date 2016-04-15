//
// Created by suario uon 15/04/2016.
//

#ifndef AYEDD_LISTAS_NODO_H
#define AYEDD_LISTAS_NODO_H

class nodo
{
private:
    char dato;
    nodo*next;

public:
    nodo();
    nodo(char d);
    ~nodo(){};
    char CargarDato();
    void VerDato(char d);
    nodo*CargarProximo();
    nodo*NuevoNext();
    void VerProximo(nodo*d);
};

#endif //AYEDD_LISTAS_NODO_H
