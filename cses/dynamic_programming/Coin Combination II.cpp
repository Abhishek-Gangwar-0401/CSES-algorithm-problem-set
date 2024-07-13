#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mod=1e9+7;
    int n,x;
    cin>>n>>x;
    int coins[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>coins[i];
        
    }
  vector<long> dp(x+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=x;j++)
        {
           if(j>=coins[i]){dp[j]+=dp[j-coins[i]];
            dp[j]%=mod;}
        }
    }
    cout<<dp[x];

    return 0;
}