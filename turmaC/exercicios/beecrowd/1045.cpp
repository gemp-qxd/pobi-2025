#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);

    if (a >= (b + c))
        cout << "NAO FORMA TRIANGULO\n";
    else {
        float b2c2 = pow(b, 2) + pow(c, 2);
        float a2 = pow(a, 2);

        if (a2 > b2c2)
            cout << "TRIANGULO OBTUSANGULO\n";
        else if (a2 < b2c2)
            cout << "TRIANGULO ACUTANGULO\n";
        else
            cout << "TRIANGULO RETANGULO\n";

        if (a == b && b == c)
            cout << "TRIANGULO EQUILATERO\n";
        else if ((a == b) || (b == c) || (a == c))
            cout << "TRIANGULO ISOSCELES\n";
    }
}