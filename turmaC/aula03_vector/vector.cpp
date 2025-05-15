#include <bits/stdc++.h>

// #include <algorithm>  // para o método sort()
// #include <iostream>
// #include <vector>

using namespace std;

void imprime_vector(const vector<int>& vec) {
    cout << "Vetor: ";
    for (const int& e : vec) {
        cout << e << " ";
    }
    cout << "\n";
}

int main() {
    //* DECLARAÇÃO *//

    // declaração de um vetor de inteiros com 10 posições
    int vetor[10];

    // declaração de um vector de inteiros com 10 posições
    // vector<tipo> nome(tamanho);
    vector<int> vec(10);

    // declaração de um vector de inteiros com 10 posições e inicialização com 0
    // vector<tipo> nome(tamanho, valor_inicial);
    vector<int> vec2(10, 0);

    // declaração de um vector por lista de inicialização
    // vector<tipo> nome = {valor1, valor2, valor3, ...};
    vector<int> vec3 = {16, 2, 13, 4, 58778};

    //* INSERÇÃO DE ELEMENTOS *//

    vetor[0] = 1;  // atribuição de valor a posição 0 do vetor
    vetor[1] = 2;  // atribuição de valor a posição 1 do vetor

    // Num vetor, o tamanho é fixo e não pode ser alterado

    // No vector, o tamanho pode ser alterado dinamicamente
    vec.push_back(1);  // adiciona o valor 1 ao final do vector
    vec.push_back(2);  // adiciona o valor 2 ao final do vector

    // Também é possível inserir elementos em posições específicas
    // Para isso, é necessário usar o método insert() e um iterador

    //* ITERADORES *//

    // O iterador é um ponteiro que aponta para a posição de um elemento no vector
    // O iterador é usado para percorrer o vector e acessar os elementos

    vector<int>::iterator begin = vec3.begin();  // iterador para o início do vector. Aponta para o primeiro elemento
    vector<int>::iterator end = vec3.end();      // iterador para o final do vector. Aponta para a posição após o último elemento

    // para evitar o uso de vector<int>::iterator, é possível usar o auto
    auto it = vec3.begin();  // iterador para o início do vector. Aponta para o primeiro elemento

    cout << "Elemento na posição 0 de vec3: " << *begin << endl;  // imprime o valor do elemento apontado pelo iterador

    // O iterador pode ser incrementado ou decrementado para percorrer o vector
    begin++;
    cout << "Elemento na posição 1 de vec3: " << *begin << endl;  // imprime o valor do elemento apontado pelo iterador.
    // Como um iterador é um ponteiro, é necessário usar o operador * para acessar o valor do elemento
    cout << "Endereço do elemento na posição 1 de vec3: " << begin.base() << endl;  // imprime o endereço do elemento apontado pelo iterador

    begin += 2;
    cout << "Elemento na posição 3 de vec3: " << *begin << endl;

    begin--;
    cout << "Elemento na posição 2 de vec3: " << *begin << endl;

    //* INSERÇÃO DE ELEMENTOS EM POSIÇÕES ESPECÍFICAS *//

    // Para inserir elementos em posições específicas, é necessário usar o método insert() e um iterador
    // O método insert() recebe como parâmetro o iterador que aponta para a posição onde o elemento será inserido

    vec3.insert(vec3.begin(), 10);
    // Este método insere o valor 10 na posição 0 do vector
    // O insert desloca todos os elementos para a direita, e por conta disso, pode ser muito custoso

    cout << "vec3: ";
    for (int elemento : vec3) {
        cout << elemento << " ";
    }
    cout << "\n";

    // O for acima é um for range, que percorre o vector e imprime os elementos
    // O for range é uma forma mais simples de percorrer um vector.
    // O for range é equivalente ao seguinte for:
    for (vector<int>::iterator it = vec3.begin(); it != vec3.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    //* ACESSO A ELEMENTOS *//

    // atribuição de valor a posição 0 do vector
    vec[0] = 1;  // atribuição de valor a posição 0 do vector

    // o método at() é usado para acessar elementos de um vector, semelhante ao operador []
    vec.at(1) = 2;  // atribuição de valor a posição 1 do vector

    cout << *vec3.begin() << endl;        // imprime o valor do primeiro elemento do vector
    cout << *(vec3.begin() + 1) << endl;  // imprime o valor do segundo elemento do vector

    cout << vec.front() << endl;  // imprime o valor do primeiro elemento do vector
    cout << vec.back() << endl;   // imprime o valor do último elemento do vector

    //* OBTENÇÃO DO TAMANHO DO VECTOR *//

    // O método size() é usado para obter o tamanho do vector
    cout << vec.size() << endl;   // imprime o tamanho do vector
    cout << vec3.size() << endl;  // imprime o tamanho do vector

    // com isso, é possível percorrer o vector usando um for
    cout << "vec3: ";
    for (int i = 0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";  // imprime o valor do elemento na posição i do vector
    }
    cout << "\n";

    //* REMOÇÃO DE ELEMENTOS *//

    // O método pop_back() remove o último elemento do vector
    vec3.pop_back();  // remove o último elemento do vector
    imprime_vector(vec3);

    // O método erase() remove o elemento na posição especificada
    vec3.erase(vec3.begin() + 1);  // remove o elemento na posição 1 do vector
    imprime_vector(vec3);          // imprime o vector

    //* ORDENANDO ELEMENTOS *//

    // O método sort() ordena os elementos do vector
    // sort(<iterador_inicial>, <iterador_final>, <função_comparação>);
    sort(vec3.begin(), vec3.end());
    imprime_vector(vec3);  // imprime o vector ordenado
    // O método sort() recebe como parâmetro o iterador que aponta para o início e o final do vector
    // Por padrão, o método sort() ordena os elementos em ordem crescente

    // Para ordenar em ordem decrescente, é necessário usar o método greater()
    sort(vec3.begin(), vec3.end(), greater<int>());
    imprime_vector(vec3);  // imprime o vector ordenado em ordem decrescente
    // O método greater() é uma função de comparação que compara dois elementos e retorna true se o primeiro elemento for maior que o segundo

    // ou seja, é possível usar outras funções de comparação para ordenar os elementos do vector
    // O método sort() também pode ser usado para ordenar elementos de outros tipos, como strings, floats, etc.
    // Para isso, é necessário usar a função de comparação adequada

    //* ADICIONAIS *//

    // O método reverse() inverte a ordem dos elementos do vector
    reverse(vec.begin(), vec.end());  // inverte a ordem dos elementos do vector
    imprime_vector(vec);              // imprime o vector invertido

    // O método swap() troca os elementos de dois vectors
    vector<int> vec4 = {1, 2, 3, 4, 5};
    cout << "vec3: ";
    imprime_vector(vec3);  // imprime o vector
    cout << "vec4: ";
    imprime_vector(vec4);  // imprime o vector
    vec3.swap(vec4);       // troca os elementos de vec3 e vec4
    cout << "Após a troca:\n";
    cout << "vec3: ";
    imprime_vector(vec3);  // imprime o vector
    cout << "vec4: ";
    imprime_vector(vec4);  // imprime o vector

    // O método clear() remove todos os elementos do vector
    vec3.clear();          // remove todos os elementos do vector
    imprime_vector(vec3);  // imprime o vector vazio

    // O método empty() verifica se o vector está vazio
    if (vec3.empty()) {
        cout << "O vector está vazio\n";
    } else {
        cout << "O vector não está vazio\n";
    }

    vector<int> v = {3, 1, 4, 1, 5};

    v.pop_back();
    v.insert(v.begin() + 2, 9);
    sort(v.begin(), v.end());

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2 = {10, 20, 30, 40, 50};

    v2.erase(v2.begin() + 1);
    v2.insert(v2.end() - 1, 25);
    reverse(v2.begin(), v2.end());

    for (int x : v2) {
        cout << x << " ";
    }

    return 0;
}