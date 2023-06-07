

#include <iostream>

using namespace std;

int sumar_valores(int a, int b)
{
	int resultado = a + b;

	return (resultado);
}


float promedio(int a, int b)
{
	return ((a + b) / 2.0);
}

void main(void)
{
	int x, y;

	cout << "El programa le pedir" << char(160) << " que ingrese dos n" << char(163) << "meros enteros. ";
	cout << "\n\nIngrese el primer n" << char(163) << "mero: ";
	cin >> x;
	cout << "\nIngrese el segundo n" << char(163) << "mero: ";
	cin >> y;

	cout << "\n\nLa suma de los n" << char(163) << "meros es : " << sumar_valores(x, y);
	cout << "\nEl promedio es: " << promedio(x, y) << endl;

	system("pause");
}
