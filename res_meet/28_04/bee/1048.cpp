#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double salario{}, percentual{}, reajuste{};
    cin >> salario;

    if (salario <= 400) {
        percentual = 0.15;
    } else if (salario <= 800) {
        percentual = 0.12;
    } else if (salario <= 1200) {
        percentual = 0.10;
    } else if (salario <= 2000) {
        percentual = 0.07;
    } else {
        percentual = 0.04;
    }

    reajuste = salario * percentual;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << (salario + reajuste) << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << setprecision(0);
    cout << "Em percentual: " << (percentual * 100) << " %" << endl;

    return 0;
}