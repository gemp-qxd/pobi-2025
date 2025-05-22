#include <bits/stdc++.h>
using namespace std;

// Função de busca binária em um vetor ordenado
// Retorna o índice do elemento 'target' se encontrado, ou -1 se não estiver presente
int busca_binaria(vector<int>& vetor, int target) {
    int l = 0;                 // Índice inicial do vetor (esquerda)
    int r = vetor.size() - 1;  // Índice final do vetor (direita)
    while (l <= r) {           // Enquanto houver elementos para buscar
        int m = (l + r) / 2;   // Calcula o índice do meio
        if (vetor[m] == target) {
            return m;  // Encontrou o target, retorna o índice
        }
        // Se o valor do meio for menor que o target,
        // significa que o target está à direita do meio
        if (vetor[m] < target) {
            l = m + 1;  // Atualiza o limite esquerdo para buscar à direita
        } else {
            // Se o valor do meio for maior que o target,
            // significa que o target está à esquerda do meio
            r = m - 1;  // Atualiza o limite direito para buscar à esquerda
        }
    }
    // Se sair do loop, o elemento não foi encontrado
    return -1;
}

int main() {
    // Exemplo de uso da busca binária
    vector<int> vetor = {1, 5, 84, 234, 267, 874, 2353};  // Vetor ordenado
    int target = 267;                                     // Elemento a ser buscado
    int resultado = busca_binaria(vetor, target);         // Chama a função de busca binária
    if (resultado != -1) {
        cout << "Elemento encontrado no índice: " << resultado << endl;  // Imprime o índice do elemento encontrado
    } else {
        cout << "Elemento não encontrado." << endl;  // Imprime mensagem se o elemento não for encontrado
    }
    return 0;
}