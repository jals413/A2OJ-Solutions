#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    float ans , sum=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ans=sum/n;
    cout<<ans;


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
