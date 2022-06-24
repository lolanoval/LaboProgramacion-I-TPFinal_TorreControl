#pragma once
#include "cLista.h"
#include "cPista.h"

using namespace std;

class ListaPistas : public cLista<cPista> {

public:
	ListaPistas() {}
	~ListaPistas() {}

	void Listar()
	{
		for (int i = 0; i < ca; i++)
		{
			lista[i]->ImprimirDatos();
		}
	}

};