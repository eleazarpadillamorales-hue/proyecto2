#include "cliente.h"
cliente::cliente() {
	identificacion = "0000000";
	nombre = "Nombre";
	telefono = "0000000";
	correo = "uncorreo";}
cliente::cliente(string identificacion, string nombre, string telefono, string correo) {
	this->identificacion = identificacion;
	this->nombre = nombre;
	this->telefono = telefono;
	this->correo = correo;}
cliente::~cliente() { ; }
//metodos get y sete
string cliente::getIdentificacion()      { return identificacion; }
string cliente::getNombre()				{ return nombre; }
string cliente::getTelefono()			{ return telefono; }
string cliente::getCorreo()				{ return correo; }
//como nota segun yo era cliente::string get nombre pero me dio error so lo voltie
void cliente::setIdentificacion(string identificacion)		{this->identificacion = identificacion;}
void cliente::setNombre(string nombre)						{ this->nombre = nombre; }
void cliente::setTelefono(string telefono)					{ this->telefono = telefono; }
void cliente::setCorreo(string correo)						{ this->correo = correo; }
//metodos virtuales para que sea clase 
// abstracta aca deberian ir pero no se ponene segun comprendo segun mi infinita ignorancia 
//la cual parece mucha 