#include <iostream>
using namespace std;

int main() {
    // Instanciando uma string
    string nome = "Fulano de Tal";

    // Acessando o primeiro caractere da string
    cout << nome[0] << endl;  // Saída: F

    // Imprimindo o tamanho da string
    cout << nome.size() << endl;  // Saída: 14

    // Percorrendo a string com um loop for de 2 em 2
    for (int i = 0; i < nome.size(); i += 2) {
        cout << nome[i] << endl;  // Saída: F, l, n, e, a
    }
}