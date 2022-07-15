#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n;
    n=s.size();
    if(n>10)
    {
        cout<<s[0]<<n-2<<s[n-1]<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
} 
