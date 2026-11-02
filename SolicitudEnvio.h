#pragma once

//ahora con mayusculas para que no me lleve la verga	
#include <string>
#include <iostream>


class Cliente;
class Paquete;
class Colaborador;
class CentroDistribucion;

using namespace std;

class SolicitudEnvio {
private:
    string codigo;
    Cliente* cliente;
    Paquete* paquete;
    Colaborador* colaboradorResponsable;
    CentroDistribucion* centroOrigen;
    string destino;
    string fechaSolicitud;
    double costoEstimado;
    string estado;

public:
    double TARIFA_GENERAL;
    double TARIFA_FRAGIL;
    double TARIFA_TECNOLOGIA;
    double TARIFA_DOCUMENTOS;

    SolicitudEnvio();
    SolicitudEnvio(string codigo, Cliente* cliente, Paquete* paquete, Colaborador* colaborador, CentroDistribucion* centro, string destino, string fecha);
    ~SolicitudEnvio();

    // Métodos Get 
    string getCodigo() const;
    Cliente* getCliente() const;
    Paquete* getPaquete() const;
    Colaborador* getColaboradorResponsable() const;
    CentroDistribucion* getCentroOrigen() const;
    string getDestino() const;
    string getFechaSolicitud() const;
    double getCostoEstimado() const;
    string getEstado() const;

    // Métodos Set
    void setCodigo(string codigo);
    void setCliente(Cliente* cliente);
    void setPaquete(Paquete* paquete);
    void setColaboradorResponsable(Colaborador* colaborador);
    void setCentroOrigen(CentroDistribucion* centro);
    void setDestino(string destino);
    void setFechaSolicitud(string fecha);
    void setEstado(string estado);

    double calcularCosto();
    void cambiarEstado(string nuevoEstado);
    string toString() const;
};