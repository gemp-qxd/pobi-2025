#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, atual, soma{};
    stack<int> pilha;
    cin >> n;

    while (n--) {
        cin >> atual;
        if (atual != 0) {
            pilha.push(atual);
        } else {
            pilha.pop();
        }
    }

    while (!pilha.empty()) {
        soma += pilha.top();
        pilha.pop();
    }

    cout << soma << "\n";

    return 0;
}