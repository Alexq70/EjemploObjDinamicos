#pragma once
#include <iostream>
#include <sstream>
using namespace std;


class Estudiante
{
private:
	string identificacion;
	string nombre;
public:
	Estudiante(string, string);
	string toString();

	bool sonIguales(Estudiante&);//compara si un estudiante es igual al otro (si tienen la misma cedula)

};

