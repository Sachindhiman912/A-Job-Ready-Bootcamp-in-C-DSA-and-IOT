#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node *right;
		
		node(int v)
		{
			data=v;
			left=NULL;
			right=NULL;
		}
		
		void preorder()
		{
			cout<<root->data;
			preorder(root->left);
			preorder(root->right);
		}
};

int main()
{
	node *root=new node(2);
	root->left=new node(4);
	root->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	root->right->right->left=new node(8);
	root->right->right->left->left=new node(10);
	root->right->right->left->right=new node(11);
	root->right->right->left->right->left=new node(12);
	root->right->right->right=new node(9);
}
