#include "Estudiante.h"

Estudiante::Estudiante(string id, string n) :identificacion(id), nombre(n)
{
}

string Estudiante::toString()
{
	stringstream s;
	s << "nombre: " << nombre << endl;
	s << "identificacion: " << identificacion << endl;
	return s.str();
}

bool Estudiante::sonIguales(Estudiante& e)
{
	return e.identificacion == this->identificacion;
}
