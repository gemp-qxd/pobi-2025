#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N, sum;
	cin >> N >> sum;
	
	long long prefix=0, value, cont=0;
	map<long long, int> m;
	m[prefix] = 1;
	
	for (int i=0; i<N; i++) {
		cin >> value;
		prefix += value;
		cont += m[prefix-sum];
		m[prefix]++;
		
	}
	
	cout << cont << "\n";
	
	return 0;
}
