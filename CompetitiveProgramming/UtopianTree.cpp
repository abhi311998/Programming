#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i;
		int H;
		H=1;                        //Initial height of tree = 1 metre
		cin>>n;
		if(n==0) cout<<1<<"\n";
		else
		{
			for(i=1;i<=n;i++)
			{
				if(i%2!=0)
					H=2*H;
				else
					H=H+1;
			}
			cout<<H<<"\n";	
		}
		
	}
}
