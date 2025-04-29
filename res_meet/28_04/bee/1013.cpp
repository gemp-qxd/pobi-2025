#include <iostream>
using namespace std;

int main() {
    int a{}, b{}, c{};
    cin >> a >> b >> c;
    int ab = (a + b + abs(a - b)) / 2;
    if (ab > c) {
        cout << ab << " eh o maior\n";
    } else {
        cout << c << " eh o maior\n";
    }

    return 0;
}