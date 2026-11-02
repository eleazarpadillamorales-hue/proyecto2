#include "ListaBitacora.h"
#include <iostream>

using namespace std;

ListaBitacora::ListaBitacora() {
    cabeza = nullptr;
}

ListaBitacora::~ListaBitacora() {
    NodoBitacora* actual = cabeza;
    while (actual != nullptr) {
        NodoBitacora* siguienteTemp = actual->getSiguiente();
        delete actual; 
        actual = siguienteTemp;
    }
    cabeza = nullptr;
}

void ListaBitacora::agregar(RegistroBitacora* registro) {
    NodoBitacora* nuevoNodo = new NodoBitacora(registro);

    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    }
    else {
        NodoBitacora* actual = cabeza;
        while (actual->getSiguiente() != nullptr) {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevoNodo);
    }
}

void ListaBitacora::mostrarHistorial() const {
    NodoBitacora* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getDato() != nullptr) {
            cout << actual->getDato()->toString() << endl;
        }
        actual = actual->getSiguiente();
    }
}