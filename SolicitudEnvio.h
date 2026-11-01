#pragma once

//ahora con mayusculas para que no me lleve la verga	
#include <string>
#include <iostream>

// Declaraciones adelantadas para evitar dependencias circulares
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


    string getCodigo();
    Cliente* getCliente();
    Paquete* getPaquete();
    Colaborador* getColaboradorResponsable();
    CentroDistribucion* getCentroOrigen();
    string getDestino();
    string getFechaSolicitud();
    double getCostoEstimado();
    string getEstado();

 


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
    string toString();
};
