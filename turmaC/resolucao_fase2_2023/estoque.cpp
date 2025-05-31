#include <bits/stdc++.h>
using namespace std;

int main() {
    int m{}, n{}, vendas_efetivadas{};
    cin >> m >> n;
    int estoque[m][n];

    for (int l = 0; l < m; ++l) {
        for (int c = 0; c < n; ++c) {
            cin >> estoque[l][c];
        }
    }

    int p{};
    cin >> p;

    int tamanho, tipo;
    while (p--) {
        cin >> tipo >> tamanho;
        if (estoque[tipo - 1][tamanho - 1] > 0) {
            vendas_efetivadas++;
            estoque[tipo - 1][tamanho - 1]--;
        }
    }
    cout << vendas_efetivadas << "\n";

    return 0;
}