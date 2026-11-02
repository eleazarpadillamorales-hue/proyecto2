#include "Bodega.h"
#include "matrizBodega.h"

// Constructor por defecto
Bodega::Bodega() {
    codigo = "";
    nombre = "";
    tipoCodigo = 0;
    tipoNombre = "";
    matriz = nullptr;
}

// Constructor con parámetros
Bodega::Bodega(string codigo, string nombre, int tipoCodigo, int fila, int columna) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->tipoCodigo = tipoCodigo;
    
    if (tipoCodigo == 1) {
        this->tipoNombre = "General";
    } else {
        this->tipoNombre = "Especializada";
    }
    
    this->matriz = new MatrizBodega(fila, columna, codigo);
}

// Destructor
Bodega::~Bodega() {
    if (matriz != nullptr) {
        delete matriz; 
        matriz = nullptr;
    }
}

string Bodega::getCodigo() const { return codigo; }
string Bodega::getNombre() const { return nombre; }
int Bodega::getTipoCodigo() const { return tipoCodigo; }
string Bodega::getTipoNombre() const { return tipoNombre; }
MatrizBodega* Bodega::getMatriz() { return matriz; }

// Métodos set
void Bodega::setCodigo(string codigo) { this->codigo = codigo; }
void Bodega::setNombre(string nombre) { this->nombre = nombre; }
void Bodega::setTipoCodigo(int tipoCodigo) { 
    this->tipoCodigo = tipoCodigo;
    if (tipoCodigo == 1) {
        this->tipoNombre = "General";
    } else {
        this->tipoNombre = "Especializada";
    }
}
void Bodega::setTipoNombre(string tipoNombre) { this->tipoNombre = tipoNombre; }