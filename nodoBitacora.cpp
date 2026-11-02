#include "NodoBitacora.h"
#include "RegistroBitacora.h"

// Nota: Si te vuelve a dar error de enlace, recuerda asegurarte de que "RegistroBitacora.cpp" 
// esté agregado a los archivos de tu proyecto en Visual Studio para poder quitar esta línea:
// #include "RegistroBitacora.cpp"

NodoBitacora::NodoBitacora(RegistroBitacora* dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

NodoBitacora::~NodoBitacora() {
    if (this->dato != nullptr) {
        delete this->dato;
    }
}

//netodos get y set 
RegistroBitacora* NodoBitacora::getDato() const { return this->dato; }
NodoBitacora* NodoBitacora::getSiguiente() const { return this->siguiente; }
void NodoBitacora::setDato(RegistroBitacora* dato) { this->dato = dato; }
void NodoBitacora::setSiguiente(NodoBitacora* siguiente) { this->siguiente = siguiente; }

//como nota me cago en la puta maldito include por ese
// desgraciado no me dejaba copilar estoy arto de tener errores de pendejo 
// todo el maldito codigo bien a pero a mister sonrisas se le ocurre no poner un include 
// saludos cordiales