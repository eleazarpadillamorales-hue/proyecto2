#pragma once
#include <string>
#include <iostream>

class SolicitudEnvio;
class Paquete;
class Cliente;
class Colaborador;
class CentroDistribucion;

using namespace std;

class Despacho {
private:
    string codigo;
    SolicitudEnvio* solicitud;
    Paquete* paquete;
    Cliente* cliente;
    Colaborador* colaboradorResponsable;
    CentroDistribucion* centroOrigen;
    string destino;
    string fechaDespacho;
    string hora;
    string estado;

public:
    Despacho();
    Despacho(string codigo, SolicitudEnvio* solicitud, Colaborador* colaborador, string destino, string fecha, string hora);
    ~Despacho();

    // Métodos Get
    string getCodigo() const;
    SolicitudEnvio* getSolicitud() const;
    Paquete* getPaquete() const;
    Cliente* getCliente() const;
    Colaborador* getColaboradorResponsable() const;
    CentroDistribucion* getCentroOrigen() const;
    string getDestino() const;
    string getFechaDespacho() const;
    string getHora() const;
    string getEstado() const;

    // Métodos Set
    void setCodigo(string codigo);
    void setSolicitud(SolicitudEnvio* solicitud);
    void setPaquete(Paquete* paquete);
    void setCliente(Cliente* cliente);
    void setColaboradorResponsable(Colaborador* colaborador);
    void setCentroOrigen(CentroDistribucion* centro);
    void setDestino(string destino);
    void setFechaDespacho(string fecha);
    void setHora(string hora);
    void setEstado(string estado);

    // Métodos de funcionalidad
    void finalizarDespacho();
    string toString() const;
};