#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese la longitud de los tres lados del triangulo: ";
    cin >> a >> b >> c;

    /*if (a + b > c && a + c > b && b + c > a) {
        cout << "Se puede formar un triangulo" << endl;

        if (a == b && b == c) {
            cout << "El triangulo es equilatero" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "El triangulo es isosceles" << endl;
        }
        else {
            cout << "El triangulo es escaleno" << endl;
        }
    }
    else {
        cout << "No se puede formar un triangulo" << endl;
    }*/
    cout << ((a + b > c && b + c > a && a + c > b) ? (a == b && b == c ? "El triangulo es equilatero" : (a == b || a == c || b == c ? "El triangulo es isosceles" : "El triangulo es escaleno")) : "No se puede formar un triangulo") << endl;



}
