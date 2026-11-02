#include "Celda.h"
#include <string>

using namespace std;

// Constructor por defecto
Celda::Celda() {
    codigoBodega = "";
    fila = -1;
    columna = -1;
    ocupada = false;
    paquete = nullptr;
}

Celda::Celda(string codigoBodega, int fila, int columna) {
    this->codigoBodega = codigoBodega;
    this->fila = fila;
    this->columna = columna;
    this->ocupada = false;
    this->paquete = nullptr;
}

// Constructor con todos los parámetros
Celda::Celda(string codigoBodega, int fila, int columna, bool ocupada, Paquete* paquete) {
    this->codigoBodega = codigoBodega;
    this->fila = fila;
    this->columna = columna;
    this->ocupada = ocupada;
    this->paquete = paquete;
}

Celda::~Celda() {

}

bool Celda::estaOcupada() const {
    return ocupada;
}

void Celda::asignarPaquete(Paquete* paquete) {
    this->ocupada = true;
    this->paquete = paquete;
}

void Celda::liberar() {
    this->ocupada = false;
    this->paquete = nullptr;
}

string Celda::getCodigoBodega() const { return codigoBodega; }
int Celda::getFila() const { return fila; }
int Celda::getColumna() const { return columna; }
Paquete* Celda::getPaquete() { return paquete; }

string Celda::getUbicacion() const {
    string retorno = "Bodega con codigo: " + codigoBodega + " en la fila: " + to_string(fila) + " en la columna: " + to_string(columna);
    return retorno;
}