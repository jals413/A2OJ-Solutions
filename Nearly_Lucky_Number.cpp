#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int   i=0, j=0, count47=0 , lucky=0;
    string s ,new_s;
    cin>>s;

    while(i<s.size())
    {
        (s[i]=='4' || s[i]=='7')? count47++ : count47=count47; 
        i++;
    }
    
    new_s=to_string(count47);

    while(j<new_s.size())
    {
        (new_s[j]=='4' ||new_s[j]=='7')? lucky++ :lucky=lucky;
        j++;
        
    }

    cout<<(lucky==new_s.size()?"YES" :"NO"); 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
