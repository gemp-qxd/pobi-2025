#include <bits/stdc++.h>
using namespace std;

int main() {
    int v{}, contas_pagas{};
    vector<int> contas(3);
    cin >> v;
    for (int i = 0; i < 3; i++) {
        cin >> contas[i];
    }
    sort(contas.begin(), contas.end());
    for (int conta : contas) {
        if (v < conta) {
            break;
        }
        v -= conta;
        contas_pagas++;
    }
    cout << contas_pagas << "\n";
    return 0;
}