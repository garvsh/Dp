#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k) 
{
    int dp[k+1][n+1];
    
    for(int i=1;i<=n;i++)
    {
        dp[0][i]=0;
        dp[1][i]=1;
    }
    for(int i=2;i<=k;i++)
    dp[i][1]=i;
    
    for(int i=2;i<=k;i++)
    {
        for(int j=2;j<=n;j++)
        {
            dp[i][j]=INT_MAX;
            for(int x=1;x<=i;x++)
            {
                dp[i][j]=min(dp[i][j],1+max(dp[x-1][j-1],dp[i-x][j]));
            }
        }
    }
    return dp[k][n];
    
}

int main()
{
  int t,n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    cout<<eggDrop(n,k)<<endl;
  }
  return 0;
 }
