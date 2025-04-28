#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double salario{}, novo_salario{}, reajuste{}, percentual{};
    cin >> salario;

    if (salario <= 400)
        percentual = 0.15;
    else if (salario <= 800)
        percentual = 0.12;
    else if (salario <= 1200)
        percentual = 0.10;
    else if (salario <= 2000)
        percentual = 0.07;
    else
        percentual = 0.04;

    reajuste = salario * percentual;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario + reajuste;
    cout << "\nReajuste ganho: " << reajuste;
    cout << setprecision(0);
    cout << "\nEm percentual: " << percentual * 100 << " %\n";
    return 0;
}