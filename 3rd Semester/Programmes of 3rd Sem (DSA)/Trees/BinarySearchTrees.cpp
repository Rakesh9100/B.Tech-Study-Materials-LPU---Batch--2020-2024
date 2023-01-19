#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *leftChild;
	struct node *rightChild;
};
struct node *root = NULL;
void insert(int data)
{
	//creating a node
	//update its info part, left child and right child
	//attach that node to tree
	
	struct node *tempNode = (struct node*) malloc(sizeof(struct node));
	struct node *ptr;
	struct node *parent;

	tempNode->data = data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;

	if(root == NULL)
	{
		//tree is empty
		root = tempNode;
	}
	else
	{
		//tree is not empty
		ptr = root;
		parent = NULL;

		while(1)
		{
			parent = ptr;
			if(data < parent->data)
			{
				//goto left tree
				ptr = ptr->leftChild;
				if(ptr== NULL)
				{
					parent->leftChild = tempNode;
					return;
				}
			}
			else
			{
				//goto right tree
				ptr = ptr->rightChild;
				if(ptr == NULL)
				{
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
}
void pre_order_traversal(struct node* root)
{
	if(root != NULL)
	{
		printf("%d ",root->data);
		pre_order_traversal(root->leftChild);
		pre_order_traversal(root->rightChild);
	}
}
void inorder_traversal(struct node* root)
{
	if(root != NULL)
	{
		inorder_traversal(root->leftChild);
		printf("%d ",root->data);
		inorder_traversal(root->rightChild);
	}
}
void post_order_traversal(struct node* root)
{
	if(root != NULL)
	{
		post_order_traversal(root->leftChild);
		post_order_traversal(root->rightChild);
		printf("%d ", root->data);
	}
}
struct node* search(int data)
{
	struct node *ptr=root;
	while(ptr->data!=data)
	{
		if(ptr!=NULL)
		{
			if(data<ptr->data)
			{
				ptr=ptr->leftChild;
			}
			else
			{
				ptr=ptr->rightChild;
			}
		}
		if(ptr==NULL)
		{
			return ptr;
		}
	}
	return ptr;
}
struct node* minValueNode(struct node *n)
{
	struct node *ptr;
	ptr=root;
	while(ptr->leftChild!=NULL)
		ptr=ptr->leftChild;
	return ptr;
}
struct node* deleteNode(struct node *root,int item)
{
	if(root==NULL)
		return root;
	if(item<root->data)
		root->leftChild=deleteNode(root->leftChild,item);
	else if(item>root->data)
		root->rightChild=deleteNode(root->rightChild,item);
	else
	{
		if(root->leftChild==NULL)
		{
			struct node* temp=root->rightChild;
			free(root);
			return temp;
		}
		else if(root->rightChild==NULL)
		{
			struct node* temp=root->leftChild;
			free(root);
			return temp;
		}
		//node to be deleted has both children
		//finding minimum from right tree
		struct node *temp=minValueNode(root->rightChild);
		root->data=temp->data;
		root->rightChild=deleteNode(root->rightChild,temp->data);
	}
	return root;
}
int main() 
{
	int i;
	int array[7] = { 27, 14, 35, 10, 19, 31, 42 };
	for(i = 0; i < 7; i++)
		insert(array[i]);
	printf("\nPreorder traversal: ");
	pre_order_traversal(root);

	printf("\nInorder traversal: ");
	inorder_traversal(root);
	
	printf("\nPost order traversal: ");
	post_order_traversal(root);
	
	root=deleteNode(root,35);
	
	printf("\nInorder traversal: ");
	inorder_traversal(root);
	/*
	struct node *temp;
	temp=search(12);
	if(temp==NULL)
	{
		printf("\nElement not found");
	}
	else
	{
		printf("\nElement found %d",temp->data);
	}
	*/
return 0;
}
