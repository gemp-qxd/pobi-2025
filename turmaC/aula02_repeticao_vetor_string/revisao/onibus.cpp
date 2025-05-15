#include <iostream>
using namespace std;

int main() {
    int capacidade_maxima{}, movimentacao{}, quant_atual{};

    cin >> capacidade_maxima;

    // nao sabe quantas vezes o programa vai rodar -> while
    // quando vc sabe exatamente -> for

    while (true) {
        cin >> movimentacao;
        quant_atual += movimentacao;

        if (quant_atual >= capacidade_maxima * 2) {
            cout << "hora de partir\n";
            break;
        }

        if (quant_atual == 0) {
            cout << "vazio\n";
        } else if (quant_atual < capacidade_maxima) {
            cout << "ainda cabe\n";
        } else if (quant_atual >= capacidade_maxima) {
            cout << "lotado\n";
        }
    }

    return 0;
}