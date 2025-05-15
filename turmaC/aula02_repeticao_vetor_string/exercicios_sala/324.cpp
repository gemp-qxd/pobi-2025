#include <iostream>
using namespace std;

int main() {
    int n, l, c, cont;
    cont = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l >> c;
        if (l > c) {
            cont += c;
        } else {
            cont += 0;
        }
    }
    cout << cont << endl;
    return 0;
}