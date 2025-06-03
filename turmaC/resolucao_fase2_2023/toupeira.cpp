#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;

int grafo[MAX][MAX];

int main() {
    int s, t;
    cin >> s >> t;

    int x, y;
    for (int i = 0; i < t; ++i) {
        cin >> x >> y;
        grafo[x][y] = 1;
        grafo[y][x] = 1;
    }

    int quantidade_passeios_possiveis = 0, p;
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
            if (!grafo[passeio[i]][passeio[i + 1]]) {
                deu_bom = false;
                break;
            }
        }
        if (deu_bom) quantidade_passeios_possiveis++;
    }

    cout << quantidade_passeios_possiveis << "\n";
    return 0;
}
