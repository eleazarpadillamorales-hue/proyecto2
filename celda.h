#pragma once
#include <iostream>
#include <string>
#include "Paquete.h"

using namespace std;

class Celda {
private:
    string codigoBodega;
    int fila;
    int columna;
    bool ocupada;
    Paquete* paquete;

public:


    Celda();
    Celda(string codigoBodega, int fila, int columna); 
    Celda(string codigoBodega, int fila, int columna, bool ocupada, Paquete* paquete);
    ~Celda();

    bool estaOcupada() const;
    void asignarPaquete(Paquete* paquete);
    void liberar();

    string getCodigoBodega() const;
    int getFila() const;
    int getColumna() const;
    Paquete* getPaquete(); 
    string getUbicacion() const;
};