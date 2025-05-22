// #include <bits/stdc++.h>

#include <iostream>
#include <stack>  // Biblioteca da STL para pilhas

using namespace std;

//* STACK *//

// O que é uma pilha?

// A pilha é uma estrutura de dados fundamental que segue um princípio muito simples e intuitivo: LIFO (Last In, First Out).
// Pense em uma pilha de pratos: o último prato que você coloca em cima é sempre o primeiro que você retira.

// - LIFO (Last In, First Out): O último elemento adicionado é o primeiro a ser removido.
// - Linear: Os elementos são organizados em uma sequência.
// - Dinâmica: Seu tamanho pode crescer e encolher conforme a necessidade.
// - Ponto único de acesso: Adições e remoções acontecem apenas em um lugar: o topo da pilha.

// stack<tipo> nome_da_pilha;

//* Métodos importantes: *//

//   MÉTODO         DESCRIÇÃO                                               EXEMPLO
// - push(valor):   Adiciona um elemento ao topo da pilha.                  pilha.push(10);
// - pop():         Remove o elemento do topo da pilha.                     pilha.pop();
// - top():         Retorna o elemento do topo da pilha sem removê-lo.      pilha.top();
// - empty():       Verifica se a pilha está vazia.                         pilha.empty();
// - size():        Retorna o número de elementos na pilha.                 pilha.size();

int main() {
    // 1. Criando uma pilha de inteiros
    stack<int> minhaPilha;

    // 2. Adicionando elementos (push)
    cout << "\nAdicionando elementos na pilha..." << endl;
    minhaPilha.push(10);  // Pilha: [10] (topo)
    cout << "Push: 10" << endl;
    minhaPilha.push(20);  // Pilha: [10, 20] (topo)
    cout << "Push: 20" << endl;
    minhaPilha.push(30);  // Pilha: [10, 20, 30] (topo)
    cout << "Push: 30" << endl;

    // 3. Exibindo o tamanho da pilha (size)
    cout << "\n-------------------------------------" << endl;
    cout << "Tamanho atual da pilha: " << minhaPilha.size() << " elementos." << endl;

    // minhaPilha.pop();
    // 4. Acessando o elemento do topo (top)
    cout << "Elemento no topo da pilha: " << minhaPilha.top() << endl;  // Deve ser 30

    // 5. Removendo um elemento (pop)
    cout << "\nRemovendo o elemento do topo (pop)..." << endl;
    minhaPilha.pop();  // Remove o 30. Pilha: [10, 20] (topo)
    cout << "Elemento 30 removido." << endl;

    // 6. Verificando o novo topo após a remoção
    cout << "Novo elemento no topo da pilha: " << minhaPilha.top() << endl;  // Deve ser 20

    // 7. Verificando se a pilha está vazia (empty)
    cout << "\n-------------------------------------" << endl;
    if (minhaPilha.empty()) {
        cout << "A pilha ESTÁ vazia." << endl;
    } else {
        cout << "A pilha NÃO ESTÁ vazia. Ainda há elementos." << endl;
    }

    // 8. Esvaziando a pilha completamente
    cout << "\nEsvaziando a pilha removendo todos os elementos..." << endl;
    while (!minhaPilha.empty()) {
        cout << "Removendo elemento: " << minhaPilha.top() << endl;
        minhaPilha.pop();
    }
    cout << "Pilha completamente esvaziada." << endl;

    // 9. Verificando novamente se a pilha está vazia
    cout << "\n-------------------------------------" << endl;
    if (minhaPilha.empty()) {
        cout << "A pilha AGORA ESTÁ vazia." << endl;
    } else {
        cout << "Erro: A pilha NÃO ESTÁ vazia (algo deu errado)." << endl;
    }

    return 0;
}