#pragma once
#include "Celda.h"
#include "Paquete.h"

class MatrizBodega 
{
private:
    int filas;
    int columnas;
    Celda** celdas; 

public:
    //metodos constructores otra vez 
    MatrizBodega();
    MatrizBodega(int filas, int columnas, string codigoBodega);
    ~MatrizBodega();

    //los get 
    int getFilas() const;
    int getColumnas() const;
    int getTotalCeldas() const;
    int getCeldasOcupadas() const;
    int getCeldasLibres() const;

    //los metodos de pedir cosas (
    double getPorcentajeOcupacion() const;
    double getPorcentajeDisponible() const;

    //los que asignan 
    bool asignarPaqueteEnCelda(int fila, int columna, Paquete* p);
    bool liberarCelda(int fila, int columna);
    Celda* getCelda(int fila, int columna);
    void mostrarGrafico() const;
};