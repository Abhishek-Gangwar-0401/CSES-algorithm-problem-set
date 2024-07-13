#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> coins(n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        cin>>coins[i];
        totalSum+=coins[i];
    }
    vector<int> prev(totalSum+1,0);
    prev[0]=1;
    for(int i=0;i<n;i++)
    {
        vector<int> dp(totalSum+1,0);
        for(int j=0;j<=totalSum;j++)
        {
            if(j==0)
            {
                dp[j]=1;
               
            }else{
                
               dp[j]=prev[j];
               if(j>=coins[i]) dp[j]=max(prev[j],prev[j-coins[i]]);
            }

        }
        prev=dp;
    }
    int totalAns=0;
    for(int i=1;i<=totalSum;i++)
    {
        if(prev[i]>=1)totalAns++;
    }
    cout<<totalAns<<endl;
     for(int i=1;i<=totalSum;i++)
    {
        if(prev[i]>=1)cout<<i<<" ";
    }
    return 0;
}