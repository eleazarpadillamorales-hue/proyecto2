#pragma once
#include <iostream>
#include <string>
//Cliente clase padre de persona fisica y emprensa
using namespace std;
class cliente
{
	//pinche programa pendejo me asusta cuando no lee el string pienso que la cague 
	private:	
	string identificacion;
	string nombre;
	string telefono;
	string correo;
	public:
	//metodos contructores	y destructores
	 cliente();
	 cliente(string identificacion, string nombre, string telefono, string correo);
	 ~cliente();
	 //metodos get y sete
	 string getIdentificacion();
	 string getNombre();
	 string getTelefono();
	 string getCorreo();

	 void setIdentificacion(string identificacion);
	 void setNombre(string nombre);
	 void setTelefono(string telefono);
	 void setCorreo(string correo);

	 //metodos virtuales para que sea clase abstracta 
	 virtual double getPorcentajeDescuento() = 0;
	 virtual void toString() = 0;
};

//zha entendi para que sea virtual tengo que ponerle virtual y igualarlo a 0 si no pos no chambea 

//pregunta tecnica y si en vez de cliente hago persona y 
// persona como padre hereda a cliente fisico y cliente empresa y a colaboraddor==???
//digamos me ahorro un par de lineas de codigo pero queda como raro no algon como que no cuadra
//no se mejor no lo hago

