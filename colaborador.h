#pragma once
#include <iostream>
#include <string>

using namespace std;

class Colaborador {
private:
    string identificacion;
    string nombreCompleto;
    string fechaIngreso;
    string puesto;

public:
    //contructores y Destructores
    Colaborador();
    Colaborador(string identificacion, string nombreCompleto, string fechaIngreso, string puesto);
    ~Colaborador();

    //metoDos get
    string getIdentificacion() const;
    string getNombreCompleto() const;
    string getFechaIngreso() const;
    string getPuesto() const;

    //metodos set
    void setIdentificacion(string identificacion);
    void setNombreCompleto(string nombreCompleto);
    void setFechaIngreso(string fechaIngreso);
    void setPuesto(string puesto);

    //metodos adicionales 
    string toString() const;
};