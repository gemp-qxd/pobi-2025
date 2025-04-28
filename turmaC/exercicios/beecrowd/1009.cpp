#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nome{};
    double sal_fixo{}, total_vendas{};
    cin >> nome >> sal_fixo >> total_vendas;
    double salario_final = sal_fixo + (total_vendas * 0.15);
    cout << fixed << setprecision(2) << "TOTAL = R$ " << salario_final << endl;
    return 0;
}