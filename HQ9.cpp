#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == 'H' || n[i] == 'Q' || n[i] == '9')
        {
            count++;
        }
    }

    if (count > 0)
    {
        cout << "YES" << endl;
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
