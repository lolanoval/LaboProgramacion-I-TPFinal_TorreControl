#pragma once
#include <string>
#include <iostream>
using namespace std;
class cPista
{
	static int numPista; //uso de static
	const int tamanio; //uso de const
	float distancia; //uso de const
	bool ocupada;
public:
	cPista(const int _tamanio, float _distancia);
	~cPista();
	void Ocupar();
	void Desocupar();
	void ImprimirDatos();
	bool getOcupada();
	int getTamanio()const;
	float getDistancia();

};

