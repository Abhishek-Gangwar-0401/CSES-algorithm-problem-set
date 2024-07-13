#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
        // long ans=0;
        // while(n>0)
        // {
        //     int maxi=0;
   
        // int m=n;
        // while(m>0)
        // {
        //    maxi=max(maxi,m%10);
        //    if(maxi==9)break;
        //    m/=10;
        // }
            
        //      n=n-maxi;
        //      ans++;
        // }
        // cout<<ans;
        
        vector<int> dp(n+1,1e7);
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            int m=i;
            int val=1e8;
            while(m>0)
            {
                int dig=m%10;
                val=min(val,dp[i-dig]);
                m=m/10;
            }
            dp[i]=val+1;
        }
        cout<<dp[n];
   return 0;
}