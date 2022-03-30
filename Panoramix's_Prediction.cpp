#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n);

void solve()
{
    int n, m , prime=1 , betweenprime=1, ans=1 , counter=0; // 1 is true , 0 is false 
    // ans = 1 means that no prime in between and m is also prime 
    cin >> n >> m;
    
    if(isPrime(m))
    {
        for(int i=n+1 ; i<m ; i++)                
        {             
            if(isPrime(i))
            {
                ans=0;
            }

        }
        if(ans==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

    }
    else
    {
        cout<<"NO";
    }
    
}

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
