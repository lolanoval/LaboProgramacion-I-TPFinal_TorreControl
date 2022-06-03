#include "cTorreControl.h"

cTorreControl::cTorreControl(cLista<cAvion>* _ListaAviones, cLista<cPista>* _Pistas)
{
	this->ListaAviones = new cLista<cAvion>;
	this->AvionesEnVuelo = new cLista<cAvion>;
	this->AvionesDespegando = new cLista<cAvion>;
	this->AvionesAterrizando = new cLista<cAvion>;
	this->Pistas = new cLista<cPista>;
}

cTorreControl::~cTorreControl()
{
	delete ListaAviones;
	delete AvionesEnVuelo;
	delete AvionesDespegando;
	delete AvionesAterrizando;
	delete Pistas;
}

cPista* cTorreControl::AsignarPista(cAvion* avion)
{
	int tamanio = avion->tamanio;
	float distancia = avion->Distancia();
	cLista<cPista>* subLista = subListaPistasLibres();

	for (int i = 0; i < subLista->getCA(); i++)
	{
		if ((*subLista)[i]->getDistancia() <= distancia && (*subLista)[i]->getTamanio() <= tamanio)
		{
			cPista* pistaLibre = (*subLista)[i];
			delete subLista;
			return pistaLibre;
		}
	}
	delete subLista;
	return NULL;
}

void cTorreControl::ImprimirAvionesEnVuelo()
{

}

void cTorreControl::ImprimirAvionesAterrizando()
{
}

void cTorreControl::ImprimirAvionesDespegando()
{
}

void cTorreControl::ImprimirPistasLibres()
{
}

void cTorreControl::DespegarAvion(cAvion* avion)
{
	if (avion != NULL)
	{
		int pos = ListaAviones->getItemPos(avion);
		if (pos != -1)
		{
			cPista* pista = AsignarPista(avion);
			if (pista != NULL)
				avion->Despegar(pista);
		}
	}
}

float cTorreControl::TiempoOcupacionPista(cAvion* avion)
{
	return nullptr;
}

void cTorreControl::EstadoAvion()
{
}

void cTorreControl::Interseccion()
{
}

void cTorreControl::ImprimirDatos()
{
}

string cTorreControl::toString()
{
	return string();
}

cLista<cPista>* cTorreControl::subListaPistasLibres()
{
	cLista<cPista>* subLista = new cLista<cPista>;
	for (int i = 0; i < Pistas->getCA(); i++)
	{
		if ((*Pistas)[i]->getOcupada() == false)
		{
			(*subLista) + (*Pistas)[i];
		}
	}
	return subLista;
}

