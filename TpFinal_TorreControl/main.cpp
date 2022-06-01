#include "cTorreControl.h"

using namespace std;

int main()
{
	//Pistas:
	cPista* pista1 = new cPista(100, 400, false);//pista disponible
	cPista* pista2 = new cPista(300, 1000, false); //pista disponible

	//Aviones:
	cCESSNA* cessna1 = new cCESSNA("A1"); //falta pasarle los atributos del constructor
	cCESSNA* cessna2 = new cCESSNA("B2"); //idem
	cBiplano* biplano1 = new cBiplano(30); //idem

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

	//Simulación despegue: Vamos a utilizar try catch más adelante para salvar las diferentes excepciones por las 
	//que puede no despegar (como supera peso max o no hay pistas que coincidan con los parametros del avion, etc
	if (cessna1->Despegar())
		cout << "Despegue exitoso" << endl;
	else
		cout << "No hay pistas disponibles" << endl;
	if (biplano1->Despegar())
		cout << "Despegue exitoso" << endl;
	else
		cout << "No hay pistas disponibles" << endl;

	//Simulacion aterrizaje: same despegue
	if (cessna1->Aterrizar()) //if(algo==false) es mejor poner if(!algo) pq lo convierte en true y la unica forma de que entre
		//un if a algo siguiente es que sea true lo que esta dentro
		cout << "Aterrizaje exitoso" << endl;
	else
		cout << "No hay pistas disponibles" << endl;

	
	system("pause");
}