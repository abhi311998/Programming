#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *start,*p1,*p;
	p1=NULL;
	int c=0,t=1;
	while(t>0)
	{
		p=(struct node *)malloc(sizeof(struct node));
		cout<<"Enter the data: ";
		cin>>p->data;
		p->next=NULL;
		if(c==0)
		{
			start=p;
		    c++;
		}
		else
		{
			p1->next=p;
		}
		p1=p;
		cout<<"Enter 1 to store more data else enter 0: ";
		cin>>t;
	}
	p=start;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	return 0;
}
