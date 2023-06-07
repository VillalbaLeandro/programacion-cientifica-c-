#include <iostream>
using namespace std;

// Macro para determinar la cantidad de días en un mes
#define DIAS_DEL_MES(mes,anio) (((mes) == 2) ? (28 + ((anio) % 4 == 0 && ((anio) % 100 != 0 || (anio) % 400 == 0))) : (((mes) < 8) ? ((mes) % 2 == 0 ? 30 : 31) : ((mes) % 2 == 0 ? 31 : 30)))

int main()
{
    int mes, dia, siglo, anio, bisiesto;

    // Entrada de datos
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese los dos primeros digitos del anio: ";
    cin >> siglo;
    cout << "Ingrese los dos ultimos digitos del anio: ";
    cin >> anio;
    cout << "Ingrese 1 si el anio es bisiesto, 0 en caso contrario: ";
    cin >> bisiesto;

    // Cálculo del día de la semana
    int m = (mes + 9) % 12 + 1;
    int a = siglo * 100 + anio;
    int d = dia;
    int s = siglo;
    int b = bisiesto;
    int w = (d + 26 * m - 2 + (a % 100) + (a % 100) / 4 + (a / 100) / 4 - 2 * (a / 100) - (1 + b) * (m / 11)) % 7; //Se multipiplico el 2.6x10 para corregirr el error de tipo de dato y luego se dividio por 10 despues de realizar la multíplicacion;
    w = (w + 7) % 7; // Para asegurarnos de que el resultado esté en el rango 0-6



    // Salida de datos
    cout << "El dia " << dia << "/" << mes << "/" << siglo << anio << (bisiesto ? " (bisiesto)" : "") << " corresponde al dia de la semana " << w << endl;

}
