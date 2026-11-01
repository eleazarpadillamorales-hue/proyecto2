#pragma once
#include <string>
#include <iostream>

class Cliente;
class Colaborador;
class CentroDistribucion;
class Bodega;
class ListaBitacora; 
//mami metame en arroz como que ocupo 4 clases ,puta la casa estaba llena y pario la abuela
using namespace std;

class Paquete {
private:
    string codigo;
    string descripcion;
    double peso;
    string categoria;
    string estadoActual;


    Cliente* clientePropietario;
    CentroDistribucion* centroOrigen;
    Bodega* bodegaAsignada;
    int filaAsignada;
    int columnaAsignada;
    ListaBitacora* bitacora;

public:
    // Constructores y Destructor
    Paquete();
    Paquete(string codigo, string descripcion, double peso, string categoria, Cliente* cliente, CentroDistribucion* centro);
    ~Paquete();

    // Métodos Get
    string getCodigo();
    string getDescripcion() ;
    double getPeso() ;
    string getCategoria() ;
    string getEstadoActual() ;
    Cliente* getClientePropietario() ;
    CentroDistribucion* getCentro() ;
    Bodega* getBodegaAsignada() ;
    int getFilaAsignada() ;
    int getColumnaAsignada() ;
    ListaBitacora* getBitacora();

    // Métodos Set
    void setCodigo(string codigo);
    void setDescripcion(string descripcion);
    void setPeso(double peso);
    void setCategoria(string categoria);
    void setEstadoActual(string estado);
    void setClientePropietario(Cliente* cliente);
    void setCentro(CentroDistribucion* centro);

    // Métodos de Funcionalidad
    bool cambiarEstado(string nuevoEstado, Colaborador* responsable, string fecha);
    void asignarUbicacion(Bodega* bodega, int fila, int columna);
    void liberarUbicacion();
    string toString() ;
};