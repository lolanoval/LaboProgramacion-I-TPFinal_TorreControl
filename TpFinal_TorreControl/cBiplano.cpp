#include "cBiplano.h"

cBiplano::cBiplano(int _cantcombustible, int _pasajerosmax, int _tamanio, int _aceleracion) :cAvion(_cantcombustible, _pasajerosmax, _tamanio)
{
	this->aceleracion = _aceleracion;
	this->helice = 2;
	this->pasajerosmax = 65;

}

cBiplano::~cBiplano()
{
}

void cBiplano::ImprimirDatos()
{
}

bool cBiplano::Despegar(cPista* pista)
{
	this->aceleracion = 250;
	cout << "Se inclina un angulo de 25°" << endl;
	return true;
}

bool cBiplano::Aterrizar(cPista* pista)
{
	return false;
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
