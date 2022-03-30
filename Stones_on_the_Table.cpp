#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,count=0;
    string s;
    
    cin>>n; 
    cin>>s;

    for(int i=0 ; i<n ; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }

    cout<<count;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
