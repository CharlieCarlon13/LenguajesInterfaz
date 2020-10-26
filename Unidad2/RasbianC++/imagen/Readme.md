![](imagen/portadatcnm.png)

#    Tecnológico Nacional de México
#   Instituto Tecnológico de Tijuana
#        Subdirección Académica

# Departamento de Sistemas y Computación
# Ingeniería en Sistemas Computacionales
# Lenguajes de interfaz 

# Practica Bloque: 2.2  Elabora la QEMU de RaspberryPI virtual y corra sus programas de CPP. 📝
# Objetivo: 


# Carlon Gerardo Carlos Armando
   

# Profesor:
# MC. René Solis Reyes
# Semestre sep - ene 2020

-----
### Lo primero que tenemos que hacer es clonar el repositorio


![](imagen/descargarrepo.PNG)

### Programa 1: Desplegar la raiz cuadrada de los numeros del 100 al 120

```bash
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
```
![](imagen/ejercicio1.1.PNG)
![](imagen/ejercicio1.2.PNG)


### Programa 2: Desplegar la suma de los cuadrados de la lista de numeros, cuya longitud sera determinada por el usuarioesplegar la raiz cuadrada de los numeros del 100 al 120

```bash
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
```
![](imagen/ejercicio2.PNG)


### Programa 3: Desplegar en pantalla la raiz cuadrada de los numeros impares del 1 al 1000

```bash
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
```

![](imagen/ejercicio3.1.PNG)
![](imagen/ejercicio3.2.PNG)

### Programa 4:Cambiar la cantidad de dolares que ingrese el usuario a monedas de cuarto de dolar


```bash
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

```


![](imagen/ejercicio4.PNG)


### Programa 5:Cambiar una cantidad de libras que ingresa el usuario a dolares separando los dolares y los centavos

```bash
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
```
![](imagen/ejercicio5.PNG)

## Conclusion
Me parece una herramienta super util el Qemu, desde descargar mi repor para poder llevar a cabo la ejecucion me parecio super sencilla de utilizar y super rapida, definitivamente sera una gran herramienta a utilizar durante todo este semestre.
