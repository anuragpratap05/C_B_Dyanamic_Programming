# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int max_sub(int a[], int n)
{
    int dp[100]={0};
    
    if(a[0]>0)
    {
        dp[0]=a[0];
    }
    else
    {
        dp[0]=0;
    }
    
    int maxsofar=0;
    for(int i=1;i<=n;i++)
    {
        int sa=dp[i-1]+a[i];
        if(sa>0)
        {
            dp[i]=sa;
            maxsofar=max(dp[i],maxsofar);
        }
        else
        {
            dp[i]=0;
        }
    }
    return maxsofar;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<max_sub(a,n-1);

}
