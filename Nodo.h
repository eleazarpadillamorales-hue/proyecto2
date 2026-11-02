#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Nodo {
private:
    T* dato;
    Nodo<T>* siguiente;

public:
    // Constructor
    Nodo(T* dato) {
        this->dato = dato;
        this->siguiente = nullptr;
    }

    // Destructor
    ~Nodo() {
        // Nota: El borrado de los objetos 'dato' se maneja en el sistema principal 
        // para evitar liberaciones dobles de memoria.
    }

    // --- Métodos Get y Set ---
    T* getDato() const {
        return dato;
    }

    void setDato(T* dato) {
        this->dato = dato;
    }

    Nodo<T>* getSiguiente() const {
        return siguiente;
    }

    void setSiguiente(Nodo<T>* siguiente) {
        this->siguiente = siguiente;
    }
};