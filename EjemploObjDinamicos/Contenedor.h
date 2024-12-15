#pragma once
#include "Estudiante.h"

class Contenedor
{
private:
	int cantidad;
	int tamano;
	Estudiante* estudiantes[25]; //es un vector de punteros (punteros a estudiantes)
public:
	Contenedor();
	bool agregar(Estudiante* e);
	bool comprobarExistencia(Estudiante* e);//para el reto
	string toString();
};

