#include <iostream>
using namespace std;

int main() {
    int n, soma;
    int ver = 0;
    cin >> n;
    int vetor[n], resultado[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
    for (int i = 0; i < n; i++) {
        soma = 0;
        if (vetor[i] == 1) {
            soma++;
        }
        if ((vetor[i - 1] == 1) && i != 0)
            soma++;

        if ((vetor[i + 1]) == 1 && i != (n - 1))
            soma++;

        resultado[i] = soma;
    }
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << endl;
    }

    return 0;
}