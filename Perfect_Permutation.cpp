#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;  
    cin>>n;
    int s[n];

    if(n%2==0)
    {
        for(int i=1 ; i<=n; i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
    }
    else
    {
        cout<<"-1";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
