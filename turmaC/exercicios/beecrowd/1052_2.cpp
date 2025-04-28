#include <iostream>
using namespace std;

int main() {
    string meses[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
    int m{};
    cin >> m;
    cout << meses[m - 1] << endl;
    return 0;
}