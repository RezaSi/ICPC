/*
ID: rezashi1
PROG: dualpal
LANG: C++
*/
#include <iostream>
#include <fstream>
//#include <conio.h>

using namespace std;

bool base(long long x)
{
     long long t=x,f=0,a[1000],k=0,l=0;
               for(int i=2;i<=10;++i)
               {
                       t=x;
                       while(t>=i)
                       {
                           a[k]=t%i; t-=(t%i); ++k; t/=i;
                       }
                       a[k]=t;
                       t=x;
                       for(int j=0;j<k+1;++j)
                       {
                               if(a[j]!=a[k-j]) goto end;
                       }
                       l++;
                       if(l==2) return true;
                       end:
                           k=0;
                           x;
               }
     return false;
}

int main()
{
    ifstream fin("dualpal.in");
    ofstream fout("dualpal.out");
    long long n,x;
    fin>>n>>x;
    
    for(long long i=x+1;n>0;++i)
    {
            if(base(i)) {--n; fout<<i<<endl;}
    }
    
    //getch();
    return 0;
}
