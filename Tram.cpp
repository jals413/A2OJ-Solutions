#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a = 0, b = 0, total = 0;
    int max = 0;
    cin >> a >> b;
    total = b;
    max = total;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        total = total - a + b;
        if (total > max)
        {
            max = total;
        }
    }
    cout << max;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
