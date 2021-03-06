#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int, int [])

int main()
{
    int t;
	  cin>>t;
	  while(t--)
	{
		int n;
		cin>>n;
    		int arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
      
    cout<<longestSubsequence(n, arr)<<endl;
  }
}

int ceilb(int lis[],int a,int b,int x)
{
    while(b>a)
    {
        int n=(a+b)/2;
        if(lis[n]>=x)
        b=n;
        
        else
        a=n+1;
        
    }
    return b;
}

int longestSubsequence(int n, int arr[])
{
   int lis[n];
   int len=1;
   lis[0]=arr[0];
   
   for(int i=1;i<n;i++)
   {
       if(arr[i]>lis[len-1])
       {
           lis[len]=arr[i];
           len++;
       }
       
       else
       {
           int k=ceilb(lis,0,len-1,arr[i]);
           lis[k]=arr[i];
       }
   }
   
   return len;
}
