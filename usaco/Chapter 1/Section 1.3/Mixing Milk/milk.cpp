/*
ID: rezashi1
PROG: milk
LANG: C++
*/
#include <iostream>
#include <algorithm>
#include <fstream>
//#include <conio.h>

using namespace std;

int main()
{
    ifstream fin("milk.in");
    ofstream fout("milk.out");
    pair<long long,long long> a[5500];
    long long n,t,sum1=0,sum2=0;
    fin>>n>>t;
    for(int i=0;i<t;++i)
    {
            fin>>a[i].first>>a[i].second;
    }
    
    sort(a,a+t);
    
    for(int i=0;i<t;++i)
    {
            for(int j=0;j<a[i].second;++j)
            {
                    sum1+=a[i].first;
                    ++sum2;
                    if(sum2==n) goto end;
            }
    }
    
    
    end:
        fout<<sum1<<endl;
    //getch();
    return 0;
}
