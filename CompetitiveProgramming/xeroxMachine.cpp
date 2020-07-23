#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,A,B;
        cin>>a>>b>>n;
        float x=(a*n)/(a+b);
        A=ceil(a*(n-x));
        B=ceil(b*x);
        cout<<x<<" "<<A<<" "<<B<<"\n";
        cout<<(A>B?A:B)<<"\n";
    }
	return 0;
}
