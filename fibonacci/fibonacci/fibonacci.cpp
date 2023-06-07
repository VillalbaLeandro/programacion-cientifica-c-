#include <iostream>

using namespace std;

int main() {
    int n;
    int a = 0, b = 1, c, i;
    cout << "ingrese la cantidad de nuemeros de la serie fibonacci que desea ver \n ";
    cin >> n;
    cout << "Los primeros " << n << " numeros de la serie de Fibonacci son: \n";

    for (i = 1; i <= n; ++i) {
        cout << a << " \n";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
