#include <iostream>
using namespace std;

int main() {
    string s, v, c;
    v = "";
    c = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            v += s[i];
        } else {
            c += s[i];
        }
    }
    cout << "Vogais: " << v << endl;
    cout << "Consoantes: " << c << endl;

    return 0;
}