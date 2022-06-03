#pragma once
#include <string>
#include <iostream>
#include "cAvion.h"
using namespace std;
class cCESSNA :
    public cAvion
{
    string modelo;
    int carga, aceleracion; //carga max es siempre 1000kg
public:
    cCESSNA(int _cantcombustible, int _pasajerosmax, int _tamanio, string _modelo); //dependiendo el modelo se le asigna su aceleracion
    ~cCESSNA();
    float tiempoDescarga();
    //ver de ir aumentando la carga a medida que se le agregan cosas (podemos ver de hacerlo durante la inicializacion)
    bool Despegar(cPista* pista); //si pudo despegar no
    bool Aterrizar(cPista* pista); // si pudo aterrizar o no
    void ImprimirDatos();
    string toString();
    float Distancia();
};
