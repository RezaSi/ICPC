/*
ID: rezashi1
PROG: transform
LANG: C++
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
//#include <conio.h>

using namespace std;

int main()
{
    ifstream fin("transform.in");
    ofstream fout("transform.out");
    int n,t=1;
    char a[10+5][10+5],d[15][15],b[15][15],k[15][15],x=0;
    string s[15];
    fin>>n;//n ra  begir
    //tagzie vorody
    for(int i=0;i<n;++i)
    {
            fin>>s[i];
            for(int j=0;j<n;++j)
            {
                    a[i][j]=s[i][j];//avalin matrix
                    k[i][j]=a[i][j];//baraye 5'omy
            }
    }
    
    //================================
    //tagzie vorody
    for(int i=0;i<n;++i)
    {
            fin>>s[i];
            for(int j=0;j<n;++j)
            {
                    d[i][j]=s[i][j];//Dovomin matrix
            }
    }
    
    start:
    //************************************************************
    //chek baraye in ke 90 hast ya na :
    for(int i=0;i<n;++i)
    {
            for(int j=0;j<n;++j)
            {
                    b[j][n-i-1]=a[i][j];
                    if(b[j][n-i-1]!=d[j][n-i-1]) t=0;//agar 90 nabood bere bady ...
            }
    }
    if(t==0) goto end;
    if(x==0)fout<<1<<endl;
    if(x==1)fout<<5<<endl;
   // getch();
    return 0;
    
    
    //*************************************************************
    end:
        t=1;
    char c[15][15];
    for(int i=0;i<n;++i)
    {
            for(int j=0;j<n;++j)
            {
                    c[j][n-i-1]=b[i][j];
                    if(c[j][n-i-1]!=d[j][n-i-1]) t=0;//agar 180 nabood bere bady;
            }
    }
    
    if(t==0) goto end2;
    if(x==0)fout<<2<<endl;
    if(x==1)fout<<5<<endl;
   // getch();
    return 0;
    
    //*************************************************************
    //chek baraye 270:
    end2:
    t=1;
    for(int i=0;i<n;++i)
    {
            for(int j=0;j<n;++j)
            {
                    b[j][n-i-1]=c[i][j];
                    if(b[j][n-i-1]!=d[j][n-i-1]) t=0;//agar 270 nabood bere bady;
            }
    }
    
    if(t==0) goto end3;
    if(x==0)fout<<3<<endl;
    if(x==1)fout<<5<<endl;
  //  getch();
    return 0;         
    //**************************************************************
    end3:
         t=1;
    //Enekas:
    for(int i=0;i<n/2;++i)
    {
            for(int j=0;j<n;++j)
            {
                    swap(k[j][i],k[j][n-i-1]);
            }
    }
    
    //============
    for(int i=0;i<n;++i)
    {
            for(int j=0;j<n;++j)
            {
                    if(k[i][j]!=d[i][j]) t=0;
            }
    }
    //============
    
    if(t==0) goto end4;        
    if(x==0)fout<<4<<endl;
    if(x==1)fout<<5<<endl;
   // getch();
    return 0; 
    //***************************************************************
    
    end4:
         if(x==1) {x=0; goto end5;}
         t=1;
         x=1;
         char o[15][15];
         for(int i=0;i<n;++i)
         {
                 for(int j=0;j<n;++j)
                 {
                         o[i][j]=a[i][j];
                         a[i][j]=k[i][j];
                 }
         }
         goto start;
    //**********************************************************
    end5:
         for(int i=0;i<n;++i)
         {
                 for(int j=0;j<n;++j)
                 {
                         if(o[i][j]!=d[i][j]) goto end6;
                 }
         }
    //********************************************************     
    fout<<6<<endl;
   // getch();
    return 0;
    
    end6:
         fout<<7<<endl; 
    //getch();
    return 0;
}
