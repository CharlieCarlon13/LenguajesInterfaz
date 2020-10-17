// Instituto Tecnologico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor : Carlos Armando Carlon Gerardo @nickname CharlieCarlon13
// Repositorio: https://github.com/CharlieCarlon13/LenguajesInterfaz
// Fecha de revisión : 16/10/2020
// Objetivo del programa : Cambiar la cantidad de dolares que ingrese el usuario a monedas de cuarto de dolar


#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int coins,dolar;
    cout << "Ingrese la cantidad de dolares a tranformar a monedas(Solo enteros)" << endl; cin >> dolar;
    coins = dolar / .25;

    if (coins > 1)
    {
        cout << "Quater= " << coins << endl;
    }
    cout << "Programa terminado";

}

