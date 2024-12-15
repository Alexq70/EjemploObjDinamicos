#include "Curso.h"


Profesor* crearProfesor();
Estudiante* crearEstudiante();
void evaluarOpcion(Curso&, int);



int main() {
	int opcion;
	Curso curso = Curso(nullptr, "1122", "informatica", "Programacion"); //este es un objeto automatico.
	do {
		system("cls");
		cout << "1> asignar Profesor al curso" << endl;
		cout << "2> matricular un Estudiante al curso" << endl;
		cout << "3> ver informacion del curso" << endl;
		cout << "4> salir." << endl;
		cin >> opcion;
		evaluarOpcion(curso, opcion);
		system("pause");
	}while (opcion != 4);
	return 0;
}

Profesor* crearProfesor() //el Profesor que sea creado, sera creado en el heap y no se eliminara al finalizar esta funcion.
{
	int exp;
	string id, n;
	cout << "ingresa el nombre del profesor: ";
	cin >> n;
	cout << "ingresa la identificacion del profesor: ";
	cin >> id;
	cout << "ingresa los anios de experiencia del profesor: ";
	cin >> exp;

	return new Profesor(id, n,exp);
}

Estudiante* crearEstudiante() //el estudiante que sea creado, sera creado en el heap y no se eliminara al finalizar esta funcion.
{
	string n, id;
	cout << "ingresa el nombre del estudiante: ";
	cin >> n;
	cout << "ingresa la identificion del estudiante: ";
	cin >> id;

	return new Estudiante(id, n);
}

void evaluarOpcion(Curso& rC, int op)//para manejar la opcion que ingreso el usuario...
{
	switch (op)
	{
		case 1: {
			Profesor* ptrP = crearProfesor();
			rC.reasignarProfesor(ptrP);
		}break;
		case 2: {
			Estudiante* est = crearEstudiante();
			if (rC.matricularEstudiante(est)==true) {
				cout << "estudiante matriculado exitosamente...\n";
			}
			else {
				cout << "no se ha podido matricular al estudiante...\n";
			}
		}break;
		case 3: {
			cout << "informacion del curso: \n" << rC.toString() << endl;
		}break;
		case 4: {
			cout << "saliendo...\n";
		}break;
		default: {
			cout << "la opcion ingresada es invalida..\n";
		}
	}
}
