#include "Contenedor.h"

Contenedor::Contenedor()
{
    cantidad = 0;
    tamano = 25;
    for (int i = 0; i < tamano; i++) {
        estudiantes[i] = nullptr;     //los punteros, mientras no se estan usando deben estar apuntando a null
    }

}

bool Contenedor::agregar(Estudiante* e)
{
    if (cantidad < tamano && e != nullptr) { //comprobar que el vector no este lleno, y que el parametro no sea nulo

        if (!comprobarExistencia(e)) { // si el estudiante no esta en el vector (reto)
            estudiantes[cantidad++] = e;
            return true; //se ingreso exitosamente.
        }
    }
    return false;//no se pudo ingresar.
}

bool Contenedor::comprobarExistencia(Estudiante* e) //retorna true si el estudiante ya esta dentro del vector
{
    for (int i = 0; i < cantidad; i++) {
        if (estudiantes[i]->sonIguales(*e)) { //si encuentra un elemento dentro del vector que sea igual al que llega por parametro retorna true
            return true;
        }
    }
    return false; //no encontro ningun estudiante que tenga la misma identificacion que el que llega por parametro
}

string Contenedor::toString()
{
    stringstream s;
    for (int i = 0; i < cantidad; i++) {
        s << "#" << i + 1 << "\n" << estudiantes[i]->toString() << endl;
    }
    return s.str();
}
