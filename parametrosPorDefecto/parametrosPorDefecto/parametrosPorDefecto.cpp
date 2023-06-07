#include <iostream>

using namespace std;

int volumen(int largo, int ancho = 2, int alto = 3);

void main(void)
{
	int x = 10, y = 12, z = 15;

	cout << " Algunos datos de la caja son " << volumen(x, y, z) << "\n";
	cout << " Algunos datos de la caja son " << volumen(x, y) << "\n";
	cout << " Algunos datos de la caja son " << volumen(x) << "\n";

	cout << " Algunos datos de la caja son ";
	cout << volumen(x, 7) << "\n";
	cout << " Algunos datos de la caja son ";
	cout << volumen(5, 5, 5) << "\n";
	system("pause");

}

int volumen(int largo, int ancho, int alto)
{
	printf("%4d %4d %4d   ", largo, ancho, alto);
	return largo * ancho * alto;
}
