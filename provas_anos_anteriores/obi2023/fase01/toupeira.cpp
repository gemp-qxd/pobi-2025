#include <bits/stdc++.h>

using namespace std;

vector<int> p[1010];
int m[1010][1010] = {0};


int ps(int x) {
	for (int i=0; i<(int)p[x].size()-1; i++) {
		int a=p[x][i], b=p[x][i+1];
		if (m[a][b] != 1) {
			return 0;
		}
	}
	return 1;
}


int main() {
	int node, edges, path;
	cin >> node >> edges;
	
	for (int i=0; i<edges; i++) {
		int a, b; cin >> a >> b;
		m[a][b] = 1;
		m[b][a] = 1;
	}
	
	cin >> path;
	
	for (int i=0; i<path; i++) {
		int q; cin >> q;
		for (int j=0; j<q; j++) {
			int c; cin >> c;
			p[i].push_back(c);
		}
	}
	
	int cont=0;
	
	for (int i=0; i<path; i++) {
		cont += ps(i);
	}
	
	cout << cont << "\n";
	
	return 0;
}
