#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cliente {
protected: 
    string identificacion;
    string nombre;
    string telefono;
    string correo;

public:
    Cliente();
    Cliente(string identificacion, string nombre, string telefono, string correo);
    virtual ~Cliente();

    // Métodos Get (con const)
    string getIdentificacion() const;
    string getNombre() const;
    string getTelefono() const;
    string getCorreo() const;

    // Métodos Set
    void setIdentificacion(string identificacion);
    void setNombre(string nombre);
    void setTelefono(string telefono);
    void setCorreo(string correo);

    // Métodos virtuales puros
    virtual double getPorcentajeDescuento() const = 0;
    virtual string toString() const = 0;
};