#include<bits/stdc++.h>
using namespace std;
 int f(int i, int j, string& a ,string& b, vector<vector<int>>& dp)
{

  if(i==a.size()&&j==b.size()) return 0;
  if(i==a.size())return b.size()-j;
    if(j==b.size())return a.size()-i;
    if(dp[i][j]!=-1)return dp[i][j];
    int x=1e9;
    if(a[i]==b[j])
    {
        x=min(x,f(i+1,j+1,a,b,dp));
    }
         
        x=min(min(x,f(i+1,j,a,b,dp)+1)
            ,
            min(f(i+1,j+1,a,b,dp)+1,f(i,j+1,a,b,dp)+1)
            
        );
    return dp[i][j]=x;
}
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    
   vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
 cout<<f(0,0,a,b,dp);
 return 0;
    
}