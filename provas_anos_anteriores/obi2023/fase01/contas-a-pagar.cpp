#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int v;
    cin >> v;
    int contas[3];

    for (int i = 0; i < 3; i++) {
        // int value;
        // cin >> value;
        // contas[i] = value;
        cin >> contas[i];
    }

    sort(contas, contas+3);
    //sort(vet, vet+n); sendo vet um vetor e n a quantidade de elementos
    int cont = 0;
    for (int i = 0; i < 3; i++) {
        if (contas[i] <= v) {
            v -= contas[i];
            cont++;
        }
    }

    cout << cont << "\n";

    return 0;
}