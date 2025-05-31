#include <bits/stdc++.h>
using namespace std;

int main() {
    int a{}, b{};
    cin >> a >> b;

    vector<int> subA(a);
    vector<int> subB(b);

    for (int i = 0; i < a; i++) {
        cin >> subA[i];
    }

    auto it = subA.begin();

    for (int i = 0; i < b; i++) {
        cin >> subB[i];
        while (*it != subB[i]) {
            it++;
            if (it == subA.end()) {
                cout << "N\n";
                return 0;
            }
        }
        it++;
    }

    cout << "S\n";

    return 0;
}