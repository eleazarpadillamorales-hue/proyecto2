#include "SolicitudEnvio.h"
#include <iostream>

using namespace std;
SolicitudEnvio::SolicitudEnvio() {
    codigo = "";
    destino = "";
    fechaSolicitud = "";
    costoEstimado = 0.0;
    estado = "Pendiente";
    TARIFA_GENERAL = 1000.0;
    TARIFA_FRAGIL = 2000.0;
    TARIFA_TECNOLOGIA = 2500.0;
    TARIFA_DOCUMENTOS = 500.0;
}
SolicitudEnvio::SolicitudEnvio(string codigo, Cliente cliente, Paquete paquete, Colaborador colaborador, CentroDistribucion centro, string destino, string fecha) {
    this->codigo = codigo;
    this->cliente = cliente;
    this->paquete = paquete;
    this->colaboradorResponsable = colaborador;
    this->centroOrigen = centro;
    this->destino = destino;
    this->fechaSolicitud = fecha;
    this->costoEstimado = 0.0;
    this->estado = "Pendiente";

    TARIFA_GENERAL = 1000.0;
    TARIFA_FRAGIL = 2000.0;
    TARIFA_TECNOLOGIA = 2500.0;
    TARIFA_DOCUMENTOS = 500.0;
}

SolicitudEnvio::~SolicitudEnvio() {
}

string SolicitudEnvio::getCodigo() { return codigo; }
Cliente SolicitudEnvio::getCliente() { return cliente; }
Paquete SolicitudEnvio::getPaquete() { return paquete; }
Colaborador SolicitudEnvio::getColaboradorResponsable() { return colaboradorResponsable; }
CentroDistribucion SolicitudEnvio::getCentroOrigen() { return centroOrigen; }
string SolicitudEnvio::getDestino() { return destino; }
string SolicitudEnvio::getFechaSolicitud() { return fechaSolicitud; }
double SolicitudEnvio::getCostoEstimado() { return costoEstimado; }
string SolicitudEnvio::getEstado() { return estado; }


void SolicitudEnvio::setCodigo(string codigo) { this->codigo = codigo; }
void SolicitudEnvio::setCliente(Cliente cliente) { this->cliente = cliente; }
void SolicitudEnvio::setPaquete(Paquete paquete) { this->paquete = paquete; }
void SolicitudEnvio::setColaboradorResponsable(Colaborador colaborador) { this->colaboradorResponsable = colaborador; }
void SolicitudEnvio::setCentroOrigen(CentroDistribucion centro) { this->centroOrigen = centro; }
void SolicitudEnvio::setDestino(string destino) { this->destino = destino; }
void SolicitudEnvio::setFechaSolicitud(string fecha) { this->fechaSolicitud = fecha; }
void SolicitudEnvio::setEstado(string estado) { this->estado = estado; }

double SolicitudEnvio::calcularCosto() {


    this->costoEstimado = TARIFA_GENERAL;
    return this->costoEstimado;
}

void SolicitudEnvio::cambiarEstado(string nuevoEstado) {
    this->estado = nuevoEstado;
}

string SolicitudEnvio::toString() {
    return "Solicitud: " + codigo + " | Destino: " + destino + " | Estado: " + estado;
}