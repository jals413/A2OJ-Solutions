#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string n ,str="";
    cin >> n;
    int num=0;
    
    vector< int > arr;
    for(int i=0 ; i<n.length(); i++)
    {
        if(n[i]=='1' || n[i]=='2' || n[i]== '3')
        {
            str=n[i];
            num = stoi(str);
            arr.push_back(num);
        }
        else
        {
            continue;
        }
    }
    sort(arr.begin() , arr.end());
    for(int i=0 ; i<arr.size()-1 ; i++)
    {
        cout<<arr[i]<<"+";
    }
    int last=0;
    last=arr.size();
    cout<<arr[last-1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
} 
