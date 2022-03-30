#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a ,b ,c="";
    int i=0;
    cin>>a>>b;
    
    while(i < a.size())
    {
        if(a[i]!=b[i])
        {
            c+="1";
        }
        else
        {
            c+="0";
        }
        i++;
    }
    
    cout<<c;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
