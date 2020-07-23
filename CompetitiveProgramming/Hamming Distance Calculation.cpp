#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2,str3;
	getline(cin,str1);
	getline(cin,str2);
	int i,n,e=0,first,second;
	n=str1.length();
	
	
	for(i=0;i<n;i++)
	{
		if(str1[i]!=str2[i])
		{
			if(e==0)
			{
				first=i;
				e++;
			}
			else
			{
				second=i;
			}	
		}	
	}
	cout<<second<<" "<<first<<endl;
	cout<<second-first;
	
}
