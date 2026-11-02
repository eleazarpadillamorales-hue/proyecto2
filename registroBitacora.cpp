#include "RegistroBitacora.h"
#include <iostream>
#include <string>

using namespace std;

RegistroBitacora::RegistroBitacora() {
    estadoAnterior = "llego";
    nuevoEstado = "no ha llegao";
    fecha = "sin fecha";
    responsable = nullptr;
}

RegistroBitacora::RegistroBitacora(string estadoAnterior, string nuevoEstado, string fecha, Colaborador* responsable)
{
    this->estadoAnterior = estadoAnterior;
    this->nuevoEstado = nuevoEstado;
    this->fecha = fecha;
    this->responsable = responsable;
}

//quietos el destructor era diferente pero no recuerdo que cambiaba recuerda buscarlo
RegistroBitacora::~RegistroBitacora() {

}

//metodos get
string RegistroBitacora::getEstadoAnterior() const { return estadoAnterior; }
string RegistroBitacora::getNuevoEstado() const { return nuevoEstado; }
string RegistroBitacora::getFecha() const { return fecha; }
Colaborador* RegistroBitacora::getResponsable() const { return responsable; }

//metodos set
void RegistroBitacora::setEstadoAnterior(string estadoAnterior) { this->estadoAnterior = estadoAnterior; }
void RegistroBitacora::setNuevoEstado(string nuevoEstado) { this->nuevoEstado = nuevoEstado; }
void RegistroBitacora::setFecha(string fecha) { this->fecha = fecha; }

// Corregido el parámetro para que la asignación funcione correctamente
void RegistroBitacora::setResponsable(Colaborador* responsable) {
    this->responsable = responsable;
}

//otros metodos
string RegistroBitacora::toString() const {
    string resultado = "Estado anterior: " + estadoAnterior + " | Estado actual: " + nuevoEstado + " | Fecha: " + fecha;
    if (responsable != nullptr) {
        resultado += " | [Responsable: " + responsable->getNombreCompleto() + "]";
    }
    else {
        resultado += " | Responsable: sin asignar";
    }
    return resultado;
}