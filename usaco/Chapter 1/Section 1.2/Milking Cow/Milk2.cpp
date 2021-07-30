/*
ID: rezashi1
PROG: milk2
LANG: C++
*/

#include <iostream>
#include <algorithm>
#include <fstream>
//#include <conio.h>

using namespace std;

int main()
{
    ifstream fin("milk2.in");
    ofstream fout("milk2.out");
    int n,max1=0,max2=0,k=0,t,x;
    
    pair<int,int>a[5010];
    
    fin>>n;

    for(int i=0;i<n;i++)
            fin>>a[i].first>>a[i].second;
            
    sort(a,a+n);    

    t=a[0].first;
    x=a[0].second;
    for(int i=0;i<n;++i)
    {
            if(a[i].first<=x && x<=a[i].second) 
            {
                             x=a[i].second;    
                             if(max1<(x-t)) max1=x-t;
            }        
            if(a[i].first>x) 
            {
                            if(max1<(x-t)) max1=x-t;
                            x=a[i].second; t=a[i].first;
            }

    }
    
    t=a[0].first;
    x=a[0].second;
    
    for(int i=0;i<n;++i)
    {
            if(x>=a[i].first && a[i].second>x)  x=a[i].second;
            if(x<a[i].first) 
            {
                             if(max2<a[i].first-x) max2=a[i].first-x;
                             x=a[i].second;
            }
    }
    
    fout<<max1<<" "<<max2<<endl;
    
    //getch();
    return 0;
}
