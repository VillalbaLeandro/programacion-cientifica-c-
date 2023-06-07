#include <iostream>

using namespace std;

void relleno(int alas, float pies, char ojos);

void main(void)
{
	int brazo = 2;
	float pie = 1000.0;
	char ojo = 65;

	relleno(3, 12.0, 66);
	relleno(brazo, pie, ojo);
	system("pause");
}

void relleno(int alas, float pies, char ojos)
{
	cout << "Hay " << alas << " alas." << "\n";
	cout << "Hay " << pies << " pies." << "\n";
	cout << "Hay  " << (int)ojos << " ojos." << "\n\n";
}
