#pragma once
#include <string>
#include <iostream>
using namespace std;
class cPista
{
	int tamanio;
	int distancia;
	bool ocupada;
public:
	cPista(int _tamanio, int _distancia, bool _ocupada);
	~cPista();
	void AvionDespegando();
	void AvionAterrizando();
	void ImprimirDatos();
	string toString();
	bool getOcupada() { return ocupada; };
	int getTamanio() { return tamanio; };
	int getDistancia() { return distancia; };

};

