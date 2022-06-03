#include "cAvion.h"

cAvion::cAvion(int _cantcombustible, int _pasajerosmax, int _tamanio)
{
	this->cantcombustible = _cantcombustible;
	this->pasajerosmax = _pasajerosmax;
	this->tamanio = _tamanio;
	ID = 0;//vamos a hacerlo const para que se genere automaticamente 
	this->pasajeros = 0;
	this->velocidad = 0;
	this->helice = 0;
	this->tiempomaxvuelo = 0;
}

cAvion::~cAvion()
{
}

bool cAvion::Despegar(cPista* pista)
{
	return false;
}

bool cAvion::Aterrizar(cPista* pista)
{
	return false;
}

float cAvion::setTiempoVuelo()
{
	return 0.0f;
}

void cAvion::ImprimirDatos()
{
}

string cAvion::toString()
{
	return string();
}
