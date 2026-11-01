#include "Paquete.h"
#include <iostream>

using namespace std;
Paquete::Paquete() {
    codigo = "";
    descripcion = "";
    peso = 0.0;
    categoria = "";
    estadoActual = "Registrado";
    clientePropietario = nullptr;
    centroOrigen = nullptr;
    bodegaAsignada = nullptr;
    filaAsignada = -1;
    columnaAsignada = -1;
    bitacora = nullptr; 
}

Paquete::Paquete(string codigo, string descripcion, double peso, string categoria, Cliente* cliente, CentroDistribucion* centro) {
    this->codigo = codigo;
    this->descripcion = descripcion;
    this->peso = peso;
    this->categoria = categoria;
    this->estadoActual = "Registrado";
    this->clientePropietario = cliente;
    this->centroOrigen = centro;
    this->bodegaAsignada = nullptr;
    this->filaAsignada = -1;
    this->columnaAsignada = -1;
    this->bitacora = nullptr;
}

Paquete::~Paquete() {

}

string Paquete::getCodigo() { return codigo; }
string Paquete::getDescripcion() { return descripcion; }
double Paquete::getPeso() { return peso; }
string Paquete::getCategoria() { return categoria; }
string Paquete::getEstadoActual() { return estadoActual; }
Cliente* Paquete::getClientePropietario() { return clientePropietario; }
CentroDistribucion* Paquete::getCentro() { return centroOrigen; }
Bodega* Paquete::getBodegaAsignada() { return bodegaAsignada; }
int Paquete::getFilaAsignada() { return filaAsignada; }
int Paquete::getColumnaAsignada() { return columnaAsignada; }
ListaBitacora* Paquete::getBitacora() { return bitacora; }

// --- Métodos Set ---
void Paquete::setCodigo(string codigo) { this->codigo = codigo; }
void Paquete::setDescripcion(string descripcion) { this->descripcion = descripcion; }
void Paquete::setPeso(double peso) { this->peso = peso; }
void Paquete::setCategoria(string categoria) { this->categoria = categoria; }
void Paquete::setEstadoActual(string estado) { this->estadoActual = estado; }
void Paquete::setClientePropietario(Cliente* cliente) { this->clientePropietario = cliente; }
void Paquete::setCentro(CentroDistribucion* centro) { this->centroOrigen = centro; }

bool Paquete::cambiarEstado(string nuevoEstado, Colaborador* responsable, string fecha) {
    this->estadoActual = nuevoEstado;
    return true;
}

void Paquete::asignarUbicacion(Bodega* bodega, int fila, int columna) {
    this->bodegaAsignada = bodega;
    this->filaAsignada = fila;
    this->columnaAsignada = columna;
    this->estadoActual = "Almacenado";
}

void Paquete::liberarUbicacion() {
    this->bodegaAsignada = nullptr;
    this->filaAsignada = -1;
    this->columnaAsignada = -1;
    this->estadoActual = "En tránsito / Retirado";
}

string Paquete::toString() {
    return "Paquete: " + codigo + " | Descripcion: " + descripcion + " | Estado: " + estadoActual;
}

//puta si esto es la clase paquete que diablos¡¡?? me hace falta mejor no pregunto 