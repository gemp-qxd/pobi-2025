#include <iostream>
using namespace std;

int main() {
    int linha, coluna, pedidos, p_linha, p_coluna, valor, tirado=0;
    cin >> linha >> coluna;
    int matriz[linha][coluna];
    for (int l=0; l<linha; l++) {
        for (int c=0; c<coluna; c++) {
            cin >> valor;
            matriz[l][c] = valor;
        }
    }
    cin >> pedidos;
    for (int i=0; i<pedidos; i++) {
        cin >> p_linha >> p_coluna;
        if (matriz[p_linha-1][p_coluna-1] > 0) {
            tirado++;
        }
        matriz[p_linha-1][p_coluna-1]--;
    }
    cout << tirado << "\n";

    return 0;
}
