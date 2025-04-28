#include <iostream>

using namespace std;

int main() {
    // Lendo a entrada do exercício
    int X;
    cin >> X;

    if (X > 0) {
        cout << "positivo\n";
    } else if (X < 0) {
        cout << "negativo\n";
    } else {
        cout << "nulo\n";
    }

    return 0;
}