#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int totalSum=(n*(n+1))/2;
    if(totalSum%2==1){
    cout<<"0";
    return 0;}
    totalSum=totalSum/2;
    vector<vector<long long int>> dp(n+1,vector<long long int>(totalSum+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    { 
        dp[i][0]=1;
        for(int sum=1;sum<=totalSum;sum++)
        {
           
           dp[i][sum]=dp[i-1][sum];
           if(sum>=i) {dp[i][sum]+=dp[i-1][sum-i];
           dp[i][sum]%=1000000007;}
        }
    }
        
    cout<<dp[n-1][totalSum];// we are not including n because in all this the nth will be on opposite or second set
    return 0;
}