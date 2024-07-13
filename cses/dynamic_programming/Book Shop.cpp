#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> prices(n);
    for(int i=0;i<n;i++)
    {
        int price;
        cin>>price;
        prices[i]=price;
    }
    vector<int> pages(n);
    for(int i=0;i<n;i++)
    {
        int page;
        cin>>page;
        pages[i]=page;
    }
    vector<int> dp(x+1,0);
    for(int i=n-1;i>=0;i--)
    {
        
        for(int j=0;j<=x;j++)
        {
            int num=0;
            if(j+prices[i]<=x)num=max(num,dp[j+prices[i]]+pages[i]);
            dp[j]=max(num,dp[j]);
            
        }
        
    
    }
    cout<<dp[0];
    return 0;
}