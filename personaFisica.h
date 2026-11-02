#pragma once
#include "Cliente.h"

class PersonaFisica : public Cliente {
	//facilito por herecia
public:
	PersonaFisica();
	PersonaFisica(string identificacion, string nombre, string telefono, string correo);
	~PersonaFisica();

	double getPorcentajeDescuento() const override;
	string toString() const override;
};