#include<bits/stdc++.h>
using namespace std;

struct tree
{
	int data;
	struct tree *lc;
	struct tree *rc;
};
struct tree *root,*p1;

struct tree *getNode()
{
	p1=(struct tree *)malloc(sizeof(struct tree));
	return p1;
}
void buildTree(struct tree *p)
{
	char ch;
	if(p!=NULL)
	{
		cout<<"Enter the data: ";
		cin>>p->data;
		cout<<"Is the current node with data "<<p->data<<" has a left sub-tree? (Y/N) ";
		cin>>ch;
		if(ch=='Y'||ch=='y')
		{
			p1=getNode();
			p->lc=p1;
			buildTree(p1);
		}
		else
		{
			p->lc=NULL;
		}
		cout<<"Is the current node with data "<<p->data<<" has a right sub-tree? (Y/N) ";
		cin>>ch;
		if(ch=='Y'||ch=='y')
		{
			p1=getNode();
			p->rc=p1;
			buildTree(p1);
		}
		else
		{
			p->rc=NULL;
		}
	}
}

void visit(struct tree *p)
{
	cout<<p->data;
}
void inorder(struct tree *p)
{
	if(p!=NULL)
	{
		inorder(p->lc);
		visit(p);
		inorder(p->rc);
	}
}
void preorder(struct tree *p)
{
	if(p!=NULL)
	{
		visit(p);
		preorder(p->lc);
		preorder(p->rc);
	}
}
void postorder(struct tree *p)
{
	if(p!=NULL)
	{
		postorder(p->lc);
		postorder(p->rc);
		visit(p);
	}
}

struct tree *searchTree(struct tree *p,int key)
{
	if(p!=NULL)
	{
		if(p->data==key) return p;
		else
		{
			if(p->lc!=NULL)
				return searchTree(p->lc,key);	
			else if(p->rc!=NULL)
				return searchTree(p->rc,key);
			else 
				return 0;	
		}	
	}
}

void insert(struct tree *p)
{
	char ch;
	if(p==NULL)
	{
		cout<<"Unsuccesful search. No insertion possible.\n";
		exit(0);
	}
	if(p->lc==NULL || p->rc==NULL)
	{
		cout<<"Do you want to insert it as a left or right child? (L/R) ";
		cin>>ch;
		if(ch=='L'||ch=='l')
		{
			if(p->lc==NULL)
			{
				p1=getNode();
				cout<<"Enter the data to be inserted: ";
				cin>>p1->data;
				p1->lc=p1->rc=NULL;
				p->lc=p1;
			}
			else
			{
				cout<<"Insertion as left child is not possible.\n";
				exit(0);
			}
		}
		else
		{
			if(p->rc==NULL)
			{
				p1=getNode();
				cout<<"Enter the data to be inserted: ";
				cin>>p1->data;
				p1->lc=p1->rc=NULL;
				p->rc=p1;
			}
			else
			{
				cout<<"Insertion as right child is not possible.\n";
				exit(0);
			}			
		}
	}
}

void func(int i)
{
	int key;
	switch(i)
	{
	case 1: //Inorder Traversal
			cout<<"\nInorder Traversal: ";
			inorder(root);
			break;
	case 2: //Preorder Traversal
			cout<<"\nPreorder Traversal: ";
			preorder(root);
			break;
	case 3: //Postorder Traversal
			cout<<"\nPostorder Traversal: ";
			postorder(root);
			break;
	case 4: //Search an element with a given key
			cout<<"Enter the data to be searched: ";
			cin>>key;
			searchTree(root,key);
			p1=searchTree(root,key);
			if(p1!=NULL)
				cout<<"Search is successful";
			else
				cout<<"Unsuccessful search";
			break;
	case 5: //Inserting an element after the node with data = key
			cout<<"Enter the key after which new node has to be inserted: ";
			cin>>key;
			p1=searchTree(root,key);
			insert(p1);	
			break;	
	default: cout<<"Choice taken is not matching..\n";
			break;		
	}
}

int main()
{
	int k;
	char ch;
	cout<<"ROOT NODE\n";
	root=getNode();
	buildTree(root);
	cout<<"Choose number according to your choice.\n\
			1 for Inorder Traversal.\n\
			2 for Preorder Traversal.\n\
			3 for Postorder Traversal.\n\
			4 for Searching an element.\n\
			5 for Inserting an element as a leaf node.\n";
	do
	{
		cout<<"Enter your choice: ";	
		cin>>k;
		func(k);
		cout<<"\nDo you want to perform more operation? (Y/N) ";
		cin>>ch;	
	}while(ch=='Y'||ch=='y');
	
	return 0;	
}
