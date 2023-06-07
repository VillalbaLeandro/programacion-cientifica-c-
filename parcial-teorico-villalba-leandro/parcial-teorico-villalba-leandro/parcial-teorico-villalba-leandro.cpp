//Realizar un programa para ir introduciendo números e ir determinando cuántos son pares y cuántos 
//impares(realizados en un define) hasta que se introduce un cero, que NO debe ser tenido en cuenta.
//Una vez finalizado, se debe informar la cantidad de pares e impares, las sumas correspondientes y sus promedios.
//NOTA: se debe emplear críptica.



#include <iostream>
using namespace std;

#define parEImpar(numero) (numero%2==0?1:0)
int main()
{

	int numeros, par = 0, impar = 0;
	cout << "Ingrese numeros para ir clasificando entre par e impar: \n";
	cout << "Ingrese 0(cero) para finalizar: \n";

	cin >> numeros;

	while (numeros != 0)
	{
		parEImpar(numeros) ? par++ : impar++;

		cout << "Ingrese siguiente numero para ir clasificando entre par e impar: \n";
		cout << "Ingrese 0(cero) para finalizar: \n";

		cin >> numeros;
	}
	
	cout << "La cantidad de numeros pares ingresados es: " << par << endl;
	cout << "La cantidad de numeros impares ingresados es: " << impar << endl;

}

