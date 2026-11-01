#pragma once
#include "matrizBodega.h"
#include <iostream>
#include <string>
//maldito copilador que buenos pedos me saca 

using namespace std;
class MatrizBodega;
class bodega
{
public:
	string codigo;
	string nombre;
	int tipoCodigo;
	string tipoNombre;
	MatrizBodega* matriz;

public:
	//constructores
	bodega();
	bodega(string, string, int, int, int);
	~bodega();
	//metodos get
	string getCodigo();
	string getNombre();
	int getTipoCodigo();
	string getTipoNombre();
	MatrizBodega* getMatriz();
	//metodos set
	void setCodigo(string);
	void setNombre(string);
	void setTipoCodigo(int);
	void setTipoNombre(string);
};
//creo aca falta gente pero si no me acuerdo no paso cantala con migo 
//esa mamada de las mayusculas me tiene mamado 