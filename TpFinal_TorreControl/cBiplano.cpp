#include "cBiplano.h"

cBiplano::cBiplano(int _cantcombustible, int _pasajerosmax, int _tamanio, int _aceleracion) :cAvion(_cantcombustible, _pasajerosmax, _tamanio)
{
	this->aceleracion = _aceleracion;
	this->helice = 2;
}

cBiplano::~cBiplano()
{
}

void cBiplano::voltereta()
{
}

void cBiplano::ImprimirDatos()
{
}

string cBiplano::toString()
{
	return string();
}

float cBiplano::Distancia()
{
	float tiempo = (float)velocidad / aceleracion;
	float distancia = 1 / 2 * aceleracion * (tiempo * tiempo);
	return distancia;
}
