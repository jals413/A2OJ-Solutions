#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s1 , s2;
    int count=0;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for(int i=0; i<s1.size() ; i++)
    {
        if(s1[i]<s2[i])
        {
            cout<<"-1";
            break;
        }
        else if (s1[i]>s2[i])
        {
            cout<<"1";
            break;
        }
        else
        {
            count++;
        }
    }
    if(count==s1.size())
    {
        cout<<"0";
    }


}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
