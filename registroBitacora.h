#pragma once
#include "colaborador.h"
#include <iostream>
#include <string>
using namespace std;
//segun comprendo se guarda un Dato que en si es una clase en este 
// caso seria que se guardan los datos de un colabaorador
class registroBitacora
{
private:
string estadoAnterior;
string nuevoEstado;
string fecha;
colaborador* responsable;
public:
//Contruscores y destructor
registroBitacora();
registroBitacora(string estadoAnterior, string nuevoEstado, string fecha, colaborador* responsable);
~registroBitacora();
//metodos get
string getEstadoAnterior();
string getNuevoEstado();
string getFecha();
colaborador * getResponsable();
//metodos set
void setEstadoAnterior(string estadoAnterior);
void setNuevoEstado(string nuevoEstado);
void setFecha(string fecha);
void setResponsable(colaborador*);
//otros metodos
void toString();
};

