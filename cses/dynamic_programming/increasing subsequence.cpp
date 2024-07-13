#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int a;
    cin>>a;
    arr.push_back(a);
    for(int i=1;i<n;i++)
    {
        int b;
        cin>>b;
       auto x= lower_bound(arr.begin(),arr.end(),b);
       if(arr.end()-x)
       {
        *x=b;
        
       }else arr.push_back(b);
        
    }
    cout<<arr.size();

   
   
    return 0;
}