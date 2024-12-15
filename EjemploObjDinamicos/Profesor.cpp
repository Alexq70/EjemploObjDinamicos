#include "Profesor.h"

Profesor::Profesor(string id, string n, int e) : nombre(n), identificacion(id), exp(e)
{
}

string Profesor::toString()
{
    stringstream s;
    s << "Nombre: " << nombre << endl;
    s << "identificacion: " << identificacion << endl;
    s << "experiencia: " << exp << endl;
    return s.str();
}
