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
	cLista<cPista>* PistasLibres;

public:
	cTorreControl(cLista<cAvion>* _ListaAviones, cLista<cPista>* _PistasLibres); 
	~cTorreControl();
	void ImprimirAvionesEnVuelo();
	void ImprimirAvionesAterrizando();
	void ImprimirAvionesDespegando();
	void ImprimirPistasLibres();
	float TiempoOcupacionPista();
	void EstadoAvion();
	void Interseccion();
	
};

