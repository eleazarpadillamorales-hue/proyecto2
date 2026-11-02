#pragma once
#include <iostream>
#include <string>
#include "MatrizBodega.h" 

using namespace std;

class Bodega {
private:
    string codigo;
    string nombre;
    int tipoCodigo;
    string tipoNombre;
    MatrizBodega* matriz;

public:

    Bodega();
    Bodega(string codigo, string nombre, int tipoCodigo, int fila, int columna);
    ~Bodega();

    string getCodigo() const;
    string getNombre() const;
    int getTipoCodigo() const;
    string getTipoNombre() const;
    MatrizBodega* getMatriz(); 

    // Métodos Set
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setTipoCodigo(int tipoCodigo);
    void setTipoNombre(string tipoNombre);
};