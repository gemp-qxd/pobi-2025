#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> times;
    int t1, t2;
    char time1, time2;

    for (int i = 0; i < 16; i++) {
        times.push('A' + i);
    }

    while (times.size() > 1) {
        cin >> t1 >> t2;
        time1 = times.front();
        times.pop();
        time2 = times.front();
        times.pop();
        if (t1 > t2)
            times.push(time1);
        else
            times.push(time2);
    }
    cout << times.front() << "\n";

    return 0;
}