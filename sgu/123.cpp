#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin >> k;
	long long f[k + 2];
	long long sum = 0;

	f[0] = 0;
	f[1] = 1;

	for(int i = 0 ; i <= k ; ++i){
		if(i > 1)
			f[i] = f[i - 1] + f[i - 2];
		sum += f[i];
	}

	cout << sum << endl;
	return 0;
}