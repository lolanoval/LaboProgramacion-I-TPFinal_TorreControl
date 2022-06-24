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

void cBiplano::Despegar(cPista* pista)
{
	time_t current_time = time(0);
	while (time(0) - current_time < (float)5)
	{
		estado = eEstado::Despegando;
		pistaAsiganda = pista;
		pista->Ocupar();
	}
	this->aceleracion = 250;
	cout << "Se inclina un angulo de 25° del avion " << to_string(ID) << endl;
	estado = eEstado::Volando;
	pista->Desocupar();
	pistaAsiganda = NULL;
}

void cBiplano::Aterrizar(cPista* pista)
{
	//tiempo default de aterrizaje 5 segundos
	time_t current_time = time(0);
	while (time(0) - current_time < (float)5)
	{
		estado = eEstado::Aterrizando;
		pistaAsiganda = pista;
		pista->Ocupar();
	}
	cout << "Volviendo a angulo default del avion " << to_string(ID) << endl;
	estado = eEstado::enEspera;
	this->aceleracion = 0;
	pistaAsiganda->Desocupar();
	pistaAsiganda = NULL;
}

float cBiplano::TiempoUsoPista()
{
	float tiempo = (float)velocidad / aceleracion;
	return tiempo;
}

string cBiplano::toString()
{
	return string();
}

float cBiplano::Distancia()
{
	float tiempo = (float)velocidad / aceleracion;
	float distancia = (1 / 2) * aceleracion * (tiempo * tiempo);
	return distancia;
}
