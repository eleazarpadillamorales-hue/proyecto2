#include "cliente.h"

class personaFisica: cliente { 
	//facilito por herecia 
public:
	double getPorcentajeDescuento() override;
	void toString() override;
};