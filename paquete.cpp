#include "Paquete.h"
#include "ListaBitacora.h"
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
    bitacora = new ListaBitacora(); // Inicializamos la bitácora para que esté lista para registrar eventos[cite: 29]
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
    this->bitacora = new ListaBitacora(); // Creamos su bitácora asociada al nacer[cite: 29]
}

Paquete::~Paquete() {
    // Liberamos la memoria de la bitácora si fue creada dinámicamente[cite: 29]
    if (bitacora != nullptr) {
        delete bitacora;
        bitacora = nullptr;
    }
}

// --- Métodos Get (con const) ---
string Paquete::getCodigo() const { return codigo; }
string Paquete::getDescripcion() const { return descripcion; }
double Paquete::getPeso() const { return peso; }
string Paquete::getCategoria() const { return categoria; } // Corregido por si acaso faltaba return
string Paquete::getEstadoActual() const { return estadoActual; }
Cliente* Paquete::getClientePropietario() const { return clientePropietario; }
CentroDistribucion* Paquete::getCentro() const { return centroOrigen; }
Bodega* Paquete::getBodegaAsignada() const { return bodegaAsignada; }
int Paquete::getFilaAsignada() const { return filaAsignada; }
int Paquete::getColumnaAsignada() const { return columnaAsignada; }
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

string Paquete::toString() const {
    return "Paquete: " + codigo + " | Descripcion: " + descripcion + " | Estado: " + estadoActual;
}

//puta si esto es la clase paquete que diablos¡¡?? me hace falta mejor no pregunto[cite: 29]