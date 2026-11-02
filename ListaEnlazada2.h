#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
class ListaEnlazada {
private:
    Nodo<T>* cabeza;
    int tamano;

public:
    ListaEnlazada();
    ~ListaEnlazada();

    void agregar(T* dato);
    bool eliminar(T* dato);
    T* buscar(bool (*criterio)(T*, string), string valor);
    Nodo<T>* getCabeza();
    int getTamano() const;
};

#include "ListaEnlazada2.cpp"
