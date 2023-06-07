
#include <iostream>
#include "primeros-pasos-c++.h"
using namespace std;
#define grupos(V) ((V < 1000) ? 1 : ((V >= 1000 && V <= 2000) ? 2 : ((V > 2000 && V <= 3000) ? 3 : 4)))


int main()
{

	cout << "//----DECLARACION Y ASIGNACION DE VARIABLES. lUEGO IMPRIMIRLAS POR CONSOLA---------"<<endl;
	int edad;
	float salario = 234.222;
	edad = 23;

	cout << "La edad del empleado es: " << edad << endl;
	cout << "Salario del empleado es: " << salario << endl;
	cout << "" << endl;
	cout << "" << endl;


	cout << "//---- Bucle while   -------------------------------------------"<<endl;
	int contador = 0;

	while (contador < 6) {
		cout << "El valor del contador es " << contador << endl;
		contador++;

	}
	cout << "" << endl;
	cout << "" << endl;


	cout << "//--------- BUCLE DO WHILE ---------------------------------"<<endl;
	cout << "//eNTRA POR LO MENOS UNA VEZ" << endl;

	int i;
	i = 0;
	do {
		cout << "El valor de i es: " << i << endl;
		i++;
	} while (i<5);

	cout << "" << endl;
	cout << "" <<endl;


	cout << "// ---------------------Bucle for --------------------------" << endl;

	int indice;	
	for (indice = 0; indice < 9; indice++) {
		cout << "el valor de indice en esta vuelta es: " << indice << endl;
	}

	cout << "" << endl;
	cout << "" << endl;

	cout << "//---------------- condicional IF .----------" << endl;
	for (i = 0; i < 10; i++) {
		if (i < 5) {
			cout << "I es menor a 5 entonces entra en el PRIMER if" << endl;
		}
		if (i % 2 == 0) {
			cout << "i de valor: " << i << " Es par" << endl;
		}
		else
			cout << "i de valor: " << i << " Es impar" << endl;
	}
	cout << "" << endl;
	cout << "" << endl;


	cout << "--------------------------BREAK Y CONTINUE --------------------------" << endl;

	for (i = 5; i < 15; i++) {
		if (i == 5)
		cout << "En el bucle break, i es ahora" << i << "\n";
			break;

	} for (i = 5; i < 15; i++) {
		if (i == 8)
			continue;
		cout << "En el bucle continue, i es ahora " << i << "\n";

	}

	cout << "" << endl;
	cout << "" << endl;


	cout << "// condicional switch --------------------------" << endl;

	int dato;
	for (dato = 0; dato < 13; dato++) {
		switch (dato)
		{
		case 1: cout << "el valor es 1" << endl;
			break;

		case 3: cout << "el valor es 3\n";
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;

		case 8: cout << "el valor esta entre 4 y 8" << endl;
		default: cout << dato << " Es uno de los valores no definidos" << endl;
			break;
		}

	}

	cout << "" << endl;
	cout << "" << endl;


	cout << "-------EJERCICIOS ------------" << endl;
	//EJERCICIOS DE PROGRAMACIÓN :

	//1.  Escribir un programa que imprima 10 veces un nombre por pantalla.Hacer una versión para cada bucle conocido.Definir cualquier variable cerca de su punto de uso.

	//	2. Hacer un programa que cuente de 1 a 10, escriba cada número en la pantalla y que al lado del 3 y del 7 escriba un comentario distinto para cada uno.

	//1-
	

	for (i = 0; i < 10; i++) {
		cout << "Ramon "<< i << endl;

	}
	cout << endl;
	cout << endl;

	i = 0;
	while (i < 10) {
		cout << "While "<<i << endl;
		i++;
	}
	cout << endl;
	cout << endl;

	i = 0;
	do
	{
		cout << "Do while " << i << endl;
		i++;
	} while (i<10);

	cout << endl;
	cout << endl;

	//2--
	cout << "Ejercicio 2" << endl;
	for (i = 1; i < 11; i++) {
		if (i == 3) {
			cout << "Estas en la vuelta 3" << endl;
			continue;

		}
		if (i == 7) {
			cout << "Y ahora en la vuelta 7" << endl;
			continue;
		}

		cout << "Vuelta " << i << endl;
	}


	cout << endl;
	cout << endl;


	//------------------------------- Funcion printf()

	printf("Esto es printF");

	cout << endl;
	cout << endl;

	//--------------------------- PRuebas de formateo

	int a;              // tipo entero simple
	long int b;         // tipo entero expandido
	short int c;        // tipo entero comprimido
	unsigned int d;     // tipo entero sin signo
	char e;             // tipo caracter
	float f;            // tipo punto flotante
	double g;           // punto flotante doble precisión

	a = 1023;
	b = 2222;
	c = 123;
	d = 1234;
	e = 'X';
	f = 3.14159;
	g = 3.1415926535898;

	printf("a = %d\n", a);      // salida decimal
	printf("a = %o\n", a);      // salida octal
	printf("a = %x\n", a);      // salida hexadecimal
	printf("b = %ld\n", b);     // salida decimal long
	printf("c = %d\n", c);      // salida decimal short
	printf("d = %u\n", d);      // salida sin signo
	printf("e = %c\n", e);      // salida de caracter
	printf("f = %f\n", f);      // salida en flotante
	printf("g = %f\n", g);      // salida doble flotante  
	printf("\n");
	printf("a = %d\n", a);      // salida simple entera
	printf("a = %7d\n", a);     // usa un campo de 7 caracteres
	printf("a = %-7d\n", a);    // justif. izda. de 7 caracteres
	printf("\n");
	printf("f = %f\n", f);      // salida simple float
	printf("f = %12f\n", f);    // usa un campo de 12 caracteres
	printf("f = %12.3f\n", f);  // usa 3 decimales
	printf("f = %12.5f\n", f);  // usa 5 decimales
	printf("f = %-12.5f\n", f); // justificacion izquierda



	printf("CRUPTICAAA--------------------------- \n");
	int valor, grupo=0;

	cout << "INGRESE UN NUMERO: \n";
	cin >> valor;

	switch (grupos(valor)) {

	case 1:
		grupo += valor;

		cout << "GRUPO MENOR A 1000: integrantes " << grupo << endl;

		break;

	case 2:
		grupo += valor;

		cout << "GRUPO ENTRE 1000 Y 2000: integrantes " << grupo << endl;

		break;
	case 3:

		grupo += valor;

		cout << "GRUPO ENTRE 2001 Y 3000: integrantes " << grupo << endl;

		break;

	case 4:

		grupo += valor;

		cout << "GRUPO MAYOR A 3000: integrantes " << grupo << endl;

		break;

	}








}
