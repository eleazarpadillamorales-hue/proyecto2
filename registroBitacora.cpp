#include "registroBitacora.h"
#include "colaborador.h"
#include <iostream>
#include <string>
using namespace std;

registroBitacora::registroBitacora() {
	estadoAnterior = "llego";
	nuevoEstado = "no ha llegao";
	fecha = "sin fecha";
	responsable = nullptr;
}
registroBitacora::registroBitacora(string estadoAnterior, string nuevoEstado, string fecha, colaborador* responsable ) 
{
	this->estadoAnterior = estadoAnterior;
	this->nuevoEstado = nuevoEstado;
	this->fecha = fecha;
	this->responsable = responsable;
}
//quietos el destructor era diferente pero no recuerdo que cambiaba recuerda buscarlo 
registroBitacora::~registroBitacora() { ; }
//metodos get
string registroBitacora::getEstadoAnterior() { return estadoAnterior; }
string registroBitacora::getNuevoEstado() { return nuevoEstado; }
string registroBitacora::getFecha() { return fecha;
}
colaborador* registroBitacora::getResponsable() { return responsable; }
//metodos set
void registroBitacora::setEstadoAnterior(string estadoAnterior) { this->estadoAnterior = estadoAnterior; }
void registroBitacora::setNuevoEstado(string nuevoEstado) { this->nuevoEstado = nuevoEstado; }
void registroBitacora::setFecha(string fecha) { this->fecha = fecha; }
void registroBitacora::setResponsable(colaborador*) { this->responsable = responsable;  }
//otros metodos
void registroBitacora::toString() 
	{

		cout << "El estado anterior de este pedio es:  " << getEstadoAnterior() << endl;
		cout << "El estado actual  de este pedio es: " << getNuevoEstado() << endl;
		cout << "El  telefono es: " << getFecha() << endl;
		if (responsable != nullptr) {
			cout << "--- Datos del Responsable ---" << endl;

			//como nota no se si esta linea la escribi bien
			responsable->toString(); 
		}
		else {
			cout << "Responsable: sin asignar" << endl;
		}
	