#include <bits/stdc++.h>
using namespace std;

int main() {
    int matriz[3][3];

    int somaLinha{};
    int sColuna{};
    int sD{};
    int sD2{};
    int valorReferencia{};
    bool ver = true;

    for (int n = 0; n < 3; n++) {
        for (int i = 0; i < 3; i++) {
            cin >> matriz[n][i];
        }
    }

    for (int n = 0; n < 3; n++) {
        somaLinha = 0;
        sColuna = 0;
        sD += matriz[n][n];
        sD2 += matriz[n][2 - n];
        for (int i = 0; i < 3; i++) {
            somaLinha += matriz[n][i];
            sColuna += matriz[i][n];
        }

        if (n == 0) {
            valorReferencia = somaLinha;
        }

        if (somaLinha != valorReferencia ||
            sColuna != valorReferencia) {
            cout << "NAO\n";
            return 0;
        }
    }

    if (sD != valorReferencia || sD2 != valorReferencia) {
        cout << "NAO\n";
        return 0;
    }

    cout << "SIM\n";

    return 0;
}