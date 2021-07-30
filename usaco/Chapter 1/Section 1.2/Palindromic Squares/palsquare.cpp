/*
ID: rezashi1
PROG: palsquare
LANG: C++
*/
#include <iostream>
#include <fstream>
//#include <conio.h>

using namespace std;

bool base(long long x,long long y)
{
     long long t=x,f=0,a[1000],k=0;
     long long i=y;
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
                       return true;
     end:                  
     return false;
}

int main()
{
    ifstream fin("palsquare.in");
    ofstream fout("palsquare.out");
    long long x,a[1000],l=0;
    fin>>x;
    
    for(long long i=1;i<=300;++i)
    {
             long long t=i;
            if(base((i*i),x))  
            {
                       while(t>=x)
                       {
                          a[l]=t%x; ++l;  t-=(t%x); t/=x;
                       }
                       a[l]=t;
                       for(int j=l;j>=0;--j)
                       {
                               if(a[j]>9)
                               {
                                         if(a[j]==10) fout<<"A";
                                         if(a[j]==11) fout<<"B";
                                         if(a[j]==12) fout<<"C";
                                         if(a[j]==13) fout<<"D";
                                         if(a[j]==14) fout<<"E";
                                         if(a[j]==15) fout<<"F";
                                         if(a[j]==16) fout<<"G";
                                         if(a[j]==17) fout<<"H";
                                         if(a[j]==18) fout<<"I";
                               }
                               else fout<<a[j];
                       }
                       l=0;
                       fout<<" ";
                       t=i;
                       int h=0;
                       long long k=t*t;
                       while(k>=x)
                       {
                          a[h]=k%x; ++h; k-=(k%x); k/=x;
                       }
                       a[h]=k;
                       for(int j=h;j>=0;--j)
                       {
                               if(a[j]>9)
                               {
                                         if(a[j]==10) fout<<"A";
                                         if(a[j]==11) fout<<"B";
                                         if(a[j]==12) fout<<"C";
                                         if(a[j]==13) fout<<"D";
                                         if(a[j]==14) fout<<"E";
                                         if(a[j]==15) fout<<"F";
                                         if(a[j]==16) fout<<"G";
                                         if(a[j]==17) fout<<"H";
                                         if(a[j]==18) fout<<"I";
                               }
                               else fout<<a[j];
                       }
                       fout<<endl;
            }
    }
    
    //getch();
    return 0;
}
