#include "matrizBodega.h"
//metodos constructores otra vez 
	matrizBodega::matrizBodega() { 
		 filas=0;
		 columnas = 0;
		celdas = nullptr;
		 }
	matrizBodega::matrizBodega(int filas, int columnas, string nombre) {

		this->filas = filas;
		this->columnas = columnas;
		
	}
matrizBodega:: ~ matrizBodega() {; }



//metodos get y set 
int matrizBodega::getFilas() { return filas ; }
int matrizBodega::getColumnas() { return columnas; }
int matrizBodega::getTotalCeldas() { 
	int  auxiliar = 0;
	for (int i = 0; i < getFilas(); i++) {
		for (int j = 0; j < getColumnas(); j++) {
			auxiliar++;
		}
	}
	return auxiliar; }
int matrizBodega::getCeldasOcupadas() {
	int  auxiliar = 0;
	for (int i = 0; i < getFilas(); i++) {
		for (int j = 0; j < getColumnas(); j++) {
			if (celdas!= nullptr) {
				auxiliar++;
			}}}}
int matrizBodega::getCeldasLibres() {
	int  auxiliar = 0;
	for (int i = 0; i < getFilas(); i++) {
		for (int j = 0; j < getColumnas(); j++) {
			if (celdas = nullptr) {
				auxiliar++;
			}
		}
	}
}
double matrizBodega::getPorcentajeOcupacion() { double auxiliar = getCeldasOcupadas() * getTotalCeldas() / 100; return auxiliar; }
double matrizBodega::getPorcentajeDisponible() { double auxiliar = getCeldasLibres() * getTotalCeldas() / 100; return auxiliar; }
bool matrizBodega::asignarPaqueteEnCelda(int fila, int columna, paquete* p) {
	if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) return false;
	if (celdas[fila][columna].estaOcupada()) return false;
	celdas[fila][columna].asignarPaquete(p);
	return true;
}

bool matrizBodega::liberarCelda(int fila, int columna) {
	if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) return false;
	celdas[fila][columna].liberar();
	return true;
}

celda* matrizBodega::getCelda(int fila, int columna) {
	if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) return nullptr;
	return &celdas[fila][columna];
}

//creo ya quedo 
