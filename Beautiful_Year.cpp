#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int y , t ;
    string s; 
    cin>>y;


    for(int i=y+1 ; i<=9999 ; i++)    
    {
        s=to_string(i);
        if(s[0]==s[1] || s[0] == s[2] || s[0]==s[3] || s[1]==s[2] || s[1]==s[3] || s[2]==s[3] )
        {
            continue; 
        }
        else
        {
            cout<<s;
            break;
        }
    }

}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
