
#include <iostream>

#define BISIESTO(anio) (((anio % 4 == 0) && (anio % 100 != 0)) ? 1 : ((anio % 400 == 0) ? 1 : 0))
using namespace std;
int main() {
    int anio;
    cout << "Ingrese un anio: ";
    cin >> anio;

    (BISIESTO(anio)) ? cout << anio << " es un anio bisiesto" << endl : cout << anio << " no es un anio bisiesto" << endl;
   

    return 0;
}
