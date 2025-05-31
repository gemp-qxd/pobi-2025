#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, s{};
    cin >> n >> s;
    vector<int> medicoes(n);
    for (int i = 0; i < n; ++i) cin >> medicoes[i];

    unordered_map<int, int> conta;
    conta[0] = 1;
    int soma = 0;
    long long resp = 0;

    for (int i = 0; i < n; ++i) {
        soma += medicoes[i];
        resp += conta[soma - s];
        conta[soma]++;
    }
    cout << resp << "\n";
    return 0;
}