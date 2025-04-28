#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maiorAB = (a + b + abs(a - b)) / 2;
    if (c > maiorAB)
        cout << c << " eh o maior\n";
    else
        cout << maiorAB << " eh o maior\n";
    return 0;
}