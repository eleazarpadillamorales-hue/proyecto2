#include "personaFisica.h"

double personaFisica::getPorcentajeDescuento() { return 0; }
void personaFisica::toString() { 
	
	cout << "El nombre del cliente es: " << getNombre() << endl;
	cout << "El numero de identificacion es: " << getIdentificacion() << endl;
	cout << "El telefono es: " << getTelefono() << endl;
	cout << "El Correo es: " << getCorreo() << endl;
	; }
