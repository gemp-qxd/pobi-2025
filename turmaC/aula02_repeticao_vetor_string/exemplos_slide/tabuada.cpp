#include <iostream>

using namespace std;

int main() {
    // Inicializamos o x
    int x, i = 1;
    // Recebemos o valor do x
    cin >> x;
    // Loop de i indo de 1 até 10
    while (i <= 10) {
        // Imprimindo de acordo com a estrutura
        cout << x << " * " << i << " = " << x * i << "\n";
        // Incrementamos o i em 1
        i++;
    }
}