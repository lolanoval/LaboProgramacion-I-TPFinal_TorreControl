#include "cCESSNA.h"

cCESSNA::cCESSNA(int _cantcombustible, int _pasajerosmax, int _tamanio, eModelo _modelo) : cAvion(_cantcombustible, _pasajerosmax, _tamanio)
{
	this->modelo = _modelo;
	this->helice = 1;
	this->pasajerosmax = 0;
	this->aceleracion = 0;
	this->carga = 0;
	setDatos();
}

cCESSNA::~cCESSNA()
{
}

float cCESSNA::tiempoDescarga()
{
	return 0.0f;
}

/// Segun el modelo de cessna, se le asigna una aceleracion
void cCESSNA::setDatos()
{
	if (ModeloToString(modelo) == "A1") {
		aceleracion = 20;
		pasajerosmax = 13;
		carga = 90;
	}
	else if (ModeloToString(modelo) == "B2") {
		aceleracion = 50;
		pasajerosmax = 12;
		carga = 150;
	}
}

void cCESSNA::Despegar(cPista* pista)
{
	time_t current_time = time(0);
	while (time(0) - current_time < (float)5)
	{
		estado = eEstado::Despegando;
		pistaAsiganda = pista;
		pista->Ocupar();
		this->velocidad = 200;
	}
	cout << "Bajando alerones del avion " << to_string(ID) << endl;
	cout << "Activando control automatico del avion " << to_string(ID) << endl;
	estado = eEstado::Volando;
	pista->Desocupar();
	pistaAsiganda = NULL;
}

void cCESSNA::Aterrizar(cPista* pista)
{
	//tiempo default de aterrizaje 5 segundos
	time_t current_time = time(0);
	while (time(0) - current_time < (float)5)
	{
		estado = eEstado::Aterrizando;
		pistaAsiganda = pista;
		pista->Ocupar();
	}
	cout << "Subiendo alerones del avion " << to_string(ID) << endl;
	cout << "Desactivando control automatico del avion " << to_string(ID) << endl;
	estado = eEstado::enEspera;
	this->velocidad = 0;
	pistaAsiganda->Desocupar();
	pistaAsiganda = NULL;
}

void cCESSNA::ImprimirDatos()
{
}

string cCESSNA::toString()
{
	return string();
}

float cCESSNA::Distancia() 
{
	float _acel = (float)aceleracion;
	float tiempo = (float)velocidad / _acel;
	float distancia = 1 / 2 * _acel * (tiempo * tiempo);
	return distancia;
}

float cCESSNA::TiempoUsoPista()
{
	float tiempo = (float)velocidad / aceleracion;
	return tiempo;
}

void cCESSNA::operator+(int _carga)
{
	if ((_carga + carga) <= cargamax)
		carga = carga + _carga;
	else
		cout << "La carga que desea agregar supera la carga maxima permitida" << endl;
}
