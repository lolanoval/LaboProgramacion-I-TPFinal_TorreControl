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
};

