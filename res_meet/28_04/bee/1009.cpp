#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nome;
    double salario_fixo{}, total_vendas{};
    cin >> nome >> salario_fixo >> total_vendas;
    double novo_salario = salario_fixo + (total_vendas * 0.15);
    cout << fixed << setprecision(2);

    cout << "TOTAL = R$ " << novo_salario << endl;

    return 0;
}