#include <iostream>
using namespace std;

int main() {
    int j1{}, j2{}, j3{};
    cin >> j1 >> j2 >> j3;
    if (j1 != j2 && j1 != j3)
        cout << "A\n";
    else if (j2 != j1 && j2 != j3)
        cout << "B\n";
    else if (j3 != j1 && j3 != j2)
        cout << "C\n";
    else
        cout << "*\n";
    return 0;
}