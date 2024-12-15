#include "Curso.h"

Curso::Curso(Profesor* p, string nr, string a, string nomb) :
    profesor(p), nrc(nr), nombre(nomb), area(a)
{
    contenedorEstudiantes = Contenedor();
}

string Curso::toString()
{
    stringstream s;
    s << "nombre del curso: " << nombre << endl;
    s << "nrc: " << nrc << endl;
    s << "area del curso: " << area << endl;
    if (profesor != nullptr) {
        s << "Profesor asignado: \n" << profesor->toString() << endl;
    }
    else {
        s << "aun no se ha asignado un profesor...\n";
    }
    s << "Estudiantes matriculados: " << endl;
    s << contenedorEstudiantes.toString();
    return s.str();
}

void Curso::reasignarProfesor(Profesor* p)
{
    if (p != nullptr) {
        this->profesor = p;
    }
}

bool Curso::matricularEstudiante(Estudiante* e)
{
    return contenedorEstudiantes.agregar(e); // si el estudiante es agregado exitosamente retorna true, si no retorna false
}
