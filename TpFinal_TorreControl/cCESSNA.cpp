#include "cCESSNA.h"

cCESSNA::cCESSNA(int _cantcombustible, int _pasajerosmax, int _tamanio,string _modelo): cAvion(_cantcombustible, _pasajerosmax, _tamanio)
{
	this->modelo = _modelo;
	this->helice = 1;
}

cCESSNA::~cCESSNA()
{
}

float cCESSNA::tiempoDescarga()
{
	return 0.0f;
}

bool cCESSNA::Despegar(cPista* pista)
{
	this->velocidad = 200;
	cout << "Bajando alerones" << endl;
	cout << "Activar control automatico" << endl;


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
