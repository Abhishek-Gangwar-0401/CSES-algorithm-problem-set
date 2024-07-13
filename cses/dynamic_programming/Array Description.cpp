#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n,m;
 cin>>n>>m;
 vector<int> arr(n);
 for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
 vector<vector<long>> dp(n,vector<long>(m+1,0));
  
  for(int i=0;i<=m;i++)
  {
    if(arr[0]==0||arr[0]==i)
     {
       dp[0][i]=1;
      }
   }

 for(int i=1;i<n;i++)
  {
    for(int j=1;j<=m;j++)
      {
	if(arr[i]!=0&&j!=arr[i])
	   {
		dp[i][j]=0;
		continue;
	    }
        if(j-1>0)dp[i][j]+=dp[i-1][j-1];
        dp[i][j]%=1000000007;
        if(j+1<=m)dp[i][j]+=dp[i-1][j+1];
        dp[i][j]%=1000000007;
                  dp[i][j]+=dp[i-1][j];
		 dp[i][j]%=1000000007;
       }
  }
  long long ans=0;
  for(int i=1;i<=m;i++)
  {
    ans+=dp[n-1][i];
    ans%=1000000007;
   }
   cout<<ans;
 return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int f(int i, vector<int>& arr, int prev, int& m, vector<vector<int>>& dp)
// {
//     if(i>=arr.size())return 1;
//     if(arr[i]!=0&& abs(arr[i]-prev)<=1)return f(i+1,arr,arr[i],m,dp);
//     if(arr[i]!=0)return 0;
    
//     if(dp[i][prev]!=-1)return dp[i][prev];
//     long long ans=0;
//    for(int k=-1;k<2;k++)
//     {
       
//         if(prev+k<=m&& prev+k>0) ans+= f(i+1,arr,prev+k,m,dp);
//     }
//         ans%=1000000007;
        
//         return ans;

// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int j=0;
//     int x=arr[0];
//     while(j<n&&x==0)
//     {
//         x=arr[j];
//         j++;
        
//     }
//     vector<vector<int>> dp(n,vector<int>(m+1,-1));
//     if(arr[0])cout<<f(1,arr,arr[0],m,dp);
//     else 
//     {
//         long long ans=0;
        
//             for(int i=1;i<=m;i++)
//             {
//                     ans+=f(1,arr,i,m,dp);
//                     ans%=1000000007;
//             }
//             cout<<ans;
        
//      }
        
    
//     return 0;
// }