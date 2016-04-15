//
// Created by usuario on 15/04/2016.
//
#include <iostream>
#include "Nodo.h"

nodo::nodo()
{
    dato = 0;
    next = NULL;
}
nodo::nodo(char d)
{
    dato = d;
    next=NULL;
}
char nodo::CargarDato()
{
    return dato;
}
void nodo::VerDato(char d)
{
    dato= d;
}
nodo* nodo::CargarProximo()
{
    return next;
}
void nodo::VerProximo(nodo *d)
{
    next = d;
}
nodo* nodo::NuevoNext()
{
    next = new nodo();
    return next;
}
nodo* nodo::CargarProximo()
{
    tamanio= 1;
    next= NuevoNext();
    
}