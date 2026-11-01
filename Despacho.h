#pragma once
#include <string>
#include <iostream>

#include "SolicitudEnvio.h"
#include "Paquete.h"
#include "Cliente.h"
#include "Colaborador.h"
#include "CentroDistribucion.h"

using namespace std;

class Despacho {
private:
    string codigo;
    SolicitudEnvio solicitud;
    Paquete paquete;
    Cliente cliente;
    Colaborador colaboradorResponsable;
    CentroDistribucion centroOrigen;
    string destino;
    string fechaDespacho;
    string hora;
    string estado;

public:
    Despacho();
    Despacho(string codigo, SolicitudEnvio solicitud, Colaborador colaborador, string destino, string fecha, string hora);
    ~Despacho();


    string getCodigo();
    SolicitudEnvio getSolicitud();
    Paquete getPaquete();
    Cliente getCliente();
    Colaborador getColaboradorResponsable();
    CentroDistribucion getCentroOrigen();
    string getDestino();
    string getFechaDespacho();
    string getHora();
    string getEstado();

    void setCodigo(string codigo);
    void setSolicitud(SolicitudEnvio solicitud);
    void setPaquete(Paquete paquete);
    void setCliente(Cliente cliente);
    void setColaboradorResponsable(Colaborador colaborador);
    void setCentroOrigen(CentroDistribucion centro);
    void setDestino(string destino);
    void setFechaDespacho(string fecha);
    void setHora(string hora);
    void setEstado(string estado);

    void finalizarDespacho();
    string toString();
};