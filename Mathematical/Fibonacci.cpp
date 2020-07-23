//Fibonacci Series using Recursion
#include<iostream>
using namespace std;
int fib(int n)
{
   if (n == 1) return n;
   else if(n==2) return 2;   
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n;
  	cin>>n;
  	cout<<fib(n)<<"\n";
  }
}

