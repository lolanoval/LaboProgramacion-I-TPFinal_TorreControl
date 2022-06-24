#include "cTorreControl.h"

using namespace std;

int main()
{
	//Pistas:
	cPista* pista1 = new cPista(100, (float)400);//pista disponible
	cPista* pista2 = new cPista(300, (float)1000); //pista disponible

	//Aviones:
	cAvion* cessna1 = new cCESSNA(40, 10, 50, eModelo::A1);
	cCESSNA* cessna2 = new cCESSNA(100, 20, 70, eModelo::B2);
	cBiplano* biplano1 = new cBiplano(200, 0, 100, 30);

	//Listas:
	cLista<cAvion>* listaAviones = new cLista<cAvion>;
	cLista<cPista>* listaPistas = new cLista<cPista>;
	(*listaAviones) + cessna1;
	(*listaAviones) + cessna2;
	(*listaAviones) + biplano1;
	(*listaPistas) + pista1;
	(*listaPistas) + pista2;



	//Torre de Control:
	cTorreControl* torre = new cTorreControl(listaAviones, listaPistas);

	//cTorreControl* torre = new cTorreControl();
	//torre->AgregarAvion(cessna1);
	//torre->AgregarAvion(cessna2);
	//torre->AgregarAvion(biplano1);
	//torre->AgregarPista(pista1);
	//torre->AgregarPista(pista2);

	torre->ImprimirPistasLibres();

	torre->DespegarAvion(cessna1);
	torre->AterrizarAvion(biplano1);
	torre->ImprimirAvionesAterrizando();

	system("pause");

	//torre->ImprimirAvionesEnVuelo();

	delete torre; //borrando la torre se borran las listas
	delete pista1;
	delete pista2;
	delete cessna1;
	delete cessna2;
	delete biplano1;

	
	system("pause");
}