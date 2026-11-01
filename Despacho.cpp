#include "Despacho.h"
#include <iostream>

using namespace std;

// --- Constructor por defecto ---
Despacho::Despacho() {
    codigo = "";
    destino = "";
    fechaDespacho = "";
    hora = "";
    estado = "En proceso";
}

// --- Constructor con parámetros ---
// Nota: Como la solicitud ya trae por dentro el paquete, el cliente, el centro y el colaborador, 
// podemos extraerlos directamente de ahí para inicializar los atributos de manera limpia.
Despacho::Despacho(string codigo, SolicitudEnvio solicitud, Colaborador colaborador, string destino, string fecha, string hora) {
    this->codigo = codigo;
    this->solicitud = solicitud;
    this->paquete = solicitud.getPaquete();
    this->cliente = solicitud.getCliente();
    this->colaboradorResponsable = colaborador;
    this->centroOrigen = solicitud.getCentroOrigen();
    this->destino = destino;
    this->fechaDespacho = fecha;
    this->hora = hora;
    this->estado = "En camino";
}

// --- Destructor ---
Despacho::~Despacho() {
}

// --- Métodos Get ---
string Despacho::getCodigo() { return codigo; }
SolicitudEnvio Despacho::getSolicitud() { return solicitud; }
Paquete Despacho::getPaquete() { return paquete; }
Cliente Despacho::getCliente() { return cliente; }
Colaborador Despacho::getColaboradorResponsable() { return colaboradorResponsable; }
CentroDistribucion Despacho::getCentroOrigen() { return centroOrigen; }
string Despacho::getDestino() { return destino; }
string Despacho::getFechaDespacho() { return fechaDespacho; }
string Despacho::getHora() { return hora; }
string Despacho::getEstado() { return estado; }

// --- Métodos Set ---
void Despacho::setCodigo(string codigo) { this->codigo = codigo; }
void Despacho::setSolicitud(SolicitudEnvio solicitud) { this->solicitud = solicitud; }
void Despacho::setPaquete(Paquete paquete) { this->paquete = paquete; }
void Despacho::setCliente(Cliente cliente) { this->cliente = cliente; }
void Despacho::setColaboradorResponsable(Colaborador colaborador) { this->colaboradorResponsable = colaborador; }
void Despacho::setCentroOrigen(CentroDistribucion centro) { this->centroOrigen = centro; }
void Despacho::setDestino(string destino) { this->destino = destino; }
void Despacho::setFechaDespacho(string fecha) { this->fechaDespacho = fecha; }
void Despacho::setHora(string hora) { this->hora = hora; }
void Despacho::setEstado(string estado) { this->estado = estado; }

// --- Métodos de Funcionalidad ---
void Despacho::finalizarDespacho() {
    this->estado = "Entregado";
}

string Despacho::toString() {
    return "Despacho: " + codigo + " | Destino: " + destino + " | Estado: " + estado + " | Hora: " + hora;
}