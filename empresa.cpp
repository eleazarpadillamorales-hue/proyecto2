#include "Empresa.h"

//metodos contructores y destructores
Empresa::Empresa() : Cliente() {
    actividadEconomica = "Sin actividad";
    porcentajeDescuento = 0.0;
}

Empresa::Empresa(string identificacion, string nombre, string telefono, string correo, string actividadEconomica, double porcentajeDescuento)
    : Cliente(identificacion, nombre, telefono, correo) {
    this->actividadEconomica = actividadEconomica;
    this->porcentajeDescuento = porcentajeDescuento;
}

Empresa::~Empresa() {
}

//metodos gets y sets
string Empresa::getActividadEconomica() const { return actividadEconomica; }
double Empresa::getPorcentajeDescuento() const { return porcentajeDescuento; }

void Empresa::setActividadEconomica(string actividadEconomica) {
    this->actividadEconomica = actividadEconomica;
}

void Empresa::setPorcentajeDescuento(double porcentajeDescuento) {
    this->porcentajeDescuento = porcentajeDescuento;
}

string Empresa::toString() const {
    return "Empresa: " + getNombre() + " | ID: " + getIdentificacion() +
        " | Tel: " + getTelefono() + " | Correo: " + getCorreo() +
        " | Actividad Económica: " + actividadEconomica +
        " | Descuento: " + to_string(porcentajeDescuento) + "%";
}

//Contexto no enteni el erro  segun Dice no lo inicialize 
// pero segun mi santa ignorancia si lo hice so ???