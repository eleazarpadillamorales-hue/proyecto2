#include "celda.h"
#include "paquete.h"
#include <string>

using namespace std;
celda::celda() {


	 CodigoBodega=" ";
	 Fila = 0;
	 Columna = 0;
	 Ocupada = false;
	Paquete = nullptr;

}
	celda::celda(string CodigoBodega, int  Fila, int Columna, bool ocupada, paquete * Paquete) { 

		this->CodigoBodega = CodigoBodega;
		this->Fila = Fila;
		this->Columna = Columna;
		this->Ocupada = Ocupada;
		this->Paquete = Paquete		; }
	celda::~celda() { ; }
	//me cago en la puta cuantos errores mas voy a cometer hasta que chambee
	bool celda::estaOcupada() { return Ocupada; }
	void celda::asignarPaquete(paquete * paquete) { Ocupada=true, Paquete=paquete; }
	void celda::liberar() { Ocupada=false,Paquete=nullptr; }
	//metodos get
	string celda::getCodigoBodega() { return CodigoBodega; }
	int celda::getFila() { return Fila; }
	int celda::getColumna() { return Columna; }
	paquete* celda::getPaquete() { return Paquete; }
	string celda::getUbicacion() {
		string retorno ="";
			retorno== ("Bodega con codigo: "+ getCodigoBodega() + "en la fila : "+ to_string(getFila()) +"  en la columna : " + to_string(getColumna()))S;

		return retorno;
	}

