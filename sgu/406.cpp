#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> v[n + 10];
	for(int i = 0 ; i < n ; ++i){
		int x;
		cin >> x;
		for(int j = 0 ; j < x ; ++j){
			int temp;
			cin >> temp;
			v[i].push_back(temp);
		}
	}

	for(int i = 0 ; i < m ; ++i){
		int x;
		cin >> x;
		int temp[x + 10];
		for(int j = 0 ; j < x ; ++j){
			cin >> temp[j];
		}

		vector<int> ans;

		for(int k = 0 ; k < n ; ++k){
			bool tot_flag = true;
			for(int j = 0 ; j < x ; ++j){
				bool flag = true;
				if(temp[j] < 0){
					flag = true;
					for(int jj = 0 ; jj < v[k].size(); ++jj){
						if(v[k][jj] == -1 * temp[j])
							flag = false;
					}
					if(!flag)
						tot_flag = false;
				}else{
					flag = false;
					for(int jj = 0 ; jj < v[k].size(); ++jj){
						if(v[k][jj] == temp[j])
							flag = true;
					}
					if(!flag)
						tot_flag = false;
				}
			}
			if(tot_flag){
				ans.push_back(k);
			}
		}

		cout << ans.size() << endl;
		for(int j = 0 ; j < (int)ans.size() ; ++j){
			cout << v[ans[j]].size() << " ";
			for(int k = 0 ; k < v[ans[j]].size() ; ++k)
				cout << v[ans[j]][k] << " ";
			cout << endl;
		}
		
	}

	return 0;
}