#pragma once
#include "Profesor.h"
#include "Contenedor.h"

class Curso
{
private:
	string nrc;
	string nombre;
	string area;
	Profesor* profesor; //puede ser reasignado, por eso es mejor tener un puntero, para apuntar a otro profesor si llega a ser necesario
	Contenedor contenedorEstudiantes;
public:
	Curso(Profesor*, string, string, string);
	string toString();
	void reasignarProfesor(Profesor* p);
	bool matricularEstudiante(Estudiante* e);
};

