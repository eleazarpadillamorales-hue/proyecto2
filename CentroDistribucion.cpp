#include "CentroDistribucion.h"
#include <iostream>

// Constructor por defecto 
CentroDistribucion::CentroDistribucion() {
    codigo = "";
    nombre = "";
    provincia = "";
    direccion = "";
    telefono = "";
}

CentroDistribucion::CentroDistribucion(string codigo, string nombre, string provincia, string direccion, string telefono) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->provincia = provincia;
    this->direccion = direccion;
    this->telefono = telefono;
}

// Destructor 
CentroDistribucion::~CentroDistribucion() {
}

string CentroDistribucion::getCodigo() const { return codigo; }
string CentroDistribucion::getNombre() const { return nombre; }
string CentroDistribucion::getProvincia() const { return provincia; }
string CentroDistribucion::getDireccion() const { return direccion; }
string CentroDistribucion::getTelefono() const { return telefono; }

void CentroDistribucion::setCodigo(string codigo) { this->codigo = codigo; }
void CentroDistribucion::setNombre(string nombre) { this->nombre = nombre; }
void CentroDistribucion::setProvincia(string provincia) { this->provincia = provincia; }
void CentroDistribucion::setDireccion(string direccion) { this->direccion = direccion; }
void CentroDistribucion::setTelefono(string telefono) { this->telefono = telefono; }

ListaEnlazada<Cliente>& CentroDistribucion::getClientes() { return listaClientes; }
ListaEnlazada<Colaborador>& CentroDistribucion::getColaboradores() { return listaColaboradores; }
ListaEnlazada<Bodega>& CentroDistribucion::getBodegas() { return listaBodegas; }
ListaEnlazada<Paquete>& CentroDistribucion::getPaquetes() { return listaPaquetes; }
ListaEnlazada<SolicitudEnvio>& CentroDistribucion::getSolicitudes() { return listaSolicitudes; }
ListaEnlazada<Despacho>& CentroDistribucion::getDespachos() { return listaDespachos; }

string CentroDistribucion::toString() const {
    return "Centro de Distribucion: " + nombre + " (" + codigo + ") - Provincia: " + provincia;
}