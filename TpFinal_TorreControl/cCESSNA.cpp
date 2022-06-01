#include "cCESSNA.h"

cCESSNA::cCESSNA(string _modelo): cAvion(_cantcombustible, _pasajerosmax, _tamanio)
{
}

cCESSNA::~cCESSNA()
{
}

float cCESSNA::tiempoDescarga()
{
	return 0.0f;
}
