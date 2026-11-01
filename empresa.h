#pragma once
#include "cliente.h"
class empresa : public cliente
{
private:
	string activiaEconomica;
	double porcentajeDescuento;
public:
	//metodos contructores y destructores
	empresa();
	empresa(string activiaEconomica, double porcentajeDescuento);
	~empresa();
	//metodos gets y sets
	string getActividadEconomica();
	double getporcentajeDescuento();

	void setActividadEconomica(string activiaEconomica);
	void setporcentajeDescuento(double porcentajeDescuento);
	//metodos adicionales 
	void toString() override;


};

