#include "cPista.h"
int cPista::numPista = 0;

cPista::cPista(const int _tamanio, const int _distancia) :distancia(_distancia), tamanio(_tamanio)
{
	numPista++;
	this->ocupada = false;
}

cPista::~cPista()
{
}

void cPista::Ocupar()
{
	this->ocupada = true;
}

void cPista::Desocupar()
{
	this->ocupada = false;
}

void cPista::ImprimirDatos()
{
	string estado;
	if (ocupada)
		estado = "Ocupada";
	if (!ocupada)
		estado = "Libre";
	cout << "Datos de la pista numero " << numPista << endl;
	cout << "Ancho: " << tamanio << endl;
	cout << "Largo: " << distancia << endl;
	cout << "Estado: " << estado << endl;
}

bool cPista::getOcupada() 
{
	return ocupada;
}

int cPista::getTamanio() const
{
	return tamanio;
}

int cPista::getDistancia() const
{
	return distancia;
}

