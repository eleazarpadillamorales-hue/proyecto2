#include "colaborador.h"
colaborador::colaborador() {
	identificacion = "0000000";
	nombreCompleto = "macacomenor";
	fechaIngreso = "0000000";
	puesto = "macaco";
}
colaborador::colaborador(string identificacion, string nombreCompleto, string fechaIngreso, string puesto) {
	this->identificacion = identificacion;
	this->nombreCompleto = nombreCompleto;
	this->fechaIngreso = fechaIngreso;
	this->puesto = puesto;
}
colaborador:: ~colaborador() { ; }
//metoDos get
string colaborador::getIdentificacion() { return identificacion;}
string colaborador::getNombreCompleto() { return nombreCompleto; }
string colaborador::getFechaIngreso() { return fechaIngreso; }
string colaborador::getPuesto() { return puesto; }
//metodos set
void colaborador::setIdentificacion(string identificacion) { this->identificacion = identificacion; }
void colaborador::setNombreCompleto(string nombreCompleto) { this->nombreCompleto = nombreCompleto; }
void colaborador::setFechaIngreso(string fechaIngreso) { this->fechaIngreso = fechaIngreso; }
void colaborador::setPuesto(string puesto) { this->puesto = puesto; }
//metodos adicionales 
void colaborador::toString() {

	cout << "El nombre del Colaborador es: " << getNombreCompleto() << endl;
	cout << "El numero de identificacion es: " << getIdentificacion() << endl;
	cout << "La fecha de ingreso es: " << getFechaIngreso() << endl;
	cout << "El Puesto es: " << getPuesto() << endl;
}