#include <iostream>

using namespace std;

int main() {
    int A, B;
    char saida;
    cin >> A >> B;

    if (!A)
        cout << "C\n";
    else {
        if (!B)
            cout << "B\n";
        else
            cout << "A\n";
    }

    cout << saida << endl;

    return 0;
}
