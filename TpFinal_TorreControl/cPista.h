#pragma once
#include <string>
#include <iostream>
using namespace std;
class cPista
{
	static int numPista; //uso de static
	const int tamanio; //uso de const
	const int distancia; //uso de const
	bool ocupada;
public:
	cPista(const int _tamanio, const int _distancia);
	~cPista();
	void Ocupar();
	void Desocupar();
	void ImprimirDatos();
	bool getOcupada();
	int getTamanio()const;
	int getDistancia()const;

};

