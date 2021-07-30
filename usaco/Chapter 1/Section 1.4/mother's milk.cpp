/*
ID: rezashi1
PROG: milk3
LANG: C++
*/
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;
 
#define MAX 100
#define INF INT_MAX
#define eps (1e-9)
 
#define FOR(_i,_k,_n) for(int (_i)=(_k); (_i)<(_n); (_i)++)
#define FORR(_i,_k,_n) for(int (_i)=(_k); (_i)>=(_n); (_i)--)

 
#define vc vector<int>
#define pb push_back
#define mp make_pair

 
typedef long long ll;
typedef pair<int,pair<int,int> > point;
int ABS(int _x){ return _x>0?_x:-_x; }
 
map<vector<int> , bool> vis;
vector<int> cap;
 
vector<int> pour(vector<int> a, int i, int j){
       int k=min(cap[i],a[i]+a[j]);
       a[j]-=max(0,k-a[i]);
       a[i]=k;
       return a;
}
 
set<int> ret;
set<int>::iterator it;
 
void rec(vector<int> a){
     if(vis[a]) return;
     if(a[0]==0) ret.insert(a[2]);
      
     vis[a]=1;
     FOR(i,0,3) FOR(j,0,3) if(i!=j){
       rec(pour(a,i,j));
     }
}
 
int main()
{
    freopen("milk3.in","r",stdin);
    freopen("milk3.out","w",stdout);
     
    cap.clear();
    cap.resize(3);
    vector<int> a(3);
    cin>>cap[0]>>cap[1]>>cap[2];
     
    a[0]=a[1]=0; a[2]=cap[2];
    rec(a);
     
    for(it=ret.begin(); it!=ret.end(); it++){
      if(it!=ret.begin()) cout<<" ";
      cout<<(*it);
    }
    cout<<endl;
     

    return 0;
}
