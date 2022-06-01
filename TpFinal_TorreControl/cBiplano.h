#pragma once
#include <string>
#include <iostream>
#include "cAvion.h"
using namespace std;
class cBiplano :
    public cAvion
{
    int aceleracion;

public:
    cBiplano(int _aceleracion);
    ~cBiplano();
    void voltereta();
};

