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
    ListaEnlazada() {
        cabeza = nullptr;
        tamano = 0;
    }

    ~ListaEnlazada() {
        Nodo<T>* actual = cabeza;
        while (actual != nullptr) {
            Nodo<T>* siguienteTemp = actual->getSiguiente();
            delete actual;
            actual = siguienteTemp;
        }
        cabeza = nullptr;
        tamano = 0;
    }

    void agregar(T* dato) {
        Nodo<T>* nuevoNodo = new Nodo<T>(dato);
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
        }
        else {
            Nodo<T>* actual = cabeza;
            while (actual->getSiguiente() != nullptr) {
                actual = actual->getSiguiente();
            }
            actual->setSiguiente(nuevoNodo);
        }
        tamano++;
    }

    bool eliminar(T* datoBuscado) {
        if (cabeza == nullptr) return false;

        if (cabeza->getDato() == datoBuscado) {
            Nodo<T>* temp = cabeza;
            cabeza = cabeza->getSiguiente();
            delete temp;
            tamano--;
            return true;
        }

        Nodo<T>* actual = cabeza;
        while (actual->getSiguiente() != nullptr) {
            if (actual->getSiguiente()->getDato() == datoBuscado) {
                Nodo<T>* temp = actual->getSiguiente();
                actual->setSiguiente(temp->getSiguiente());
                delete temp;
                tamano--;
                return true;
            }
            actual = actual->getSiguiente();
        }
        return false;
    }

    T* buscar(bool (*criterio)(T*, string), string valor) {
        Nodo<T>* actual = cabeza;
        while (actual != nullptr) {
            if (criterio(actual->getDato(), valor)) {
                return actual->getDato();
            }
            actual = actual->getSiguiente();
        }
        return nullptr;
    }

    Nodo<T>* getCabeza() {
        return cabeza;
    }

    int getTamano() const {
        return tamano;
    }
};