#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int count = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {

        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
