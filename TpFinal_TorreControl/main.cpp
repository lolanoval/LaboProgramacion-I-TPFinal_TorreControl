#include "cTorreControl.h"

using namespace std;

int main()
{
	//Pistas:
	cPista* pista1 = new cPista(100, 400);//pista disponible
	cPista* pista2 = new cPista(300, 1000); //pista disponible

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

	cTorreControl* torre2 = new cTorreControl();
	torre2->AgregarAvion(cessna1);
	torre2->AgregarPista(pista1);
	torre2->AgregarPista(pista2);

	
	torre->ImprimirPistasLibres();
	torre2->ImprimirPistasLibres();
	//torre->DespegarAvion(cessna1);
	
	
	/*if (cessna1->Despegar())
		cout << "Despegue exitoso" << endl;
	else
		cout << "No hay pistas disponibles" << endl;
	if (biplano1->Despegar())
		cout << "Despegue exitoso" << endl;
	else
		cout << "No hay pistas disponibles" << endl;*/

	delete torre;
	delete torre2;

	
	system("pause");
}