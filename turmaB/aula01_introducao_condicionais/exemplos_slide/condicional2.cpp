#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operador;
    cin >> num1 >> num2 >> operador;

    if (operador == '+') {
        cout << num1 + num2 << endl;
    } else if (operador == '-') {
        cout << num1 - num2 << endl;
    } else if (operador == '*') {
        cout << num1 * num2 << endl;
    } else if (operador == '/') {
        cout << num1 / num2 << endl;
    } else {
        cout << "operador inválido\n";
    }

    return 0;
}