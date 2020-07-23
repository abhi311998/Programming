#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
}*start,*p1,*p;

int main()
{
	int i=0;
	char ch;
	do
	{
		cout<<"Enter the data: ";
		cin>>p->data;
		p->next=NULL;
		if(i==0)
		{
			start=p;
		}
		else
		{
			p1->next=p;
		}
		p1=p;
		cout<<"Do you want to enter more data? (Y/N) ";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	p=start;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	return 0;
}
