#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    string a, b, c;
    string d = "";
    cin >> a >> b >> c;
    int count = 0;
    d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (d.size() == c.size())
    {
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i] == c[i])
            {
                count++;
            }
        }
        if (count == d.size())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
