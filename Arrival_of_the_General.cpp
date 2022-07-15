#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a;
    int min = 0, max = 0, max_pos = 1, min_pos = 1, ans;
    cin >> a;
    min = max = a;

    for (int i = 2; i <= n; i++)
    {
        cin >> a;

        if (a <= min)
        {
            min = a;
            min_pos = i;
        }
        else if (a > max)
        {
            max = a;
            max_pos = i;
        }
    }
    if (max_pos > min_pos)
    {
        ans = (max_pos - 1) + (n - min_pos) - 1;
        cout << ans;
    }
    else
    {
        ans = (max_pos - 1) + (n - min_pos);
        cout << ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
