#include <stdio.h>
#include <iostream>

void violin(int in1, int& in2);

using namespace std;

int main(void)
{
    int cont = 7, ind = 12;

    cout << "Los valores son ";
    printf("%3d %3d\n", cont, ind);

    violin(cont, ind);

    cout << "Los valores son ";
    printf("%3d %3d\n", cont, ind);

    return 0;
}

void violin(int in1, int& in2)
{
    in1 = in1 + 100;
    in2 = in2 + 100;
    cout << "Los valores son ";
    printf("%3d %3d\n", in1, in2);
}
