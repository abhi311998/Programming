#include<bits/stdc++.h>
using namespace std;

class list
{
	public:
		int data;
		list *next;
};


int main()
{
	int i=0;
	char ch;
	list *start,*p,*p1;
	do
	{
		cout<<"Enter the data: ";
		cin>>p->data;
		p->next=NULL;
		if(i==0)
		{
			start=p;
			i++;
		}
		else
		{
			p1->next=p;
		}
		p1=p;
	}while(ch=='Y'||ch=='y');
	p=start;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	return 0;
}
