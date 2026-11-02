#include "Nodo.h"

// --- Constructor ---
template <typename T>
Nodo<T>::Nodo(T* dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

// --- Destructor ---
template <typename T>
Nodo<T>::~Nodo() {

}

// --- Métodos Get y Set ---
template <typename T>
T* Nodo<T>::getDato() {
    return dato;
}

template <typename T>
void Nodo<T>::setDato(T* dato) {
    this->dato = dato;
}

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
    return siguiente;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T>* siguiente) {
    this->siguiente = siguiente;
}