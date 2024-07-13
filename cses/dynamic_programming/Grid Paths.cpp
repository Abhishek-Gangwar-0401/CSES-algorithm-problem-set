#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> grid;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        grid.push_back(s);
    }
    
    vector<int> dp(n,0);

    for(int i=n-1;i>=0;i--)
    {
       if(grid[n-1][i]!='*')
       {
         dp[i]=1;
       }else break;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(grid[i][n-1]!='.')dp[n-1]=0;
        for(int j=n-2;j>=0;j--)
        {
            if(grid[i][j]!='*'){dp[j]+=dp[j+1];
            dp[j]%=1000000007;}
            else dp[j]=0;
        }
    }
    cout<<dp[0];
    return 0;
}