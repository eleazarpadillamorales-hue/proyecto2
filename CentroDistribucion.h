#pragma once
#include <string>
#include <iostream>
#include "ListaEnlazada2.h" 
#include "Cliente.h"
#include "Colaborador.h"
#include "Bodega.h"
#include "Paquete.h"
#include "SolicitudEnvio.h"
#include "Despacho.h"

using namespace std;

class CentroDistribucion {
private:
    string codigo;
    string nombre;
    string provincia;
    string direccion;
    string telefono;

    // Listas enlazadas para la gestión de todo el centro
    ListaEnlazada<Cliente> listaClientes;
    ListaEnlazada<Colaborador> listaColaboradores;
    ListaEnlazada<Bodega> listaBodegas;
    ListaEnlazada<Paquete> listaPaquetes;
    ListaEnlazada<SolicitudEnvio> listaSolicitudes;
    ListaEnlazada<Despacho> listaDespachos;

public:
    // Constructores y Destructor
    CentroDistribucion();
    CentroDistribucion(string codigo, string nombre, string provincia, string direccion, string telefono);
    ~CentroDistribucion();

    // Métodos Get básicos
    string getCodigo() const;
    string getNombre() const;
    string getProvincia() const;
    string getDireccion() const;
    string getTelefono() const;

    // Métodos Set básicos
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setProvincia(string provincia);
    void setDireccion(string direccion);
    void setTelefono(string telefono);

    // Métodos Get para las Listas Enlazadas
    ListaEnlazada<Cliente>& getClientes();
    ListaEnlazada<Colaborador>& getColaboradores();
    ListaEnlazada<Bodega>& getBodegas();
    ListaEnlazada<Paquete>& getPaquetes();
    ListaEnlazada<SolicitudEnvio>& getSolicitudes();
    ListaEnlazada<Despacho>& getDespachos();

    // Método de utilidad
    string toString() const;

    //toy mareado mami metame en arroz
};