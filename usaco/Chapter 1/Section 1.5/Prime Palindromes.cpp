#include <iostream>
#include <conio.h>

using namespace std;

bool isprime(int x)
{
     if(x == 1) return false;
     if(x == 2) return true;
     if(x % 2 == 0) return false;
     for(int i = 3 ; i * i <= x ; i += 2)
             if(x % i == 0) return false;
     return true;
}

int check(int a[])
{
    int ans = 0;
    for(int i = 0 ; i < 5 ; ++i)
    {
            ans = ans * 10 + a[i];
    }
    int t = 5;
    for(int i = 8 ; i >= 5 ; ++i)
    {
            if(a[i] != 0) break;
            else t = i;
    }
    
    cout << ans << endl;
    
    cout << t << endl;
            
    for(int i = 5 ; i < 9 ; ++i)
    {
            if(i == t) break;
            ans = ans * 10 + a[i];
    }
    return ans;
}

int main()
{
    for(int d1 = 1 ; d1 < 10 ; d1 += 2)
    {
            for(int d2 = 0 ; d2 < 10 ; ++d2)
            {
                    for(int d3 = 0 ; d3 < 10 ; ++d3)
                    {
                                            int x = d1 * 100 + d2 * 10 + d3;
                                            if(isprime(x)) 
                                            {
                                                           cout << x << endl;
                                                           for(int i = 0 ; i < 10000000 ; ++i){}
                                            }
                    }
            }
    }
    
    for(int d1 = 1 ; d1 < 10 ; d1 += 2)
    {
            for(int d2 = 0 ; d2 < 10 ; ++d2)
            {
                    for(int d3 = 0 ; d3 < 10 ; ++d3)
                    {
                            for(int d4 = 0 ; d4 < 10 ; ++d4)
                            {
                                            int x = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
                                            if(isprime(x)) 
                                            {
                                                           cout << x << endl;
                                                           for(int i = 0 ; i < 10000000 ; ++i){}
                                            }
                            }
                    }
            }
    }  
    
    
    for(int d1 = 1 ; d1 < 10 ; d1 += 2)
    {
            for(int d2 = 0 ; d2 < 10 ; ++d2)
            {
                    for(int d3 = 0 ; d3 < 10 ; ++d3)
                    {
                            for(int d4 = 0 ; d4 < 10 ; ++d4)
                            {
                                    for(int d5 = 0 ; d5 < 10 ; ++d5)
                                    {
                                            int x = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
                                            if(isprime(x)) 
                                            {
                                                           cout << x << endl;
                                                           for(int i = 0 ; i < 10000000 ; ++i){}
                                            }
                                            
                                    }
                            }
                    }
            }
    }  
    
    getch();
    return 0;
}
