#include "empresa.h"

	//metodos contructores y destructores
empresa::empresa() { 
	 activiaEconomica = "Nombre";
	 porcentajeDescuento = 0;}

//Contexto no enteni el erro de linea 10 segun Dice no lo inicialize 
// pero segun mi santa ignorancia si lo hice so ???
empresa::empresa(string activiaEconomica, double porcentajeDescuento) {
	this->activiaEconomica = activiaEconomica;
	this->porcentajeDescuento = porcentajeDescuento; }

empresa::~empresa() { ; }
//metodos gets y sets
string empresa::getActividadEconomica() { return activiaEconomica; }
double empresa::getporcentajeDescuento() { return porcentajeDescuento; }

void empresa::setActividadEconomica(string activiaEconomica) 
{ this->activiaEconomica = activiaEconomica; }
void empresa::setporcentajeDescuento(double porcentajeDescuento) 
{ this->porcentajeDescuento = porcentajeDescuento; }
//metodos adicionales 
void empresa::toString() {

	cout << "El nombre de la empresa es: " << getNombre() << endl;
	cout << "El numero del identificacion es: " << getIdentificacion() << endl;
	cout << "El  telefono es: " << getTelefono() << endl;
	cout << "El Correo es: " << getCorreo() << endl;
	cout << "La activida economica es: " << getActividadEconomica() << endl;
	cout << "El Porcentaje de descuento es: " << getPorcentajeDescuento() << endl;
;}