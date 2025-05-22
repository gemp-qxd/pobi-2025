#include <iostream>
#include <queue>  // Biblioteca da STL para filas

using namespace std;

//* QUEUE *//

// O que é uma fila?

// A fila é uma estrutura de dados fundamental que segue o princípio FIFO (First In, First Out).
// Pense em uma fila de pessoas esperando atendimento: a primeira pessoa que entra na fila
// é a primeira que será atendida.

// - FIFO (First In, First Out): O primeiro elemento adicionado é o primeiro a ser removido.
// - Linear: Os elementos são organizados em sequência.
// - Dinâmica: O tamanho pode crescer e encolher conforme a necessidade.
// - Ponto único de entrada e saída: Entra pelo final (back), sai pela frente (front).

// queue<tipo> nome_da_fila;

//* Métodos importantes: *//

//   MÉTODO             DESCRIÇÃO                                              EXEMPLO
// - push(valor):       Adiciona um elemento ao final da fila.                 fila.push(10);
// - pop():             Remove o elemento da frente da fila.                   fila.pop();
// - front():           Retorna o elemento da frente da fila.                  fila.front();
// - back():            Retorna o elemento do final da fila.                   fila.back();
// - empty():           Verifica se a fila está vazia.                         fila.empty();
// - size():            Retorna o número de elementos na fila.                 fila.size();

int main() {
    // 1. Criando uma fila de inteiros
    queue<int> minhaFila;

    // 2. Adicionando elementos (push)
    cout << "\nAdicionando elementos na fila..." << endl;
    minhaFila.push(10);  // Fila: [10] (frente)
    cout << "Push: 10" << endl;
    minhaFila.push(20);  // Fila: (frente) [10, 20] (final)
    cout << "Push: 20" << endl;
    minhaFila.push(30);  // Fila: (frente) [10, 20, 30] (final)
    cout << "Push: 30" << endl;

    // // 3. Exibindo o tamanho da fila (size)
    // cout << "\n-------------------------------------" << endl;
    // cout << "Tamanho atual da fila: " << minhaFila.size() << " elementos." << endl;

    // // 4. Acessando o elemento da frente (front)
    // cout << "Elemento na frente da fila: " << minhaFila.front() << endl;  // Deve ser 10

    // // 5. Acessando o elemento do final (back)
    // cout << "Elemento no final da fila: " << minhaFila.back() << endl;  // Deve ser 30

    // // 6. Removendo um elemento (pop)
    // cout << "\nRemovendo o elemento da frente (pop)..." << endl;
    // minhaFila.pop();  // Remove o 10. Fila: [20, 30]
    // cout << "Elemento 10 removido." << endl;

    // // 7. Verificando o novo elemento na frente
    // cout << "Novo elemento na frente da fila: " << minhaFila.front() << endl;  // Deve ser 20

    // // 8. Verificando se a fila está vazia (empty)
    // cout << "\n-------------------------------------" << endl;
    // if (minhaFila.empty()) {
    //     cout << "A fila ESTÁ vazia." << endl;
    // } else {
    //     cout << "A fila NÃO ESTÁ vazia. Ainda há elementos." << endl;
    // }

    // // 9. Esvaziando a fila completamente
    // cout << "\nEsvaziando a fila removendo todos os elementos..." << endl;
    // while (!minhaFila.empty()) {
    //     cout << "Removendo elemento: " << minhaFila.front() << endl;
    //     minhaFila.pop();
    // }
    // cout << "Fila completamente esvaziada." << endl;

    // // 10. Verificando novamente se a fila está vazia
    // cout << "\n-------------------------------------" << endl;
    // if (minhaFila.empty()) {
    //     cout << "A fila AGORA ESTÁ vazia." << endl;
    // } else {
    //     cout << "Erro: A fila NÃO ESTÁ vazia (algo deu errado)." << endl;
    // }

    return 0;
}
