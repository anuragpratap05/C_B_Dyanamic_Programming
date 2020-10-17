# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    int dp[n]={1};
    for(int i=1;i<n;i++)
    {
        //dp[i]=1;
        int ans=INT_MIN;
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                int c_ans=dp[j];
                ans=max(c_ans,ans);
            }
        }
        dp[i]=ans+1;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    int lis=0;
    for(int i=0;i<n;i++)
    {
        lis=max(lis,dp[i]);
    }
    cout<<lis;

}
