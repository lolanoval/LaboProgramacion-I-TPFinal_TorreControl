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
	fechaDespegue = new cFecha();
	setTiempoVuelo();
}

cAvion::~cAvion()
{
	delete fechaDespegue;//preguntar por el tema del delete del main en el caso que sea necesario
}

bool cAvion::Despegar(cPista* pista) //preguntar si al hacer virtual corren ambas cosas para los dos ademas de lo q ya hace
//distinto cada uno
{
	fechaDespegue->SetHoy();
	//seguir 
}

bool cAvion::Aterrizar(cPista* pista)
{
	fechaDespegue->reSet();
}


void cAvion::setTiempoVuelo()
{
	tiempomaxvuelo = (float)cantcombustible / 28.5;
}

void cAvion::ImprimirDatos()
{
}

string cAvion::toString()
{
	return string();
}
