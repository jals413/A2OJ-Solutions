#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            x++;
        }
        else if (s == "--X" || s == "X--")
        {
            x--;
        }
    }
    cout << x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
