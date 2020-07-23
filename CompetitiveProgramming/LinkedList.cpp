#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *getNode(int data)
{
	Node *p=(struct Node *)malloc(sizeof(struct Node));
	p->data=data;
	p->next=NULL;
	return p;
}

Node *appendNode(Node *head,Node *node)
{
	Node *p=head;
	while(p!=NULL)
	{
		p=p->next;
	}
	p->next=node;
	return head;
}

void print(Node *head)
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main()
{
	int data;
	char ch;
	struct Node *head=NULL;
	
	do
	{
		cout<<"Enter the element: ";
		cin>>data;
	//	getNode(data);
		head=appendNode(head,getNode(data));
		cout<<"Do you want to add more ??";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	print(head);
	return 0;
}
