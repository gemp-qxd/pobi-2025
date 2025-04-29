#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a{}, b{}, c{};
    cin >> a >> b >> c;

    if (a < b) swap(a, b);
    if (a < c) swap(a, c);

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO\n";
    } else {
        double a2 = pow(a, 2);
        double b2 = pow(b, 2);
        double c2 = pow(c, 2);
        if (a2 == b2 + c2) {
            cout << "TRIANGULO RETANGULO\n";
        } else if (a2 > b2 + c2) {
            cout << "TRIANGULO OBTUSANGULO\n";
        } else {
            cout << "TRIANGULO ACUTANGULO\n";
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}