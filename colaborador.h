#pragma once
#include <iostream>
#include <string>
using namespace std;
class colaborador
{
private:
string identificacion;
string nombreCompleto;
string fechaIngreso;
string puesto;
public:
	//contructores y Destructores
colaborador();
colaborador(string identificacion, string nombreCompleto, string fechaIngreso, string puesto);
~colaborador();
//metoDos get
string getIdentificacion();
string getNombreCompleto();
string getFechaIngreso();
string getPuesto();
//metodos set
void setIdentificacion(string identificacion);
void setNombreCompleto(string nombreCompleto);
void setFechaIngreso(string fechaIngreso);
void setPuesto(string puesto);
//metodos adicionales 
void toString();



};

