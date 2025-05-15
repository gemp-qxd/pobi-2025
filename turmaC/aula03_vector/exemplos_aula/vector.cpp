#include <bits/stdc++.h>
using namespace std;

void imprimir(vector<int>& vec) {
    for (int v : vec) {
        cout << v << " ";
    }
    cout << "\n";
}

int main() {
    int a = 0;

    int vetor[10];

    // vector<tipo> nome;
    vector<int> vec;

    vector<int> vec2(10);

    vector<int> vec3(10, 0);

    vector<int> vec4 = {3, 6, 9, 12};

    // cout << vetor[0] << "\n";

    // cout << vec[0] << "\n";
    // cout << vec.at(0) << "\n";

    vector<int> xablau = {12, 2, 34, 4, 545};
    xablau.push_back(6);

    // for (int i = 0; i < 6; i++) {
    //     cout << xablau[i] << ' ';
    // }

    // for(<tipo> var: vector){} for-range
    // for (int numero : xablau) {
    //     cout << numero << " ";
    // }

    // vector<int>::iterator begin = vec.begin();
    auto begin = xablau.begin();  // primeira posição
    auto end = xablau.end();      // posição após a última

    xablau.push_back(7);

    xablau.insert(xablau.begin() + 1, 67);
    xablau[2] = 4;

    imprimir(xablau);

    cout << xablau.front() << "\n";
    cout << xablau.back() << "\n";

    xablau.pop_back();
    xablau.erase(xablau.begin() + 2);

    cout << "Tamanho do xablau: " << xablau.size() << "\n";

    // xablau.clear();

    // xablau.empty();

    if (xablau.empty()) {
        cout << " ele tá vazio \n";
    }

    reverse(xablau.begin(), xablau.end());

    auto f = find(xablau.begin(), xablau.end(), 2536);
    if (f == xablau.end()) {
        cout << "n achou\n";
    }

    // sort(xablau.begin(), xablau.end());
    // sort(xablau.begin(), xablau.end(), greater<int>());
    // imprimir(xablau);

    return 0;
}