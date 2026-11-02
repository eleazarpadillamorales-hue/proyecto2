#include "matrizBodega.h"
#include <iostream>

using namespace std;

//metodos constructores otra vez 
MatrizBodega::MatrizBodega() {
    filas = 0;
    columnas = 0;
    celdas = nullptr;
}

MatrizBodega::MatrizBodega(int filas, int columnas, string codigoBodega) {
    this->filas = filas;
    this->columnas = columnas;

    // Reserva de memoria para el arreglo de filas
    celdas = new Celda * [filas];
    for (int i = 0; i < filas; i++) {
        celdas[i] = new Celda[columnas];
        for (int j = 0; j < columnas; j++) {
            celdas[i][j] = Celda(codigoBodega, i, j);
        }
    }
}

MatrizBodega::~MatrizBodega() {
    if (celdas != nullptr) {
        for (int i = 0; i < filas; i++) {
            delete[] celdas[i]; 
        }
        delete[] celdas; 
        celdas = nullptr;
    }
}

//metodos get y set 
int MatrizBodega::getFilas() const { return filas; }
int MatrizBodega::getColumnas() const { return columnas; }

int MatrizBodega::getTotalCeldas() const {
    return filas * columnas;
}

int MatrizBodega::getCeldasOcupadas() const {
    int auxiliar = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (celdas[i][j].estaOcupada()) {
                auxiliar++;
            }
        }
    }
    return auxiliar;
}

int MatrizBodega::getCeldasLibres() const {
    int auxiliar = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (!celdas[i][j].estaOcupada()) {
                auxiliar++;
            }
        }
    }
    return auxiliar;
}

double MatrizBodega::getPorcentajeOcupacion() const {
    int total = getTotalCeldas();
    if (total == 0) return 0.0;
    return (double)getCeldasOcupadas() * 100.0 / total;
}

double MatrizBodega::getPorcentajeDisponible() const {
    int total = getTotalCeldas();
    if (total == 0) return 0.0;
    return (double)getCeldasLibres() * 100.0 / total;
}

bool MatrizBodega::asignarPaqueteEnCelda(int fila, int columna, Paquete* p) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) return false;
    if (celdas[fila][columna].estaOcupada()) return false;
    celdas[fila][columna].asignarPaquete(p);
    return true;
}

bool MatrizBodega::liberarCelda(int fila, int columna) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) return false;
    celdas[fila][columna].liberar();
    return true;
}

Celda* MatrizBodega::getCelda(int fila, int columna) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) return nullptr;
    return &celdas[fila][columna];
}

void MatrizBodega::mostrarGrafico() const {
    cout << "\n--- Estado de la Bodega (Matriz) ---" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (celdas[i][j].estaOcupada()) {
                cout << "[ X ]"; 
            }
            else {
                cout << "[ O ]"; 
            }
        }
        cout << endl;
    }
}

//creo ya quedo,crep