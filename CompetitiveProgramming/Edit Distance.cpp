#include<bits/stdc++.h>
using namespace std;
int cost(string s1,string s2,int a,int b)
{
    
    //cout<<s1<<" "<<a<<" "<<s2<<" "<<b<<"\n";
    int dp[a+1][b+1]={0};
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            if(i==0) dp[i][j]=j; // that much have to be inserted to s1
            else if(j==0) dp[i][j]=i; // that much have to be deleted from s1
            else if(s1[i-1]==s2[j-1]) 
                dp[i][j]=dp[i-1][j-1];
            else
            {
                dp[i][j]=1+min(dp[i][j-1], // Insertion
                                min(dp[i-1][j], // deletion
                                 dp[i-1][j-1])); // modify
            }
        }
    }
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++) cout<<dp[i][j]<<" ";
        cout<<"\n";
    }
    return dp[a][b];
}
int main()
 {
	//code
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    int a,b,i;
	    cin>>a>>b;
	    cin.ignore();
	    string s1,s2;
	    cin>>s1>>s2;
        cout<<s1<<" "<<a<<" "<<s2<<" "<<b<<"\n";
	    cout<<cost(s1,s2,a,b)<<"\n";
	    
	}
	return 0;
}
