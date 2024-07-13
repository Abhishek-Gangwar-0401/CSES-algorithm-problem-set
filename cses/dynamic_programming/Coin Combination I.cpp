#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  long long mod=1e9+7;
vector<int>coins;
for(int i=0;i<n;i++)
{
  int coin;
  cin>>coin;
  coins.push_back(coin);
}

vector<int> dp(x+1,0);
dp[x]=1;
 for(int i=x-1;i>=0;i--)
  {
    long long num=0;
    for(auto coin:coins)
     {
        if(coin+i<=x)
          {
 	        num+=dp[i+coin];	    
          }
     }
     num=num%mod;
     dp[i]=num;
  }
  
 cout<<dp[0];

  return 0;
}