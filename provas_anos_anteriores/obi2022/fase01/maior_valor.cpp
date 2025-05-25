#include<iostream>

using namespace std;

int main()
{
    int N, M, S, soma=0, numero, I;
    cin >> N >> M >> S;
    for (M; M>=N; M--) {
        numero = M;
        while (numero > 0) {
            soma += numero%10;
            numero = numero/10;
        }
        if (soma == S) {
            I = M;
            break;
        }
        soma = 0;
        if (M == N) {
            I = -1;
        }
    }
    cout << I << "\n";
    return 0;
}
