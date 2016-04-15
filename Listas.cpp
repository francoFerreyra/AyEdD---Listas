//
// Created by usuario on 15/04/2016.
//
#include <iostream>
#include "Listas.h"

using namespace std;

Lista::lista()
{
    primero= NULL;
    tamanio = 0;
}

long Lista::lista(char p)
{
    primero = new nodo();
    tamanio =1;
}

Lista::~lista()
{
    nodo*currNodo = primero , *tmpNodo;
    while (currNodo != NULL)
    {
        tmpNodo = currNodo;
        currNodo = currNodo->CargarProximo();
        delete (tmpNodo);
    }
}


void Lista::agregarentre(int pos, char p) { }
void Lista::agregarincio(char p) { }
void Lista::agregarfin(char p) { }
char Lista::VerDato(int pos, char p) { }
Lista::