#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    if (a > 10) {
        cout << "a é maior que 10" << endl;
    } else if (a < 10) {
        cout << "a é menor que 10" << endl;
    } else {
        cout << "a é igual a 10" << endl;
    }

    return 0;
}