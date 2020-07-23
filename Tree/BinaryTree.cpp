//Binary Tree
#include<iostream>
using namespace std;

int tree[100]={0};

void buildTree(int index)
{
	char ch;
	if(index!=0)
	{
		cout<<"Enter the data: ";
		cin>>tree[index];
		cout<<"Is current node with data "<<tree[index]<<" has left sub-tree? (Y/N) ";
		cin>>ch;
		if(ch=='Y'||ch=='y')
			buildTree(2*index);
		else
			buildTree(0);
		cout<<"Is current node with data "<<tree[index]<<" has right sub-tree? (Y/N) ";
		cin>>ch;
		if(ch=='Y'||ch=='y')
			buildTree(2*index+1);
		else
			buildTree(0);	
	}
}

int main()
{
	char ch;
	cout<<"Do you want to create tree? (Y/N) ";
	cin>>ch;
	if(ch=='Y'||ch=='y')
		buildTree(1);
	for(int i=0;i<100;i++)
		cout<<tree[i]<<" ";
}
