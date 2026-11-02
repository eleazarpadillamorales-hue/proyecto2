#include "SolicitudEnvio.h"
#include "Paquete.h"
#include "Cliente.h"
#include "Colaborador.h"
#include "CentroDistribucion.h"
#include <iostream>

using namespace std;

SolicitudEnvio::SolicitudEnvio() {
    codigo = "";
    cliente = nullptr;
    paquete = nullptr;
    colaboradorResponsable = nullptr;
    centroOrigen = nullptr;
    destino = "";
    fechaSolicitud = "";
    costoEstimado = 0.0;
    estado = "Pendiente";
    TARIFA_GENERAL = 1000.0;
    TARIFA_FRAGIL = 2000.0;
    TARIFA_TECNOLOGIA = 2500.0;
    TARIFA_DOCUMENTOS = 500.0;
}

SolicitudEnvio::SolicitudEnvio(string codigo, Cliente* cliente, Paquete* paquete, Colaborador* colaborador, CentroDistribucion* centro, string destino, string fecha) {
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

SolicitudEnvio::~SolicitudEnvio() {}

// Métodos Get
string SolicitudEnvio::getCodigo() const { return codigo; }
Cliente* SolicitudEnvio::getCliente() const { return cliente; }
Paquete* SolicitudEnvio::getPaquete() const { return paquete; }
Colaborador* SolicitudEnvio::getColaboradorResponsable() const { return colaboradorResponsable; }
CentroDistribucion* SolicitudEnvio::getCentroOrigen() const { return centroOrigen; }
string SolicitudEnvio::getDestino() const { return destino; }
string SolicitudEnvio::getFechaSolicitud() const { return fechaSolicitud; }
double SolicitudEnvio::getCostoEstimado() const { return costoEstimado; }
string SolicitudEnvio::getEstado() const { return estado; }

// Métodos Set
void SolicitudEnvio::setCodigo(string codigo) { this->codigo = codigo; }
void SolicitudEnvio::setCliente(Cliente* cliente) { this->cliente = cliente; }
void SolicitudEnvio::setPaquete(Paquete* paquete) { this->paquete = paquete; }
void SolicitudEnvio::setColaboradorResponsable(Colaborador* colaborador) { this->colaboradorResponsable = colaborador; }
void SolicitudEnvio::setCentroOrigen(CentroDistribucion* centro) { this->centroOrigen = centro; }
void SolicitudEnvio::setDestino(string destino) { this->destino = destino; }
void SolicitudEnvio::setFechaSolicitud(string fecha) { this->fechaSolicitud = fecha; }
void SolicitudEnvio::setEstado(string estado) { this->estado = estado; }

double SolicitudEnvio::calcularCosto() {
    if (paquete != nullptr) {
        string cat = paquete->getCategoria();
        if (cat == "Fragil") {
            this->costoEstimado = TARIFA_FRAGIL;
        }
        else if (cat == "Tecnologia") {
            this->costoEstimado = TARIFA_TECNOLOGIA;
        }
        else if (cat == "Documentos") {
            this->costoEstimado = TARIFA_DOCUMENTOS;
        }
        else {
            this->costoEstimado = TARIFA_GENERAL;
        }
    }
    else {
        this->costoEstimado = TARIFA_GENERAL;
    }
    return this->costoEstimado;
}

void SolicitudEnvio::cambiarEstado(string nuevoEstado) {
    this->estado = nuevoEstado;
}

string SolicitudEnvio::toString() const {
    return "Solicitud: " + codigo + " | Destino: " + destino + " | Estado: " + estado;
}