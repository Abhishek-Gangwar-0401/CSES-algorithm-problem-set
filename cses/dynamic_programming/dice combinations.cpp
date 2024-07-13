#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
// long long f(int sum,int& n,vector<int>& dp)
// {
//    if(sum==n) return 1;
//    if(sum>n) return 0;
//    if(dp[sum]!=-1)return dp[sum];
//    long long x=0;
//    for(int i=1;i<=6;i++)
//    {
//       x+=f(sum+i,n,dp);
//       x=x%mod;
//    }
//     return dp[sum]=x;
// }
// int main(){
//   int n;
//   cin>>n;
//   vector<int> dp(n+1,-1);
//   dp[n]=1;
//   cout<<f(0,n,dp);
//   return 0;
// }

int main()
{
 int n;
 cin>>n;
 vector<int> dp(n+1,0);
 dp[n]=1;
 for(int sum=n-1;sum>=0;sum--)
 {
   long long x=0;
   for(int i=1;i<=6;i++)
   {
      if(sum+i<=n)x+=dp[sum+i];
      x=x%mod;
   }
   dp[sum]=x;
 }
  cout<<dp[0];

return 0;
}