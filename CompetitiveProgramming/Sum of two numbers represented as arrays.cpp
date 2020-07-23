#include<bits/stdc++.h>
using namespace std;

int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		stack<int> s;
		int n,m,i,j,n1,n2,mid,sum;
		cin>>n1>>n2;
		vector<int> num1,num2;
		for(i=0;i<n1;i++)
		{
			cin>>m;
			num1.push_back(m);
		}	
		for(i=0;i<n2;i++)
		{
			cin>>m;
			num2.push_back(m);
		}	
		 
		reverse(num1.begin(),num1.end());
		reverse(num2.begin(),num2.end());
		n=(n1>=n2?n1:n2);
		m=(n1<n2?n1:n2);
		int carry=0;
		for(i=0;i<m;i++)
		{
			sum=num1[i]+num2[i]+carry;
			s.push(sum%10);
			carry=sum/10;
		}
		cout<<"i = "<<i<<endl;
		if(num1.size()==n)
		{
			while(i<n)
			{
				sum=num1[i]+carry;
				s.push(sum%10);
				carry=sum/10;
				i++;
			}
			while(carry!=0)
			{
				s.push(carry%10);
				carry=carry/10;
			}
		}
		else
		{
			while(i<n)
			{
				sum=num2[i]+carry;
				s.push(sum%10);
				carry=sum/10;
				i++;
			}
			while(carry!=0)
			{
				s.push(carry%10);
				carry=carry/10;
			}
		}
		while(!s.empty())
		{
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}
