#include "Colaborador.h"

Colaborador::Colaborador() {
	identificacion = "0000000";
	nombreCompleto = "macacomenor";
	fechaIngreso = "0000000";
	puesto = "macaco";
}

Colaborador::Colaborador(string identificacion, string nombreCompleto, string fechaIngreso, string puesto) {
	this->identificacion = identificacion;
	this->nombreCompleto = nombreCompleto;
	this->fechaIngreso = fechaIngreso;
	this->puesto = puesto;
}

Colaborador:: ~Colaborador() { ; }

//metoDos get
string Colaborador::getIdentificacion() const { return identificacion; }
string Colaborador::getNombreCompleto() const { return nombreCompleto; }
string Colaborador::getFechaIngreso() const { return fechaIngreso; }
string Colaborador::getPuesto() const { return puesto; }

//metodos set
void Colaborador::setIdentificacion(string identificacion) { this->identificacion = identificacion; }
void Colaborador::setNombreCompleto(string nombreCompleto) { this->nombreCompleto = nombreCompleto; }
void Colaborador::setFechaIngreso(string fechaIngreso) { this->fechaIngreso = fechaIngreso; }
void Colaborador::setPuesto(string puesto) { this->puesto = puesto; }

//metodos adicionales 
string Colaborador::toString() const {
	return "Colaborador: " + nombreCompleto + " | ID: " + identificacion + " | Puesto: " + puesto;
}