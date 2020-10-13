# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int n,int k,int a[],int dp[])
{
    if(k==0)
    {
        return 0;
    }
    
    if(dp[k]!=0)
    {
        return dp[k];
    }

    //int sa1=INT_MAX;
    //int sa2=INT_MAX;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {   
        if(k>=a[i])
        {
            int sa1=help(n,k-a[i],a,dp);
            ans=min(ans,sa1+1);
        }
        //sa2=help(n-1,k,a);
        //ans=min(sa1,sa2)+1;
    }
    
    //int ans=min(sa1,sa2)+1;
    dp[k]=ans;
    return ans;
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    int dp[1000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    
    cout<<help(n,k,a,dp);
}
