#include<bits/stdc++.h>
using namespace std;

long long countWays(int)

int main()
{
    int t;
	  cin>>t;
	  while(t--)
	{
		int n;
		cin>>n;
    cout<<countWays(n)<<endl;
  }
}

long long countWays(int m){
    int arr[m+1];
    
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    
    for(int i=3;i<=m;i++)
    {
        if(i%2==0)
        arr[i]=arr[i-1]+1;
        
        else
        arr[i]=arr[i-1];
    }
    
    return arr[m];
}
