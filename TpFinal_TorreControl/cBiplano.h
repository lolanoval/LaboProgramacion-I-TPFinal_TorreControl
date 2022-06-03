#pragma once
#include <string>
#include <iostream>
#include "cAvion.h"
using namespace std;
class cBiplano :
    public cAvion
{
private:
    int aceleracion;

public:
    cBiplano(int _cantcombustible, int _pasajerosmax, int _tamanio, int _aceleracion);
    ~cBiplano();
    void ImprimirDatos();
    bool Despegar(cPista* pista); //si pudo despegar no
    bool Aterrizar(cPista* pista); // si pudo aterrizar o no
    string toString();
    float Distancia();
};

