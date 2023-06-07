#include <iostream>
using namespace std;

int main() {
    int g1, m1, s1, g2, m2, s2, sg, sm, sgf;
    char c;

    // Leemos la primera medida angular
    cout << "Ingrese la primera medida angular (en grados, minutos y segundos): ";
    cin >> g1 >> c >> m1 >> c >> s1;

   


    // Leemos la segunda medida angular
    cout << "Ingrese la segunda medida angular (en grados, minutos y segundos): ";
    cin >> g2 >> c >> m2 >> c >> s2;

    // Calculamos la suma de los segundos
    sg = s1 + s2;

    // Calculamos la suma de los minutos, incluyendo los segundos sobrantes
    sm = m1 + m2 + sg / 60;

    // Calculamos la suma de los grados, incluyendo los minutos y segundos sobrantes
    sgf = g1 + g2 + sm / 60;
    sm %= 60;
    sg %= 60;

    // Mostramos la suma de las medidas angulares
    cout << "La suma de las medidas angulares es: " << sgf << "grados" << sm << "'" << sg << "\"" << endl;

    return 0;
}
