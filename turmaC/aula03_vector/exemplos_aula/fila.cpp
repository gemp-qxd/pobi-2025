#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> fila(n);
    for (int i = 0; i < n; i++) {
        cin >> fila[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int pessoa;
        cin >> pessoa;

        auto p = find(fila.begin(), fila.end(), pessoa);
        if (p != fila.end()) {
            fila.erase(p);
        }
    }

    for (int pessoa : fila) {
        cout << pessoa << " ";
    }
    cout << "\n";

    return 0;
}