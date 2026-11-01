#pragma once
#include "celda.h"
#include "paquete.h"
class celda;
class paquete;


class matrizBodega
{
private:
int filas;
int columnas;
celda * *celdas;
public:
	//metodos constructores otra vez 
	matrizBodega();
  matrizBodega(int, int, string);
 ~matrizBodega();
 //los get
  int getFilas();
  int getColumnas();
  int getTotalCeldas();
  int getCeldasOcupadas();
  int getCeldasLibres();
  //los metodos de pedir cosas
  double getPorcentajeOcupacion();
  double getPorcentajeDisponible();
  //los que asignan antes eran set ahora ?
  bool asignarPaqueteEnCelda(int, int, paquete*);
  bool liberarCelda(int, int);
  celda * getCelda(int, int);
  void mostrarGrafico();


};

