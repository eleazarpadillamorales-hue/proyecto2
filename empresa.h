#pragma once

#include <iostream>
#include <string>
#include "Cliente.h" 

using namespace std;

class Empresa : public Cliente { 
private:
    string actividadEconomica;    
    double porcentajeDescuento;

public:
    //metodos contructores y destructores
    Empresa();
    Empresa(string identificacion, string nombre, string telefono, string correo, string actividadEconomica, double porcentajeDescuento);
    ~Empresa();

    //metodos gets y sets 
    string getActividadEconomica() const;
    double getPorcentajeDescuento() const override; 

    void setActividadEconomica(string actividadEconomica);
    void setPorcentajeDescuento(double porcentajeDescuento);

    //metodos adicionales 
    string toString() const override; 
};