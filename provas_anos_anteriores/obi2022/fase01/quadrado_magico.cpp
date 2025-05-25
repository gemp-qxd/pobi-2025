#include<iostream>

using namespace std;

int main()
{
    int num, soma=0, valor, parant=0, linha, coluna, somac=0;
    cin >> num;
    int matriz[num][num];
    for (int l=0; l<num; l++) {
        for (int i=0; i<num; i++) {
            cin >> valor;
            matriz[l][i] = valor;
            if (l == parant) {
                soma += valor;
                if (valor == 0) {
                    parant++;
                    soma=0;
                    linha = l;
                    coluna = i;
                }
            }
            if (valor == 0) {
                linha = l;
                coluna = i;
            }
        }
    }
    for (int i=0; i<num; i++) {
        somac += matriz[linha][i];
    }
    cout << soma-somac << "\n" << linha+1 << "\n" << coluna+1 << "\n";
    
    return 0;
}
