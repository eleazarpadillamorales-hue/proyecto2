#pragma once
#include "RegistroBitacora.h"

class NodoBitacora {
private:
    RegistroBitacora* dato;
    NodoBitacora* siguiente;

public:
    NodoBitacora(RegistroBitacora* dato);
    ~NodoBitacora();

    //me cago en la puta aca tenia un puto simbolo que no iba y estuve 2 horas en este perro error el culpable ->}; arresten a esos simbolos y delen 3 años de carcel

    //netodos get y set 
    RegistroBitacora* getDato() const;
    NodoBitacora* getSiguiente() const;
    void setDato(RegistroBitacora* dato);
    void setSiguiente(NodoBitacora* siguiente);
};