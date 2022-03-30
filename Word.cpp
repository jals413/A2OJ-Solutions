#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    int i = 0 , countupp = 0 , countlow= 0  , j=0 , k=0 ; 
    cin>>s;
    while (i < s.size())
    {
        (isupper(s[i])?countupp++ : countlow=countlow);
        (islower(s[i])?countlow++ : countupp=countupp);
        i++;
    }
    if(countlow>=countupp)
    {
        while(j < s.size())
        {
            s[j]=tolower(s[j]);
            j++;
        }
    }
    else
    {
        while(k < s.size())
        {
            s[k]=toupper(s[k]);
            k++;
        }
    }
    cout<<s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
