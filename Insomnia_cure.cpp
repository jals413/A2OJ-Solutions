#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num, k, l, m, n, count=0;

    cin >> k >> l >> m >> n >>num;

    for (int i=1 ; i<=num ; i++)
    {
        if(i%k==0 || i%l==0 || i%m ==0 || i%n ==0)
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
