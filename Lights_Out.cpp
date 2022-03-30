#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int arr[3][3] , arrs[3][3]={1,1,1,1,1,1,1,1,1} , k=0 ; 
	
	for(int i =0 ; i<3; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
			if(arr[i][j]%2==1)
			{
				arrs[i][j]=1-arrs[i][j];
				if(i+1<3) arrs[i+1][j]=1-arrs[i+1][j];                       
				if(j+1<3) arrs[i][j+1]=1-arrs[i][j+1];
				if(i-1>=0) arrs[i-1][j]=1-arrs[i-1][j];
				if(j-1>=0) arrs[i][j-1]=1-arrs[i][j-1];

			
			}
        }
    }
	
	
	for(int i =0 ; i<3; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
			cout<<arrs[i][j];
		}
		cout<<"\n";
	}
	
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
