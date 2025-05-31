#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, m{}, s{}, somaDigitos{};
    cin >> n >> m >> s;
    for (int i = m; i >= n; i--) {
        somaDigitos = 0;
        int num = i;
        while (num > 0) {
            somaDigitos += num % 10;
            num /= 10;
        }
        if (somaDigitos == s) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}