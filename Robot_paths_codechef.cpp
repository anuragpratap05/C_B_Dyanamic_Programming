# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main()
{
    int n,m,p;
    cin>>n>>m>>p;
    int dp[1001][1001]={0};
    for(int i=0;i<p;i++)
    {
        int x,y;
        cin>>x>>y;
        dp[x-1][y-1]=-1;
        
    }
    
    if(dp[0][0]==-1 or dp[n-1][m-1]==-1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        
    
    for(int i=0;i<m;i++)
    {
        if(dp[0][i]==-1)
        {
            break;
        }
        dp[0][i]=1;
      
    }
    
    for(int i=0;i<n;i++)
    {
        if(dp[i][0]==-1)
        {
            break;
        }
        dp[i][0]=1;
      
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(dp[i][j]==-1)
            {
                continue;
            }
            if(dp[i-1][j]!=-1)
            {
                dp[i][j]=dp[i-1][j]%MOD;
            }
            if(dp[i][j-1]!=-1)
            {
                dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
            }
        }
    }
    cout<<dp[n-1][m-1]<<endl;
    /*cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    }
}
