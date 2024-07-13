#include<bits/stdc++.h>
using namespace std;

// int f(int a, int b)
// {
  
//     if(a==b)return 0;
//      if(a==1)return b-1;
//     if(b==1)return a-1;
//     if(dp[a][b]!=-1)return dp[a][b];
    
//     int ans=1e8;
//    for(int i=1;i<b;i++)
//    {
//          ans=min(ans,1+f(a,b-i)+f(a,i));
//    }
       
//     for(int i=1;i<a;i++)
//     {
//         ans=min(ans,1+f(i,b)+f(a-i,b));
//     }
//     return dp[a][b]= ans;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    vector<vector<int>> dp;
    dp.resize(a+1,vector<int>(b+1,0));
    for(int i=1;i<=a;i++)
    {
        dp[i][1]=i-1;
        
    }
    for(int i=1;i<=b;i++)
    {
         dp[1][i]=i-1;
    }
    for(int x=1;x<=a;x++)
    {
        for(int y=1;y<=b;y++)
        {
            if(x==y)continue;
            int ans=1e8;
            for(int i=1;i<y;i++)
            {
               ans=min(ans,1+dp[x][y-i]+dp[x][i]);
             }
       
            for(int i=1;i<x;i++)
            {
             ans=min(ans,1+dp[i][y]+dp[x-i][y]);
            }
            dp[x][y]= ans;
           
        }
    }
   
   cout<<dp[a][b];
  return 0;
}