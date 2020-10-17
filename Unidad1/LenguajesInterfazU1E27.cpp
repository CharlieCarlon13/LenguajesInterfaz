// Instituto Tecnologico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor : Carlos Armando Carlon Gerardo @nickname CharlieCarlon13
// Repositorio: https://github.com/CharlieCarlon13/LenguajesInterfaz
// Fecha de revisión : 16/10/2020
// Objetivo del programa : Desplegar la suma de los cuadrados de la lista de numeros, cuya longitud sera determinada por el usuario

#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	double limit, result=0;
	cout << "Ingrese la cantidad de numeros a desplegar(SOLO ENTEROS)"<<endl; cin >> limit;
	for (int i = 1; i <= limit; i++) 
	{
		result += pow(i, 2);
		if (i == limit) 
		{
			cout << result <<endl;
		}
		else {
			cout << result << " + ";
		}

	}
	cout << "Fin del programa";
	return 0;
}