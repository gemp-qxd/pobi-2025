#include <iostream>
using namespace std;

int main() {
    int D;
    cin >> D;

    D -= 3;
    int resto = D % 8;

    if (resto >= 0 && resto <= 2)
        cout << 1 << endl;
    else if (resto >= 3 && resto <= 5)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}
