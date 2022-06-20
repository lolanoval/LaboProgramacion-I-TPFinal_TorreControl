#include "Enum.h"

string EstadoToString(eEstado estado)
{
	switch (estado)
	{
	case eEstado::Aterrizando:
		return "Aterrizando";
		break;
	case eEstado::Despegando:
		return "Despegando";
		break;
	case eEstado::Volando:
		return "Volando";
		break;
	case eEstado::enEspera:
		return "En espera...";
		break;
	default:
		return "En espera...";
		break;
	}
}