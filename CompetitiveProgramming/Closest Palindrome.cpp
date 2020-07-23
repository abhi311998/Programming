#include <stdio.h>
int checkPalindrome(long long n)
{
   // printf("%lld\n",n);
    long long m,sum=0;
    m=n;
    while(n!=0)
    {
        sum=sum*10 + n%10;
        n=n/10;
    }
    
    if(m==sum) return 1;
    else return 0;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long n,i;
	    scanf("%lld",&n);
	    if(checkPalindrome(n)==1)
	    {
	        printf("%lld",n);
	    }
	    else
	    {
	        for(i=1;i<n;i++)
	        {
	            if(checkPalindrome(n-i)==1)
	            {
	                printf("%lld",n-i);
	                break;
	            }
	            if(checkPalindrome(n+i)==1)
	            {
	                printf("%lld",n+i);
	                break;
	            }
	        }
	    }
	    printf("\n");
	}
	return 0;
}
