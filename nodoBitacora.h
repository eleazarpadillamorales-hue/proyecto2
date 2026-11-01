#pragma once
#include "registroBitacora.h"
class nodoBitacora
{
private:
registroBitacora* dato;
nodoBitacora * siguiente;
public:
nodoBitacora(registroBitacora* dato);
~nodoBitacora();
//me cago en la puta aca tenia un puto simbolo que no iba y estuve 2 horas en este perro error el culpable ->}; arresten a esos simbolos y delen 3 años de carcel
//netodos get y set 
registroBitacora* getDato();
nodoBitacora* getSiguiente();
void setDato(registroBitacora* dato);
void setSiguiente(nodoBitacora* siguiente);
};