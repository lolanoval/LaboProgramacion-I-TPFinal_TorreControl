#pragma once
#include "cAvion.h"
using namespace std;
#define cargamax 1000
class cCESSNA :
    public cAvion
{
private:
    eModelo modelo;
    int carga, aceleracion; //carga max es siempre 1000kg
public:
    cCESSNA(int _cantcombustible, int _pasajerosmax, int _tamanio, eModelo _modelo); //dependiendo el modelo se le asigna su aceleracion
    ~cCESSNA();
    float tiempoDescarga();
    void setDatos();

    void Despegar(cPista* pista); //si pudo despegar no
    void Aterrizar(cPista* pista); // si pudo aterrizar o no
    void ImprimirDatos();
    string toString();
    float Distancia();
    float TiempoUsoPista();
    void operator+(int _carga); //sobrecarga del operator + para sumar carga

};
