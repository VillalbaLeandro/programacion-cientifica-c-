#include <iostream>
using namespace std;

void car_pol(float&, float&);

void main(void)
{
	float p, q;
	do
	{
		cout << "Ingrese el valor de x (0=FIN): ";
		cin >> p;
		if (p)
		{
			cout << "Ingrese el valor de y: ";
			cin >> q;
			car_pol(p, q);
			cout << "la posici" << char(162) << "n en polar r = " << p << "\ty a = " << q << endl;
			printf("la posicion en polar r = %2.8f\ty a = %2.8f\n", p, q);
		}
	} while (p);
}

void car_pol(float& x, float& y)
{
	float r;
	r = sqrt(pow(x, 2) + pow(y, 2));
	y /= x;
	x = r;
}
