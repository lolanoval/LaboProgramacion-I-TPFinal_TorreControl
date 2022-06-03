#pragma once
#include <string>
#include <iostream>
#include "cLista.h"
#include "cAvion.h"
#include "cCESSNA.h"
#include "cBiplano.h"
#include "cPista.h"
using namespace std;
class cTorreControl
{
	cLista<cAvion>* ListaAviones;
	cLista<cAvion>* AvionesEnVuelo;
	cLista<cAvion>* AvionesDespegando;
	cLista<cAvion>* AvionesAterrizando;
	cLista<cPista>* Pistas;

public:
	cTorreControl(cLista<cAvion>* _ListaAviones, cLista<cPista>* _Pistas); 
	~cTorreControl();
	cPista* AsignarPista(cAvion* avion);
	float TiempoOcupacionPista(cAvion* avion); //lo que tarda en aterrizar o despegar 
	void EstadoAvion();
	bool ReportarIncidente();//si pasa del tiempo max de vuelo, se reporta
	void Interseccion();
	void ImprimirDatos();
	string toString();
	cLista<cPista>* subListaPistasLibres();

	void ImprimirAvionesEnVuelo();
	void ImprimirAvionesAterrizando();
	void ImprimirAvionesDespegando();
	void ImprimirPistasLibres();

	void DespegarAvion(cAvion* avion);
	void AterrizarAvion(cAvion* avion);
};

