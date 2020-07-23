#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long n,m,diff;
	    int i,k;
	    scanf("%lld %d",&n,&k);
	    long long arr[8]={0};
	    m=(n/7);
	    for(i=1;i<8;i++)
	    {
	        arr[i]+=m;
	    }
	/*    for(i=1;i<8;i++) 
	        printf("%lld ",arr[i]);
	    printf("\n");   */
	    diff=n-(m*7);
	    i=k;
	    printf("1 -> %d ",diff);
	    while(diff!=0 && i<8)
	    {
	        arr[i]+=1;
	        diff-=1;
	        i+=1;
	    }
	    printf("::  2-> %d ",diff);
	    if(diff!=0)
	    {
	        i=1;
	        while(diff!=0 && i<8)
	        {
	            arr[i]+=1;
	            diff-=1;
	            i+=1;
	        }
	    }
	    printf("::  3-> %d \n",diff);
	    for(i=1;i<8;i++) 
	        printf("%lld ",arr[i]);
	    printf("\n");     
	}
	return 0;
}
