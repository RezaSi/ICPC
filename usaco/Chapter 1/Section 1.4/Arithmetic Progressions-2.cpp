/*
ID: rezashi1
PROG: ariprog
LANG: C++
*/
#include <iostream>
#include <conio.h>
#include <fstream>
#include <vector>
#include <algorithm>

//#define cin fin
//#define cout fout

using namespace std;

ifstream fin("ariprog.in");
ofstream fout("ariprog.out");

bool a[3006600];

int main()
{
    int n , m;
    cin >> n >> m;
    for(int i =0 ; i <= m ; ++i)
    {
            for(int j =0 ; j <= m ; ++j)
            {
                    a[i*i+j*j] = 1;
            }
    }
    
    int f = 0;
    for(int d = 1 ; d < 6000 ; ++d)
    {
            for(int j= 0 ; j < m*m ; ++j)
            {
                    for(int t = 0 ; t < n ; ++t)
                    {
                            if(a[j+d*t] != 1 ) goto end;
                    }
                    ++f;
                    cout << j << " " << d << endl;
                    end:
                        d;
            }
    } 
    
    if(f == 0) cout << "NONE" << endl;
    else cout << f << endl;
    getch();
    return 0;
}
