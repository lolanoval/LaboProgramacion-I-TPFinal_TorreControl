#include "cPista.h"
int cPista::numPista = 0;

cPista::cPista(const int _tamanio, float _distancia) :tamanio(_tamanio)
{
	numPista++;
	this->distancia = _distancia;
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
	/*string estado;
	if (ocupada)
		estado = "Ocupada";
	if (!ocupada)
		estado = "Libre";*/

	cout << "Datos de la pista numero " << to_string(numPista) << endl;
	cout << "Ancho: " << getTamanio() << endl;
	//cout << "Largo: " << to_string(distancia) << endl;
	//cout << "Estado: " << estado << endl;
}

bool cPista::getOcupada() 
{
	return ocupada;
}

int cPista::getTamanio() const
{
	return tamanio;
}

float cPista::getDistancia() 
{
	return this->distancia;
}

