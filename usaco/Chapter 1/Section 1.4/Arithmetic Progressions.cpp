/*
ID: rezashi1
PROG: ariprog
LANG: C++
*/
#include <iostream>
//#include <conio.h>
#include <fstream>
#include <vector>
#include <algorithm>

//#define cin fin
//#define cout fout

using namespace std;

//ifstream fin("ariprog.in");
//ofstream fout("ariprog.out");

int main()
{
    int n,m;
    cin>>n>>m;
    int t = 0;
    vector<int> a;
    for(int i=0;i<=m;++i)
    {
            for(int j=i;j<=m;++j)
            {
                    int x = i*i+j*j;
                    a.push_back(x);
                   // ++t;
            }
    }
    
    sort(a.begin(),a.end());
    //cout<<a.size()<<endl;
    t = 0;
    for(int d=1;;++d)
    {
            for(int i=0;i<a.size();++i)
            {
                    if(a[i]==a[i-1]) ++i;
                    int k = 1;
                    int f = 1;
                    for(int j=i+1;j<a.size();++j)
                    {
                            if(a[j]-a[i]==k*d) {++f; ++k;}
                            if(n==f) {cout<<a[i]<<" "<<d<<endl; t=1; break;}
                            if(a[j]-a[i]>k*d) break;
                    }
            }
            if(d>800) break;
    }
    
    if(t==0) cout<<"NONE"<<endl;
            
                        
    
    
    //getch();
    return 0;
}
