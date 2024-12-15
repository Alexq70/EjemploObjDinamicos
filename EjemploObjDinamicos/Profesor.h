#pragma once
#include <iostream>
#include <sstream>
using namespace std;


class Profesor
{
private:
	string nombre;
	string identificacion;
	int exp;
public:
	Profesor(string, string, int);
	string toString();
};

