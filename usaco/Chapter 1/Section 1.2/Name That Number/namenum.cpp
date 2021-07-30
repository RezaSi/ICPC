/*
ID: rezashi1
PROG: namenum
LANG: C++
*/

#include <iostream>
#include <fstream>
//#include <conio.h>

using namespace std;

int r(char c)
{
    if(c=='A' ||c=='B' ||c=='C') return 2;
    if(c=='D' ||c=='E' ||c=='F') return 3;
    if(c=='G' ||c=='H' ||c=='I') return 4;
    if(c=='J' ||c=='K' ||c=='L') return 5;
    if(c=='M' ||c=='N' ||c=='O') return 6;
    if(c=='P' ||c=='R' ||c=='S') return 7;
    if(c=='T' ||c=='U' ||c=='V') return 8;
    if(c=='W' ||c=='X' ||c=='Y') return 9;
    
}


int main()
{
    long long t,k=0;
    ifstream in("namenum.in");
    ifstream fin("dict.txt");
    ofstream fout("namenum.out");
    string s;
    in>>t;    
    while(fin>>s)
   {
      long long sum=0,x=1;
      for(int i=s.size()-1;i>=0;--i)
      {
              sum+=(x*r(s[i]));
              x*=10;
      }  
      if(sum==t) {fout<<s<<endl; ++k;}
   }
   if(k==0) fout<<"NONE"<<endl;
    
   // getch();
    return 0;
}
