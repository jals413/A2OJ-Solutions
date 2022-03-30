#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n , t , j=0; 
    string s;

    cin>>n>>t;
    cin>>s;

    while(j<t)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(s[i+1]=='G' && s[i]=='B')
            {
                s[i]='G';
                s[i+1]='B';
                i++;

            }

        }

        j++;
    }   
    cout<<s;



}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
