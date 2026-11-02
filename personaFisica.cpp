#include "PersonaFisica.h"

PersonaFisica::PersonaFisica() : Cliente() {}

PersonaFisica::PersonaFisica(string identificacion, string nombre, string telefono, string correo)
    : Cliente(identificacion, nombre, telefono, correo) {
}

PersonaFisica::~PersonaFisica() {}

double PersonaFisica::getPorcentajeDescuento() const {
    return 0.0;
}

string PersonaFisica::toString() const {
    return "Persona Física - Nombre: " + getNombre() +
        " | ID: " + getIdentificacion() +
        " | Tel: " + getTelefono() +
        " | Correo: " + getCorreo();
}

// Implementación previa adaptada para retornar string en lugar de void