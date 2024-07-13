#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    
   long long int zero=1;
   long long int one=1;
    for(int i=n-2;i>=0;i--)
    {
       long long int dp[2];
        for(int j=0;j<=1;j++)
        {
            if(j==1) dp[j]=4*one+zero;
            else dp[j]=2*zero+one;
            
        }
        one =dp[1];
        zero=dp[0];
        one=one%1000000007;
        zero=zero%1000000007;
    }
    int ans=(one +zero)%1000000007;
    cout<<ans<<endl;
}
return 0;
}