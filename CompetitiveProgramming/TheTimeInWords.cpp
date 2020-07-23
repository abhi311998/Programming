#include<bits/stdc++.h>
using namespace std;
string func(int n)
{
	if(n==1) return "one";
	else if(n==2) return "two";
	else if(n==3) return "three";
	else if(n==4) return "four";
	else if(n==5) return "five";
	else if(n==6) return "six";
	else if(n==7) return "seven";
	else if(n==8) return "eight";
	else if(n==10) return "ten";
	else if(n==11) return "eleven";
	else if(n==12) return "twelve";
	else if(n==13) return "thirteen";
	else if(n==14) return "fourteen";
	else if(n==16) return "sixteen";
	else if(n==17) return "seventeen";
	else if(n==18) return "eighteen";
	else if(n==19) return "nineteen";
	else if(n==20) return "twenty";
	else if(n==21) return "twenty one";
	else if(n==22) return "twenty two";
	else if(n==23) return "twenty three";
	else if(n==24) return "twenty four";
	else if(n==25) return "twenty five";
	else if(n==26) return "twenty six";
	else if(n==27) return "twenty seven";
	else if(n==28) return "twenty eight";
	else if(n==29) return "twenty nine";
}
int main()
{
	short hr,min;
	cin>>hr>>min;
	
	if(min==0)
	{
		cout<<func(hr)<<" o' clock";
	}
	else if(min==15)
	{
		cout<<"quarter past "<<func(hr);
	}
	else if(min==30)
	{
		cout<<"half past "<<func(hr);
	}
	else if(min==45)
	{
		if(hr==12) hr=0;
		cout<<"quarter to "<<func(hr+1);                      
	}
	else if((min>=1 && min<=14) || (min>=16 && min<=29))
	{
		if(min==1) cout<<func(min)<<" minute past "<<func(hr);
		else cout<<func(min)<<" minutes past "<<func(hr);
	}
	else if((min>=31 && min<=44) || (min>=46 && min<=59))
	{          
		if(hr==12) hr=0;
		if((60-min)==1) cout<<func(60-min)<<" minute to "<<func(hr+1);
		else cout<<func(60-min)<<" minutes to "<<func(hr+1); 
	}
	return 0;
}
