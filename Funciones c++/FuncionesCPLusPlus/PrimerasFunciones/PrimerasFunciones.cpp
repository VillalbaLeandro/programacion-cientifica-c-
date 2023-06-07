#include <iostream>

using namespace std;

void mayor_y_menor(int a, int b, int c)
{
	int menor = a;
	int mayor = a;

	if (b > mayor)  mayor = b;
	if (b < menor)  menor = b;
	if (c > mayor)  mayor = c;
	if (c < menor)  menor = c;

	cout << "\n\nEl n" << char(163) << "mero MAYOR es: " << mayor;
	cout << "\nEl n" << char(163) << "mero MENOR es: " << menor;
}

void main(void)
{
	cout << "Ahora se llamar" << char(160) << " a la funci" << char(162) << "n \n";
	mayor_y_menor(5, 2, 3);
	mayor_y_menor(500, 0, -500);
	mayor_y_menor(101, 101, 101);
	cout << "\n\nYa se retorn" << char(162) << " al programa principal.\n";
	system("pause");
}
