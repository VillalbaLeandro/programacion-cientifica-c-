#include <iostream>
#include <unordered_set>
using namespace std;

// Función para calcular la suma de los divisores propios de un número
int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

// Función para verificar si dos números son amigos
bool sonAmigos(int num1, int num2) {
    return (sumaDivisores(num1) == num2 && sumaDivisores(num2) == num1);
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de parejas de números amigos que desea mostrar: ";
    cin >> cantidad;

    unordered_set<int> numerosAmigos;  // Utilizamos un conjunto para evitar repeticiones

    int num = 1;
    while (numerosAmigos.size() < cantidad) {
        for (int i = num + 1; ; i++) {
            if (sonAmigos(num, i)) {
                numerosAmigos.insert(num);
                numerosAmigos.insert(i);
                break;
            }
        }
        num++;
    }

    cout << "Las " << cantidad << " parejas de números amigos son:" << endl;
    for (auto it = numerosAmigos.begin(); it != numerosAmigos.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
