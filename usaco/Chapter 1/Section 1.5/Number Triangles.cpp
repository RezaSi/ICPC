/*
ID: rezashi1
LANG: C++
TASK: numtri
*/
#include <iostream>
#include <fstream>
//#include <conio.h>

using namespace std;

ifstream fin("numtri.in");
ofstream fout("numtri.out");

#define cin fin
#define cout fout

int main()
{
              int n;
              cin >> n;
              int a[n + 10][n + 10];
              int d[n + 10][n + 10];
                      
              for(int i = 0 ; i < n ; ++i)
                      for(int j = 0 ; j <= i ; ++j)
                              cin >> a[i][j];
              d[0][0] = a[0][0];
              for(int i = 1 ; i < n ; ++i)
              {
                      //d[i][0] = d[i - 1][0];
                      for(int j = 0 ; j <= i ; ++j)
                      {
                              if(j == 0) d[i][j] = d[i - 1][j] + a[i][j];
                              else if(j == i) d[i][j] = d[i - 1][j - 1] + a[i][j];
                              else d[i][j] = max(d[i - 1][j] , d[i - 1][j - 1]) + a[i][j];
                      }
              }
              int ans = 0;
              for(int i = 0 ; i < n ; ++i)
              {
                      //cout << d[n - 1][i] << endl;
                      if(d[n - 1][i] > ans) ans = d[n - 1][i];
              }
              cout << ans << endl;
    
    //getch();
    return 0;
}
