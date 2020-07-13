#include<bits/stdc++.h>
using namespace std;

int lcs(int, int, string, string)

int main()
{
    int t;
	  cin>>t;
	  while(t--)
	{
		string s1,s2;
		cin>>x>>y;
    cin>>s1>>s2;
     
    cout<<lcs(x ,y,s1 ,s2)<<endl;
  }
}

int lcs(int x, int y, string s1, string s2){
    
    int arr[x+1][y+1];
    
    for(int i=0;i<=x;i++)
    {
        arr[i][0]=0;
    }
    for(int i=0;i<=y;i++)
    {
        arr[0][i]=0;
    }
    
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(s1[i-1]==s2[j-1])
            arr[i][j]=arr[i-1][j-1]+1;
            
            else
            arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
        }
    }
    return arr[x][y];
}
