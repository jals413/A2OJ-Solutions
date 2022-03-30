#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n , i=0,xi, yi,zi ,sx=0, sy=0, sz=0;
    cin>>n;

    while(i<n)
    {
        cin>>xi>>yi>>zi;
        sx+=xi;
        sy+=yi;
        sz+=zi;
        i++;
          
    }

    cout<<((sx==0 && sy==0 && sz==0)?"YES":"NO");

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
