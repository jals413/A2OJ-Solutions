#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t, count = 0;
    int a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
