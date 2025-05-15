#include <iostream>
using namespace std;

int main() {
    int n{}, quant_casais{};
    cin >> n;
    int zoo[n]{}, eh_casado[n]{};

    for (int i = 0; i < n; i++) {
        cin >> zoo[i];
    }

    for (int i = 0; i < n; i++) {
        if (eh_casado[i] == 1) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (zoo[i] == (zoo[j] * -1) && eh_casado[j] == 0) {
                quant_casais++;
                eh_casado[i] = 1;
                eh_casado[j] = 1;
                break;
            }
        }
    }

    cout << quant_casais << endl;

    return 0;
}