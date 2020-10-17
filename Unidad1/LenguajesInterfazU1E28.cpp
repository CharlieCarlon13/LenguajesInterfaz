// Instituto Tecnologico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor : Carlos Armando Carlon Gerardo @nickname CharlieCarlon13
// Repositorio: https://github.com/CharlieCarlon13/LenguajesInterfaz
// Fecha de revisión : 16/10/2020
// Objetivo del programa : Desplegar en pantalla la raiz cuadrada de los numeros impares del 1 al 1000

#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	float result;
	cout << "Impar|Raiz Cuadrada" << endl;
	for (int i = 1; i <= 1000; i++) 
	{
		if (i%2!=0) 
		{
			result = sqrt(i);
			cout << i << "|" << result << endl;

		}

	}
	cout << "Fin Programa";

}

