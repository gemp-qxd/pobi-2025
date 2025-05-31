#include <bits/stdc++.h>
using namespace std;

int main() {
    int s{}, t{};
    cin >> s >> t;

    unordered_map<int, set<int>> grafo;

    int x, y;
    for (int i = 0; i < t; ++i) {
        cin >> x >> y;
        grafo[x].insert(y);
        grafo[y].insert(x);
    }

    int quantidade_passeios_possiveis{}, p{};
    cin >> p;

    while (p--) {
        int n;
        cin >> n;
        vector<int> passeio(n);
        for (int i = 0; i < n; ++i) {
            cin >> passeio[i];
        }
        bool deu_bom = true;
        for (int i = 0; i < n - 1; ++i) {
            if (grafo[passeio[i]].find(passeio[i + 1]) == grafo[passeio[i]].end()) {
                deu_bom = false;
                break;
            }
        }
        if (deu_bom) quantidade_passeios_possiveis++;
    }

    cout << quantidade_passeios_possiveis << "\n";
    return 0;
}