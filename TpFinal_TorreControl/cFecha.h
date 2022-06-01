#pragma once
#include <string>
#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

class cFecha
{
private:
#pragma region Atributos

	tm fecha;

#pragma endregion	

#pragma region Constructor y Destructor

public:
	//Constructor por default, inicia en la fecha de hoy
	cFecha();
	//Constructor inicia en dia, mes, año
	cFecha(int d, int m, int a);
	cFecha(int dia, int mes, int anio, int hora, int minutos);
	~cFecha();
	void ImprimirFecha();
	string To_string();
#pragma endregion

#pragma region Metodos

	//Calcula el numero de días entre dos fechas
	static int HorasEntreFechas(cFecha* inicio, cFecha* fin);


	//Cambia la fecha a la fecha actual
	void SetHoy();

	//Verifica que la fecha esté completa
	bool FechaCompleta();

	////Devuelve la fecha actual en forma de string
	//string To_string();

	//// Imprime fecha
	//void ImprimirFecha();

	//// Determina si las dos fechas tiene el mismo dia
	//static bool MismoDia(cFecha* fecha1, cFecha* fecha2);

#pragma endregion

#pragma region Sobrecarga de Operadores

	bool operator<(cFecha& otra) {
		time_t aux_this = mktime(&(this->fecha));
		time_t aux_otra = mktime(&(otra.fecha));
		return aux_this < aux_otra;
	}

	bool operator>(cFecha& otra) { //faltan if mktime =! a -1 pq cuando devuelve error iguala a -1
		time_t aux_this = mktime(&(this->fecha));
		time_t aux_otra = mktime(&(otra.fecha));
		return aux_this > aux_otra;
	}

	bool operator==(cFecha& otra) {
		time_t aux_this = mktime(&(this->fecha));
		time_t aux_otra = mktime(&(otra.fecha));
		return aux_this == aux_otra;
	}

	bool operator!=(cFecha& otra) {
		return !(*this == otra);
	}

	int getAnio() { return fecha.tm_year; };
	int getMes() { return fecha.tm_mon; };
	int getDia() { return fecha.tm_wday; };

#pragma endregion
	//int Edad(int dia, int mes, int anio)
	//{
	//	cFecha* fechanac = new cFecha(dia, mes, anio);
	//	if (fechanac->FechaCompleta() == true)
	//	{
	//		struct tm date = { 0 };
	//		date.tm_year = anio - 1900;
	//		date.tm_mon = mes - 1;
	//		date.tm_mday = dia;
	//		time_t normal = mktime(&date);
	//		time_t current;
	//		time(&current);
	//		int edad = (difftime(current, normal) + 86400L / 2) / 86400L;
	//		return edad / 365;
	//	}
	//	else return -1;

	//}
	//hola
};