#include <iostream>
#include <cstring>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	//code
	short t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    vector <char> s3;
	    short i,n1,n2,m;
	    n1=s1.length();
	    n2=s2.length();
	    m=(n1<=n2?n1:n2);
	    for(i=0;i<m;i++)
	    {
	        s3.push_back(s1[i]);
	        s3.push_back(s2[i]);
	    }
	    if(n1>n2)
	    {
	        while(i<n1)
	        {
	            s3.push_back(s1[i]);
	            i++;
	        }
	    }
	    else
	    {
	        while(i<n1)
	        {
	            s3.push_back(s1[i]);
	            i++;
	        }
	    }
	    m=s3.size();
	    for(i=0;i<m;i++)
	    cout<<s3[i];
	    cout<<endl;
	}
	return 0;
}
