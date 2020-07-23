#include<iostream>
using namespace std;
string func(int m)
{
	switch(m)
	{
		case 1: return "one";
		case 2: return "two";
		case 3: return "three";
		case 4: return "four";
		case 5: return "five";
		case 6: return "six";
		case 7: return "seven";
		case 8: return "eight";
		case 9: return "nine";
		case 10: return "ten";
		case 11: return "eleven";
		case 12: return "twelve";
		case 13: return "thirteen";
		case 14: return "fourteen";
		case 15: return "fifteen";
		case 16: return "sixteen";
		case 17: return "seventeen";
		case 18: return "eighteen";
		case 19: return "nineteen";
		case 20: return "twenty";
		case 30: return "thirty";
		case 40: return "forty";
		case 50: return "fifty";
		case 60: return "sixty";
		case 70: return "seventy";
		case 80: return "eighty";
		case 90: return "ninety";										
	}
}
int main()
{
	short T;
	cin>>T;
	while(T--)
	{
		short n,th,h,t,o;
		cin>>n;
		
		o=n%10;
		n=n/10;
		t=n%10;
		n=n/10;
		h=n%10;
		n=n/10;
		th=n%10;
	//	cout<<th<<h<<t<<o;
		if(th==0 && h==0 && t==0)     //One digit number
		{
			cout<<func(o);
		}
		else if(th==0 && h==0)          // Two digit number
		{
			if(o==0)
				cout<<func(t*10);
			else
			{
				if(t!=1)
					cout<<func(t*10)<<" "<<func(o);
				else
					cout<<func(t*10+o);	
			}
		}
		else if(th==0)             // Three digit number
		{
			cout<<func(h)<<" hundred ";
			if(t==0)
				cout<<"and "<<func(o);
			else if(t==1)
				cout<<"and "<<func(t*10+o);
			else if(t>=2)
				if(o!=0)
					cout<<"and "<<func(t*10)<<" "<<func(o);	
		}
		else
		{
			cout<<func(th)<<" thousand ";
			if(h==0)
			{
				if(t!=1)
					cout<<func(t*10)<<" "<<func(o);
				else
					cout<<func(t*10+o);
			}
			else
			{
				cout<<func(h)<<" hundred ";
				if(t!=1)
					cout<<func(t*10)<<" "<<func(o);
				else
					cout<<func(t*10+o);
			}
		}
		
		cout<<"\n";
	}
}
