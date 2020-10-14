# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int n,int k,int dp[])
{
    if(n==0)
    {
        return 1;
    }
    
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ways=0;
    for(int i=1;i<=k;i++)
    {
        if(n-i>=0)
        {
            ways+=help(n-i,k,dp);
        }
    }
    dp[n]=ways;
    return ways;
}


int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int dp[100]={0};
    cout<<help(n,k,dp)<<endl;
    return 0;
}
