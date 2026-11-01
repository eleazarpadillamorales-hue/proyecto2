#include "bodega.h"
#include "MatrizBodega.h"
//constructores
bodega::bodega() { 
	 codigo = "";
	 nombre = "";
	 tipoCodigo =0;
	 tipoNombre = "";
	matriz = nullptr;
	; }
bodega::bodega(string codigo, string nombre, int tipoCodigo, int fila, int columna) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->tipoCodigo = tipoCodigo;
	if (tipoCodigo == 1) {
		this->tipoNombre = "General";
	}
	else {
		this->tipoNombre = "Especializada";
	} 
	this->matriz = new MatrizBodega(fila, columna, codigo);
}
bodega::~bodega() {delete matriz ; }
//metodos get
string bodega::getCodigo() { return codigo; }
string bodega::getNombre() { return nombre; }
int bodega::getTipoCodigo() { return tipoCodigo ; }
string bodega::getTipoNombre() { return tipoNombre; }
MatrizBodega* bodega::getMatriz() { return matriz; }
//metodos set
void bodega::setCodigo(string codigo) { this->codigo = codigo; }
void bodega::setNombre(string nombre) { this->nombre = nombre;; }
void bodega::setTipoCodigo(int tipocodigo) { this->tipoCodigo = tipoCodigo;; }
void bodega::setTipoNombre(string nombre) { this->tipoNombre = tipoNombre;; }