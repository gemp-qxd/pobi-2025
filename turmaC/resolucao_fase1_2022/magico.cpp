#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, l_z{}, c_z{}, somaLinhaCorreta{}, somaLinhaIncorreta{};
    bool leu_zero = false;
    cin >> n;
    vector<vector<int>> quadrado(n, vector<int>(n));
    for (int l = 0; l < n; ++l) {
        int somaLinhaAtual{};
        leu_zero = false;
        for (int c = 0; c < n; ++c) {
            cin >> quadrado[l][c];
            if (quadrado[l][c] == 0) {
                l_z = l;
                c_z = c;
                leu_zero = true;
            }
            somaLinhaAtual += quadrado[l][c];
        }
        if (leu_zero) {
            somaLinhaIncorreta = somaLinhaAtual;
        } else {
            somaLinhaCorreta = max(somaLinhaAtual, somaLinhaCorreta);
        }
    }
    cout << somaLinhaCorreta - somaLinhaIncorreta << "\n";
    cout << l_z + 1 << "\n"
         << c_z + 1 << "\n";
    return 0;
}