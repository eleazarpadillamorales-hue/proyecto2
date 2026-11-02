#pragma once
#include <string>
#include <iostream>
#include "ListaEnlazada2.h"
#include "CentroDistribucion.h"

using namespace std;

class SistemaTicoPack {
private:
    ListaEnlazada<CentroDistribucion> listaCentros;

public:
    SistemaTicoPack();
    ~SistemaTicoPack(); // Ahora liberará correctamente la memoria dinámica de los centros

    void registrarCentro(string codigo, string nombre, string provincia, string direccion, string telefono);
    CentroDistribucion* buscarCentro(string codigo);
    void cargarDatosPrueba();
    void ejecutarMenuPrincipal();

    ListaEnlazada<CentroDistribucion>& getListaCentros();
};