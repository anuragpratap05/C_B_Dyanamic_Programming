# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int price[], int n,int dp[])
{
    if(n==0)
    {
        return 0;
    }
    
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int cut=i+1;
        int c_ans=price[i]+help(price,n-cut,dp);
        ans=max(ans,c_ans);
    }
    dp[n]=ans;
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    int dp[100]={0};
    
    cout<<help(price,n,dp);
}
