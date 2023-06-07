#include <iostream>
using namespace std;

int main() {
    int num, sum_divisores = 0;
    cout << "Ingrese un numero: ";
    cin >> num;

    // Calcular suma de divisores
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_divisores += i;
        }
    }

    // Clasificar número
    if (sum_divisores < num) {
        cout << num << " es un numero defectuoso" << endl;
    }
    else if (sum_divisores == num) {
        cout << num << " es un numero perfecto" << endl;
    }
    else {
        cout << num << " es un numero superabundante" << endl;
    }

    return 0;
}
