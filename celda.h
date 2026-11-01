#pragma once
#include <iostream>
#include <string>
#include "Paquete.h"
#include "Paquete.cpp"


using namespace std;
class paquete;
//so debo declarar la clase antes de usarla adelante ¡?=???=???makako confundido 
class celda {
private:
	string CodigoBodega;
	int Fila;
	int Columna;
	bool Ocupada;
	paquete* Paquete;
	//creo tengo conflictos con el nombre por eso esa madre 
public:
	//metodos contructores y destructores 
	celda();
	celda(string CodigoBodega, int  Fila, int Columna, bool ocupada, paquete* Paquete);
~celda();


//me cago en la puta cuantos errores mas voy a cometer hasta que chambee
bool estaOcupada() ;
void asignarPaquete(paquete* Paquete );
void liberar();
//metodos get
string getCodigoBodega();
int getFila();
int getColumna();
paquete* getPaquete();
string getUbicacion();

};

//creo ya quedo vamos con el cpp creo 