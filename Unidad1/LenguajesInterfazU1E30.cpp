// Instituto Tecnologico de Tijuana
// Depto de Sistemas y Computación
// Ing.En Sistemas Computacionales
//
// Autor : Carlos Armando Carlon Gerardo @nickname CharlieCarlon13
// Repositorio: https://github.com/CharlieCarlon13/LenguajesInterfaz
// Fecha de revisión : 16/10/2020
// Objetivo del programa : Cambiar una cantidad de libras que ingresa el usuario a dolares separando los dolares y los centavos

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float dolar,cent;
    int coins,lib;
    cout << "Ingrese la cantidad de libras(solo enteros) que quiere cambiar a dolares" << endl; cin >> lib;
    dolar = lib * 2.80;
    coins = dolar / 1;
    cent = dolar - coins;
    cout << "Su cambio es " << dolar-cent<< " dolares con " << cent << " centavos." << endl;


    cout << "Programa terminado";

}

