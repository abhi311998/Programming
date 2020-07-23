#include <stdio.h>
int searchMax(int arr[],int l,int x)
{
    int loc,max=arr[l];
    for(int i=l;i<=l+x;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            loc=i;
        }
    }
    return loc;
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,flag=0,count=1,jump=0,max;     // jump is to give number of jumps till the interval; count is to take measure that we have reached the last or not
	    scanf("%d",&n);
	    
	    int arr[n+1];
	    for(i=1;i<n+1;i++)
	        scanf("%d",&arr[i]);
	    
		i=1;     
	    while(count<n && i<n+1)
	    {
	        if(arr[i]==0) 
	        {
	            flag=1;
	            break;
	        }
	        max=searchMax(arr,i,arr[i]-1);
	        printf("%d %d ::: ",i,arr[max]);
	        while(arr[max]!=arr[i] && i<n)
	        {
	            jump++;
	            i=max-i;
	        //    count+=(max-i);
	            max=searchMax(arr,i,arr[i]-1);
	        }
	    //    count+=arr[max];
	        jump++;
	        i+=arr[max];
	        printf("%d %d\n",count,jump);
	    }
	    if(flag==1) printf("%d\n",-1);
	    else printf("%d\n",jump);
	}
	return 0;
}
