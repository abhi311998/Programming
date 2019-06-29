/*
 Based on formula  C(n+1,r+1) = C(n,r) + C(n,r+1)
*/ 

#include<iostream>
#include<cmath>
using namespace std;
#define M 100
long long comb[M][M]={0};
long long m=int(pow(10,9))+7;
void nCr()
{
	int i,j;
	for(i=1;i<=M;i++)
	{
		comb[i][0]=comb[i][i]=1;
		comb[i][1]=i;
	}
	for(i=3;i<=M;i++)
	{
		for(j=2;j<i;j++)
		{
			if(comb[i][j]==0)
				comb[i][j]=((comb[i-1][j])+(comb[i-1][j-1]))%m;
		}
	}
}

int main()
{
	short i,t,j;
	cin>>t;	
	cin.ignore();
    nCr();
	while(t--)
	{
		int n,r;
		cin>>n>>r;
		cout<<comb[n][r]<<"\n";
	}
}
