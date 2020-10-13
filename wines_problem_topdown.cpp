# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int profit(int wines[],int i, int j,int y,int dp[][100])
{
    if(i>j)
    {
        return 0;
    }
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }
    
    int op1=wines[i]*y+profit(wines,i+1,j,y+1,dp);
    int op2=wines[j]*y+profit(wines,i,j-1,y+1,dp);
    
    int ans=max(op1,op2);
    dp[i][j]=ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int wines[n];
    int y=1;
    for(int i=0;i<n;i++)
    {
        cin>>wines[i];
    }
    int dp[100][100]={0};
    
    cout<<profit(wines,0,n-1,y,dp);
}
