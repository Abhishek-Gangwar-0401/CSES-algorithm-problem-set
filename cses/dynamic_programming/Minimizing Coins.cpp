#include<bits/stdc++.h>
using namespace std;
// int f(int i,int x, vector<int>& coins)
// {
//     if(i==x) return 0;
//     if(i>x) return INT_MAX;
//     int num=1e9;
//     for(auto it:coins)
//     {
//         if(it+i<=x)
//         {
//             num=min(num,f(i+it,x,coins));

//         }

//     }

//     return num+1;
    
// }
int main()
{
   int n,x;
   cin>>n>>x;
   vector<int> coins;
   for(int i=0;i<n;i++)
   {
    int coin;
    cin>>coin;
    coins.push_back(coin);
   }
   vector<int> dp(x+1,1e9);
   dp[x]=0;
   for(int i=x-1;i>=0;i--)
   {
     int num=1e9;
    for(int j=0;j<n;j++)
    {
        if(i+coins[j]<=x)
        {
            num=min(num,dp[i+coins[j]]);
            
        }
    }
    if(num+1<1e9) dp[i]=num+1;
   }
    
    if(dp[0]>=1e9)cout<<"-1";
    else cout<<dp[0];


    return 0;
}