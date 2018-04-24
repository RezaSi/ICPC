#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	string names[m + 10];
	for(int i = 0 ; i < m ; ++i)
		cin >> names[i];

	cout << names[(n - 1) % m] << endl;
	return 0;
}