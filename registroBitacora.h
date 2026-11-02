#pragma once
#include "Colaborador.h"
#include <iostream>
#include <string>

using namespace std;

//segun comprendo se guarda un Dato que en si es una clase en este 
// caso seria que se guardan los datos de un colabaorador
class RegistroBitacora
{
private:
    string estadoAnterior;
    string nuevoEstado;
    string fecha;
    Colaborador* responsable;

public:
    //Contruscores y destructor
    RegistroBitacora();
    RegistroBitacora(string estadoAnterior, string nuevoEstado, string fecha, Colaborador* responsable);
    ~RegistroBitacora();

    //metodos get (con const)
    string getEstadoAnterior() const;
    string getNuevoEstado() const;
    string getFecha() const;
    Colaborador* getResponsable() const;

    //metodos set
    void setEstadoAnterior(string estadoAnterior);
    void setNuevoEstado(string nuevoEstado);
    void setFecha(string fecha);
    void setResponsable(Colaborador* responsable);

    //otros metodos
    string toString() const;
};