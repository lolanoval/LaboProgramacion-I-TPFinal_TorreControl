#pragma once
#include <string>
#include <iostream>
#include "cPista.h"
#include "cFecha.h"
#include "Enum.h"
using namespace std;
class cAvion
{
public:
	friend class cTorreControl; //para que acceda a las fechas y reporte accidente en caso de ser necesario
	int cantcombustible, pasajeros, pasajerosmax, velocidad, helice, tamanio;
	static int ID;
	float tiempomaxvuelo;
	eEstado estado;
	cPista* pistaAsiganda;
  
	//ver de agregar aceleracion al igual que velocidad 
	//tanto tamaño como distancia condicionan la pista a asignar
	//ver de hacer ID const y que se cree automáticamente
	cAvion(int _cantcombustible, int _pasajerosmax, int _tamanio);
	virtual ~cAvion();
	virtual bool Despegar(cPista* pista); //si pudo despegar no
	virtual bool Aterrizar(cPista* pista); // si pudo aterrizar o no
	void setTiempoVuelo(); 
	virtual float Distancia() = 0;
	void ImprimirDatos();
	string toString();
	void operator++(); //sobrecarga del operador ++ para sumar pasajeros
};
