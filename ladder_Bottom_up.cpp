# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int n,int k)
{
    int dp[100]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        
        
            for(int j=1;j<=k;j++)
            {
                if(i-j>=0)
                dp[i]+=dp[i-j];
            }
        
    }
    return dp[n];
 
}


int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    
    cout<<help(n,k)<<endl;
    return 0;
}
