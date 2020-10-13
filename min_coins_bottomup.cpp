# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int a[], int n, int k)
{
    int dp[100]={0};
    for(int i=1;i<=k;i++)
    {
        dp[i]=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(a[j]<=i)
            {
                int sa=dp[i-a[j]];
                dp[i]=min(dp[i],sa+1);
            }
        }
        
    }
    return dp[k];
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
    int k;
    cin>>k;
    
    cout<<help(a,n,k);
    
}
