#include "SistemaTicoPack.h"
#include <iostream>

using namespace std;

// --- Constructor ---
SistemaTicoPack::SistemaTicoPack() {
    // Inicialización del sistema
}

// --- Destructor ---
SistemaTicoPack::~SistemaTicoPack() {
    // Liberamos la memoria de cada CentroDistribucion almacenado en la lista enlazada
    Nodo<CentroDistribucion>* actual = listaCentros.getCabeza();
    while (actual != nullptr) {
        CentroDistribucion* centro = actual->getDato();
        if (centro != nullptr) {
            delete centro;
        }
        actual = actual->getSiguiente();
    }
}

// --- Registrar un nuevo Centro de Distribución 
void SistemaTicoPack::registrarCentro(string codigo, string nombre, string provincia, string direccion, string telefono) {
    CentroDistribucion* nuevoCentro = new CentroDistribucion(codigo, nombre, provincia, direccion, telefono);
    listaCentros.agregar(nuevoCentro);
    cout << "¡Centro de distribucion registrado con exito!" << endl;
}

// Buscar un Centro por Código 
// Criterio auxiliar para la búsqueda en la lista enlazada
bool criterioBuscarCentro(CentroDistribucion* centro, string codigoBuscado) {
    return centro->getCodigo() == codigoBuscado;
}

CentroDistribucion* SistemaTicoPack::buscarCentro(string codigo) {
    return listaCentros.buscar(criterioBuscarCentro, codigo);
}

// Cargar Datos de Prueba
void SistemaTicoPack::cargarDatosPrueba() {
    registrarCentro("C01", "Centro Central San Jose", "San Jose", "Calle Central", "2222-3333");
    registrarCentro("C02", "Centro Heredia", "Heredia", "Costado Norte Parque", "2441-5555");
}

//  Menú Principal
void SistemaTicoPack::ejecutarMenuPrincipal() {
    int opcion = 0;
    do {
        cout << "\n=======================================" << endl;
        cout << "       SISTEMA DE LOGISTICA - TICOPACK    " << endl;
        cout << "=======================================" << endl;
        cout << "1. Registrar Centro de Distribucion" << endl;
        cout << "2. Buscar Centro de Distribucion" << endl;
        cout << "3. Cargar Datos de Prueba" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            string cod, nom, prov, dir, tel;
            cout << "Codigo: "; cin >> cod;
            cin.ignore(); 
            cout << "Nombre: "; getline(cin, nom);
            cout << "Provincia: "; getline(cin, prov);
            cout << "Direccion: "; getline(cin, dir);
            cout << "Telefono: "; cin >> tel;
            registrarCentro(cod, nom, prov, dir, tel);
            break;
        }
        case 2: {
            string codBusqueda;
            cout << "Ingrese el codigo del centro a buscar: ";
            cin >> codBusqueda;
            CentroDistribucion* encontrado = buscarCentro(codBusqueda);
            if (encontrado != nullptr) {
                cout << "¡Encontrado! -> " << encontrado->toString() << endl;
            }
            else {
                cout << "Centro no encontrado en el sistema." << endl;
            }
            break;
        }
        case 3:
            cargarDatosPrueba();
            cout << "¡Datos de prueba cargados correctamente!" << endl;
            break;
        case 4:
            cout << "Saliendo del sistema TicoPack..." << endl;
            break;
        default:
            cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);
}

// Get de la lista 
ListaEnlazada<CentroDistribucion>& SistemaTicoPack::getListaCentros() {
    return listaCentros;
}