#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, A, N;
    cin >> D >> A >> N;

    int intervalo = 31 - N + 1;
    int multipicador = (N > 15) ? 15 : N;
    int diaria = D + (multipicador - 1) * A;
    cout << intervalo * diaria << "\n";
}
