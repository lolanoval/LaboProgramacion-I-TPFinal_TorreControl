#pragma once
#include <string>
#include <iostream>
#include "cPista.h"
using namespace std;
class cAvion
{
public:
	//string modelo; solo es relevante para CESSNA
	int ID, tiempomaxvuelo, cantcombustible, pasajeros, pasajerosmax, velocidad, helice, tamanio;
	
	//ver de agregar aceleracion al igual que velocidad 
	//tanto tamaño como distancia condicionan la pista a asignar
	//ver de hacer ID const y que se cree automáticamente
//public:
	cAvion(int _cantcombustible, int _pasajerosmax, int _tamanio);
	virtual ~cAvion();
	virtual bool Despegar(cPista* pista); //si pudo despegar no
	virtual bool Aterrizar(cPista* pista); // si pudo aterrizar o no
	float setTiempoVuelo();
	virtual float Distancia() = 0;
	void ImprimirDatos();
	string toString();
};

