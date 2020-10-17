// Instituto Tecnologico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor : Carlos Armando Carlon Gerardo @nickname CharlieCarlon13
// Repositorio: https://github.com/CharlieCarlon13/LenguajesInterfaz
// Fecha de revisión : 16/10/2020
// Objetivo del programa : Desplegar la raiz cuadrada de los numeros del 100 al 120

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float result;
    cout << "Numero|Raiz Cuadrada" << endl;
        for (int i = 100; i <= 120; i++)
    {
        result = sqrt(i);
        cout << i << "   |" << result << endl;
    }
    cout << "Fin Programa\n";
    return 0;
}
