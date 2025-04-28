#include <iostream>

using namespace std;

int main() {
    float n1{}, n2{}, media{};
    cin >> n1 >> n2;
    media = ((n1 * 2.0) + (n2 * 3.0)) / 5.0;
    if (media >= 7) {
        cout << "Aprovado\n";
    } else if (media < 3) {
        cout << "Reprovado\n";
    } else {
        cout << "Final\n";
    }

    return 0;
}
