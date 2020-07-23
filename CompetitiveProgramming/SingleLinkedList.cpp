#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *start,*p,*p1;
	p1=NULL;
	int c=1,i=0;
	while(c==1)
	{
		p=(struct node *)malloc(sizeof(struct node));
		cout<<"Enter the data: ";
		cin>>p->data;
		p->next=NULL;
		cout<<"32***";
		p1->next=p;
		cout<<"33***";
		if(i==0)
		{
			start=p;
			i++;
		}
		p1=p;
		cout<<"Do you want to enter more numbers: ";
		cin>>c;
	}
	p=start;
	while(p=NULL)
	{
		cout<<p->data<<"  ";
		p=p->next;
	}
	return 0;
}
