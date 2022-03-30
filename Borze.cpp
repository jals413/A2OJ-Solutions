#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s , a=""; 
    cin>>s;
    
    for(int i=0 ; i<s.size() ; i++ )
    {
        if (s[i]=='.')
        {
            a+='0';
        }
        else if (s[i]=='-' && s[i+1]=='.')
        {
            a+='1';
            i++;

        }
        else if (s[i]=='-' && s[i+1]=='-')   
        {
            a+='2';
            i++;

        }
    }
    cout<<a;

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
