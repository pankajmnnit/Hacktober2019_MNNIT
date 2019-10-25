/*
C program to create Binary Search Tree using Recursive and Non recursive way in displaying its inorder traversal 

*/

#include<stdio.h>
#include<stdlib.h>

struct bstnode
{
	int data;
	struct bstnode *left;
	struct bstnode *right;
};


struct bstnode* createNode(int d)
{
	struct bstnode *n;
	n=(struct bstnode*)malloc(sizeof(struct bstnode));
	n->left=NULL;
	n->right=NULL;
	n->data=d;
	return n;
}

/*
void createBST(struct bstnode **root,int item)  //Non recursive way to create BST
{
	struct bstnode *p,*c;
	struct bstnode *temp;
	temp=createNode();
	temp->data=item;
	
	if(*root==NULL)
	*root=temp;
	
	else
	{
		p=NULL;
		c=*root;
		while(c!=NULL)
		{
			p=c;
			if(temp->data<c->data)
			c=c->left;
			
			else
			c=c->right;
		}
		
	if(temp->data<p->data)
	p->left=temp;
	
	else
	p->right=temp;	
	}

}
*/
struct bstnode* createBST(struct bstnode *root,int item)//Recursive way to create BST
{

	if(root==NULL)
	{		
		return createNode(item);
	}
	
	if(item<root->data)
	{
	root->left=createBST(root->left,item);
	}
	
	else 
	{
	root->right=createBST(root->right,item);
	}
	

    return root;
	
}


void inorder(struct bstnode *root) //Inorder traversal
{
	
	if(root)
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}


int main()
{
	struct bstnode *root=NULL;
	
	/*	
	//Using Iterative method (Non recursive)
	printf("\nDisplaying the inorder traversal of the inserted elements in BST\n");
	createBST(&root,53);
	createBST(&root,93);
	createBST(&root,21);
	createBST(&root,6);
	createBST(&root,43);
	createBST(&root,10);
	createBST(&root,2);
	createBST(&root,100);
	createBST(&root,56);
	
	inorder(root);
	*/
	
	
	//Using Recursive function
	printf("\nDisplaying the inorder traversal of the inserted elements in BST\n");
	root=createBST(root,53);
	createBST(root,93);
	createBST(root,21);
	createBST(root,6);
	createBST(root,43);
	createBST(root,10);
	createBST(root,2);
	createBST(root,100);
	createBST(root,56);
	
	inorder(root);
	
	return 0;
}
