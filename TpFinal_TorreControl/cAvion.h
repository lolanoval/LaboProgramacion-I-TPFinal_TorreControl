#pragma once
#include <string>
#include <iostream>
using namespace std;
class cAvion
{
	//string modelo; solo es relevante para CESSNA
	int ID, tiempomaxvuelo, cantcombustible, pasajeros, pasajerosmax, velocidad, helice, tamanio, distancia;
	//ver de agregar aceleracion al igual que velocidad 
	//tanto tamaño como distancia condicionan la pista a asignar
	//ver de hacer ID const y que se cree automáticamente
public:
	cAvion(int _cantcombustible, int _pasajerosmax, int _tamanio);
	virtual ~cAvion();
	bool Despegar(); //si pudo despegar no
	bool Aterrizar(); // si pudo aterrizar o no
	float setTiempoVuelo();
	float setDistancia();
};

