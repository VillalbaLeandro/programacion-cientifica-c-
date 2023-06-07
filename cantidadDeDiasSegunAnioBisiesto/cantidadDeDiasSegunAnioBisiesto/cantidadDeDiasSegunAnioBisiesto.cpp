#include <iostream>
using namespace std;

// Macro para determinar la cantidad de días en un mes
#define DIAS_DEL_MES(mes,anio) (((mes) == 2) ? (28 + ((anio) % 4 == 0 && ((anio) % 100 != 0 || (anio) % 400 == 0))) : (((mes) < 8) ? ((mes) % 2 == 0 ? 30 : 31) : ((mes) % 2 == 0 ? 31 : 30)))

int main()
{
    int mes, anio;

    // Entrada de datos
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;

    // Cálculo de la cantidad de días en el mes ingresado
    int dias = DIAS_DEL_MES(mes, anio);

    // Salida de datos
    cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias." << endl;

    return 0;
}
