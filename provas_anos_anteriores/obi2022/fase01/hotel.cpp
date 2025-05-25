#include<iostream>

using namespace std;

int main()
{
    int D, A, N, total;
    cin >> D >> A >> N;
    if (N == 1) {
        total = D * 31;
    }
    else if (N > 1 && N < 16) {
        total = (D + A * (N-1)) * (32 - N);
    }
    else {
        total = (D + (A * 14)) * (32-N);
    }
    cout << total << "\n";
    return 0;
}