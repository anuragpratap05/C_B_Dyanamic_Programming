#include<bits/stdc++.h>
using namespace std;

int help(int n)
{
    if(n==1)
    {
        return 0;
    }
    
    int op1=INT_MAX;
    int op2=INT_MAX;
    int op3=INT_MAX;
    if(n%3==0)
    {
        op3=help(n/3);
    }
    if(n%2==0)
    {
        op2=help(n/2);
    }
    op1=help(n-1);
    int ans=min(min(op1,op2),op3)+1;
    return ans;
    
    
}

int main()
{
    int n;
    cin>>n;
    int out[100]={0};
    cout<<help(n);
}
