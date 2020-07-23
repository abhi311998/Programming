#include<bits/stdc++.h>
using namespace std;
int hamm_dist(string str1,string str2)
{
	int n=str1.length();
	string str3;
	int e=0,first=-1,second,i;
	for(i=0;i<n;i++)
	{
		str3[i]=str1[i]^str2[i];		
	/*	if(str1[i]!=str2[i])
		{
			if(e==0)
			{
				first=i;
				second=i;
				e++;
			}
			else
			{
				second=i;
			}	
		}*/	
	}
	cout<<str1<<" "<<str2<<" "<<second<<"    "<<first<<"    ";
	return (second-first+1);
}
int main()
{
	int min=INT_MAX,m,i,j,n,e=0,first,second;
	vector<string> v;
	cin>>m;
	cin.ignore();
	string str;
	for(i=0;i<m;i++)
	{
		getline(cin,str);
		v.push_back(str);
	}
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
			e=hamm_dist(v[i],v[j]);
			if(min>e) min=e;
			cout<<i<<" "<<j<<" "<<e<<" "<<min<<endl;
		}
	}
	cout<<min;
	
}
