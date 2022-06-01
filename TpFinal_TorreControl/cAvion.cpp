#include "cAvion.h"

cAvion::cAvion(int _cantcombustible, int _pasajerosmax, int _tamanio)
{
	this->cantcombustible = _cantcombustible;
	this->pasajerosmax = _pasajerosmax;
	this->tamanio = _tamanio;
}

cAvion::~cAvion()
{
}

bool cAvion::Despegar()
{
}

bool cAvion::Aterrizar()
{
}

float cAvion::setTiempoVuelo()
{
	return 0.0f;
}

float cAvion::setDistancia()
{
	return 0.0f;
}
