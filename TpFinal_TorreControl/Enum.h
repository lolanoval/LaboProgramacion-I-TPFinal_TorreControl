#pragma once
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

enum class eEstado { Volando, Despegando, Aterrizando, enEspera};

string EstadoToString(eEstado estado);
