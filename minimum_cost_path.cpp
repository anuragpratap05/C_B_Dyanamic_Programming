# C_B_Dyanamic_Programming
#include<bits/stdc++.h>
using namespace std;

int help(int a[][100],int n)
{
     int dp[n][n];
     
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(i==0 and j==0)
             {
                 dp[0][0]=a[0][0];
             }
             else if(i==0)
             {
                 dp[i][j]=a[i][j]+dp[i][j-1];
             }
             else if(j==0)
             {
                 dp[i][j]=a[i][j]+dp[i-1][j];
             }
             else
             {
                 dp[i][j]=min(dp[i][j-1],dp[i-1][j])+a[i][j];
             }
         }
     }
     return dp[n-1][n-1];
}


int main()
{
    int n;
    cin>>n;
    int a[100][100];
    //int dp[100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<help(a,n)<<endl;

}
