#include "Cliente.h"

Cliente::Cliente() {
	identificacion = "0000000";
	nombre = "Nombre";
	telefono = "0000000";
	correo = "uncorreo";
}

Cliente::Cliente(string identificacion, string nombre, string telefono, string correo) {
	this->identificacion = identificacion;
	this->nombre = nombre;
	this->telefono = telefono;
	this->correo = correo;
}

Cliente::~Cliente() {
}

// Métodos Get
string Cliente::getIdentificacion() const { return identificacion; }
string Cliente::getNombre() const { return nombre; }
string Cliente::getTelefono() const { return telefono; }
string Cliente::getCorreo() const { return correo; }

// Métodos Set
void Cliente::setIdentificacion(string identificacion) { this->identificacion = identificacion; }
void Cliente::setNombre(string nombre) { this->nombre = nombre; }
void Cliente::setTelefono(string telefono) { this->telefono = telefono; }
void Cliente::setCorreo(string correo) { this->correo = correo; }


//metodos virtuales para que sea clase 
// abstracta aca deberian ir pero no se ponene segun comprendo segun mi infinita ignorancia 
//la cual parece mucha