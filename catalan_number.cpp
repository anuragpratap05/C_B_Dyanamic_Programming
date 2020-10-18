# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int n,int dp[])
{
    
    if(n==0)
    {
        return 1;
    }
    
    if(n==1)
    {
        return 1;
    }
    
    if(dp[n]!=0)
    {
        return dp[n];
    }
    
    int sa=0;
    for(int i=2;i<=n;i++)
    {
        sa+=help(i-1,dp)+help(n-i,dp);
        dp[n]=sa;
    }
    //dp[n]=sa;
    return sa;
}

int main()
{
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<help(n,dp);

}
