#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> nums(n);
   for(int i=0;i<n;i++)cin>>nums[i];
   vector<vector<long int>> dp(n,vector<long int>(n,0));
  
    for(int i=1;i<n;i++)
    {
        dp[i-1][i]=max(nums[i],nums[i-1]);
    
    }
  
    for(int i=0;i<n;i++)
    {
        dp[i][i]=nums[i];
    }
   

   for(int i=n-2;i>=0;i--)
   {
    for(int j=i+1;j<n;j++)
    {
          if(abs(i-j)<=1)continue;
          
             long int a=dp[i+1][j];
             long int b=dp[i][j-1];
              if(a>b)dp[i][j]=nums[j]+min(dp[i+1][j-1],dp[i][j-2]);
              else dp[i][j]=nums[i]+min(dp[i+1][j-1],dp[i+2][j]);

    }
   }
   
   long int ans=dp[0][n-1];
   cout<<ans;
    return 0;
}