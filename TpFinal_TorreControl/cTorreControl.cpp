#include "cTorreControl.h"

cTorreControl::cTorreControl(cLista<cAvion>* _ListaAviones, cLista<cPista>* _Pistas)
{
	this->ListaAviones = new cLista<cAvion>;
	//this->AvionesEnVuelo = new cLista<cAvion>;
	//this->AvionesDespegando = new cLista<cAvion>;
	//this->AvionesAterrizando = new cLista<cAvion>;
	this->Pistas = new cLista<cPista>;
}

cTorreControl::~cTorreControl()
{
	delete ListaAviones;
	//delete AvionesEnVuelo;
	//delete AvionesDespegando;
	//delete AvionesAterrizando;
	delete Pistas;
}

cPista* cTorreControl::AsignarPista(cAvion* avion) //try catch
{
	if (avion == NULL)
		throw new exception("Puntero nulo");
	int pos = ListaAviones->getItemPos(avion);
	if (pos == -1);
	{
		throw new exception("El avion no se encuentra en el sistema");
	}
	if (pos != -1)
	{
		int tamanio = avion->tamanio;
		float distancia = avion->Distancia();
		cLista<cPista>* subLista = subListaPistasLibres();

		for (int i = 0; i < subLista->getCA(); i++)
		{
			if ((*subLista)[i]->getDistancia() <= distancia && (*subLista)[i]->getTamanio() <= tamanio)
			{
				cPista* pistaLibre = (*subLista)[i]; //ver si xq se elimina la subLista no se elimina el puntero; en ese caso hay que crear un new 
				delete subLista;
				return pistaLibre;
			}
		}
		delete subLista;
		throw new exception("No hay pistas libres");
	}
}

void cTorreControl::ImprimirAvionesEnVuelo()
{
	for (int i = 0; i < ListaAviones->getCA(); i++)
	{
		if (EstadoToString((*ListaAviones)[i]->estado) == "Volando")
			(*ListaAviones)[i]->ImprimirDatos();
	}
}

void cTorreControl::ImprimirAvionesAterrizando()
{
	for (int i = 0; i < ListaAviones->getCA(); i++)
	{
		if (EstadoToString((*ListaAviones)[i]->estado) == "Aterrizando")
			(*ListaAviones)[i]->ImprimirDatos();
	}
}

void cTorreControl::ImprimirAvionesDespegando()
{
	for (int i = 0; i < ListaAviones->getCA(); i++)
	{
		if (EstadoToString((*ListaAviones)[i]->estado) == "Despegando")
			(*ListaAviones)[i]->ImprimirDatos();
	}
}

void cTorreControl::ImprimirPistasLibres()
{
	for (int i = 0; i < Pistas->getCA(); i++)
	{
		if(!(*Pistas)[i]->getOcupada())
		(*Pistas)[i]->ImprimirDatos();
	}
}

void cTorreControl::DespegarAvion(cAvion* avion)
{
	try
	{
		AsignarPista(avion);
	}
	catch (exception* e)//chequear esto si era asi
	{
		cout << string(e->what()) << endl;
		delete e;
	}
	avion->Despegar(AsignarPista(avion));

	/*int pos = ListaAviones->getItemPos(avion);
	if (pos != -1)
	{
		cPista* pista = AsignarPista(avion);
		if (pista != NULL)
		avion->Despegar(pista);
	}*/
}

void cTorreControl::AterrizarAvion(cAvion* avion)
{
	try
	{
		AsignarPista(avion);
	}
	catch (exception* e)//chequear esto si era asi
	{
		cout << e->what() << endl;
		delete e;
	}
	avion->Aterrizar(AsignarPista(avion)); 
}

float cTorreControl::TiempoOcupacionPista(cAvion* avion)
{
	return NULL;
}

void cTorreControl::EstadoAvion()
{

}

//void cTorreControl::Interseccion()
//{
//}

cLista<cPista>* cTorreControl::subListaPistasLibres()
{
	cLista<cPista>* subLista = new cLista<cPista>;
	for (int i = 0; i < Pistas->getCA(); i++)
	{
		if ((*Pistas)[i]->getOcupada() == false)
		{
			(*subLista) + (*Pistas)[i];
		}
	}
	return subLista;
}

