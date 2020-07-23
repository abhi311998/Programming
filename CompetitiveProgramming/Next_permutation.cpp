#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string str;
		int i,n=str.length();
		bool ans=next_permutation(str,str+n);
		if(ans==true) cout<<str;
		else cout<<"no answer";
		cout<<endl;
	}
}
