#include "cCESSNA.h"

cCESSNA::cCESSNA(int _cantcombustible, int _pasajerosmax, int _tamanio,string _modelo): cAvion(_cantcombustible, _pasajerosmax, _tamanio)
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
/// <summary>
/// Segun el modelo de cessna, se le asigna una aceleracion
/// </summary>
void cCESSNA::setDatos()
{
	if (modelo == "A1") {
		aceleracion = 20;
		pasajerosmax = 13;
		carga = 90;
	}
	else if (modelo == "B2") {
		aceleracion = 50;
		pasajerosmax = 12;
		carga = 150;
	}
}

bool cCESSNA::Despegar(cPista* pista)
{
	this->velocidad = 200;
	cout << "Bajando alerones" << endl;
	cout << "Activar control automatico" << endl;
	if(carga<=cargamax && pasajeros<pasajerosmax)
	return true;
}

bool cCESSNA::Aterrizar(cPista* pista)
{
	return false;
}

void cCESSNA::ImprimirDatos()
{
}

string cCESSNA::toString()
{
	return string();
}

float cCESSNA::Distancia() //como ambos metodos son iguales, ver de sacar que sea virtual 
{
	float tiempo = (float)velocidad / aceleracion;
	float distancia = 1 / 2 * aceleracion * (tiempo * tiempo);
	return distancia;
}
