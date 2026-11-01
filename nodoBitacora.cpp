#include "nodoBitacora.h"
#include "registroBitacora.h"
//no tocar la siguietne linea no tengo ni idea de porque pero si no la pongo me da error de compilacion
#include "registroBitacora.cpp"

nodoBitacora::nodoBitacora(registroBitacora* dato) {
	this->dato = dato;
	this->siguiente = nullptr;
}
nodoBitacora::~nodoBitacora() {
	if (this->dato != nullptr) {
		   delete this->dato;
		}
}

//netodos get y set 
registroBitacora* nodoBitacora::getDato()                { return this->dato; }
nodoBitacora* nodoBitacora::getSiguiente()               { return this->siguiente ; }
void nodoBitacora::setDato(registroBitacora* dato)       { this->dato = dato; }
void nodoBitacora::setSiguiente(nodoBitacora* siguiente) { this->siguiente = siguiente; ; }
//como nota me cago en la puta maldito include por ese
// desgraciado no me dejaba copilar estoy arto de tener errores de pendejo 
// todo el maldito codigo bien a pero a mister sonrisas se le ocurre no poner un include 
// saludos cordiales 
