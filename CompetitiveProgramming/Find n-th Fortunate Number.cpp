#include <stdio.h>
#include <math.h>
int checkPrime(int n)
{
	printf("%d :: ",n);
    int i,q;
    q=sqrt(n);
    for(i=2;i<=q;i++)
    {
        if(n%i==0)
        {
        	printf(" %d  %d ",n,i);
            return 0;
        }
    }
    printf(" End ");
    return 1;
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	int pn[10]={2,3,5,7,11,13,17,19,23,29};
	while(t--)
	{
	    int n,m,prod=1,i;;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        prod=prod*pn[i];
	    }
	    m=2;
	    while(checkPrime(prod+m)!=1)
	    {
			m++;
	    }
	    printf("\nAns = %d\n",m);
	}
	return 0;
}
