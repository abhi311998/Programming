#include<bits/stdc++.h>
using namespace std;
long long m=1000000007;
vector<long long> mulMatrix(vector<long long> a,vector<long long> b)
{
    vector<long long> c(4,0);
    c[0]=(a[0]*b[0]+a[1]*b[2])%m;
    c[1]=(a[0]*b[1]+a[1]*b[3])%m;
    c[2]=(a[2]*b[0]+a[3]*b[2])%m;
    c[3]=(a[2]*b[1]+a[3]*b[3])%m;
    return c;
}
vector<long long> power(vector<long long> arr,long long n)
{
    if(n==1)
    {
        return arr;
    }
    else if(n%2==0)
    {
        vector<long long> a;
		a=power(arr,n/2);
	    return mulMatrix(a,a);
        //return power(a,n/2)*power(a,n/2)
    }
    else if(n%2!=0)
    {
        vector<long long> a;
		a=power(arr,n/2);
		a=mulMatrix(a,a);
        return mulMatrix(a,arr);
        //return power(a,n/2)*power(a,n/2)*a;
    }
}

int main()
 {
	//code
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    long long i,n;
	    cin>>n;
	    long long d[]={1,1,1,0};
	    vector<long long> arr(d,d+4);
	    arr=power(arr,n);
	//    arr=mulMatrix(arr,arr);
	    for(i=0;i<4;i++)
	    cout<<arr[i]<<ends;
	    cout<<endl;
	    
	}
	return 0;
}
