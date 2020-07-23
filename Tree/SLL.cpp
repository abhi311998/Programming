#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
		int data;
		class node *next;
};

int main()
{
	class node *start,*p,*p1;
	int c=1;
	while(c)
	{
		p=(class node*)malloc(sizeof(class node));
		cout<<"Enter the data: ";
		cin>>p->data;
		p->next=NULL;
		if(c==1)
		{
			start=p;
			c++;
		}
		else
		{
			p1->next=p;
		}
		p1=p;
		cout<<"Do you wnat to enter more data: ";
		cin>>c;
	}
	p=start;
	cout<<start->data<<" "<<start->next->data;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	return 0;
}
