#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, valor, elementos=0, pos=0;
    cin >> A >> B;
    vector<int> numeros_A(A);
    vector<int> numeros_B(B);
    for (int i=0; i<A; i++) {
        cin >> valor;
        numeros_A[i] = valor;
    }
    for (int i=0; i<B; i++) {
        cin >> valor;
        numeros_B[i] = valor;
    }
    for (int i=0; i<B; i++) {
        for (pos; pos<A; pos++) {
            if (numeros_B[i] == numeros_A[pos]) {
                elementos++;
                break;
            }
        }
        pos++;
    }
    if (elementos == B) {
        cout << "S\n";
    }
    else {
        cout << "N\n";
    }

    return 0;
}
