#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    vector<int> arr;
    int a;
    int count=0;

    for(int i=0 ; i<4 ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    for(int i=0 ; i<3 ; i++)
    {
        if(arr[i]==arr[i+1])
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
