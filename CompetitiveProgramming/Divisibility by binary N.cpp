#include <iostream>
#include <vector>
using namespace std;

int main() {
	short t,m; //m=number with which divisibility has to be checked
	cin>>t>>m;
	cin.ignore();
	while(t--)
	{
		int i,rem=0;
	    string str;
	    cin>>str;
	    long long num;
	    int n=str.length();
	    for(i=0;i<n;i++)
	    {
	    	if(str[i]=='1') rem=(2*rem+1)%m;
	    	else rem=(2*rem)%m;
	    	cout<<rem<<" ";
		}
		cout<<endl<<"ANS= ";
		if(rem%m==0) cout<<1;
	    else cout<<0;
	    cout<<"\n";
	}
	return 0;
}
