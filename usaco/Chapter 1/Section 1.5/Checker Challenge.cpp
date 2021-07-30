#include <iostream>
#include <conio.h>

using namespace std;

bool check(int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i)
    {
            for(int j = 0 ; j < n ; ++j)
            {
                    if(i != j)
                    {
                         if(abs(i - j) == abs(a[i] - a[j])) return false;
                    }
            }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0 ; i < n ; ++i)
            a[i] = i + 1;
    int ans = 0;
    while(next_permutation(a , a + n))
    {
         if(check(a , n)) 
         {
                      ++ans;
                      if(ans < 4) 
                      {
                             for(int i = 0 ; i < n ; ++i) cout << a[i] << " ";
                             cout << endl;
                      }
         }
    }
    
    cout << ans << endl;
         
    getch();
    return 0;
}
