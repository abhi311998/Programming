{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	Node* node = new struct Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}
// Your are required to complete this function
int countSubtreesWithSumX(Node* root, int x);
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     map<int, Node*> m;
     int n;
     cin>>n;
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)root = parent;
        }
        else parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')parent->left = child;
        else parent->right = child;
        m[n2]  = child;
     }
     int x;
     cin>>x;
     cout << countSubtreesWithSumX(root, x)<<endl;
  }
  return 0;
}
// Contributed by: Hashit Sidhwa

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node {
	int data;
	struct Node *left, *right;
};
*/
// your are required to complete this function
// function should return the count of the number of 
// subtrees with Sum equal to X
int func(Node *root,int x,int &result)
{
    if(!root) return 0;
    int sumL,sumR,sum;
	sumL=func(root->left,x,result);
	sumR=func(root->right,x,result);
	sum=sumL+sumR+root->data;
	if(sum==x) result++;
	return sum;
}
int count=0;
int countSubtreesWithSumX(Node* root, int x)
{
	if (!root) return 0;
	int result=0;
	func(root,x,result);
	return result;
}
