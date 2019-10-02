//all the leftnodes of any nodes is smaller and right nodes are greater;
#include<iostream>
#include<queue>
using namespace std;
struct BstNode{
	int data;
	BstNode *left;
	BstNode *right;
};
BstNode * getNewNode(int data)
{
	BstNode *newNode = new BstNode();
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
BstNode * Insert(BstNode *root,int data)
{
		if(root==NULL)
			root=getNewNode(data);
		else if(data <= root->data)
			root->left=Insert(root->left,data);
		else 
			root->right=Insert(root->right,data);
		return root;
}
int index;
int getSolution(BstNode *root,int *arr,int find,int sum)
{
	if(root==NULL)
		return 0;
	sum=sum+root->data;
	arr[index++]=root->data;
	
	if(sum>find)
		return 0;
	int ans=(getSolution(root->left,arr,find,sum) || getSolution(root->right,arr,find,sum));
	if(ans==0)
		index--;
	if(sum==find)
		return 1;
	return ans;
}
int main()
{
	BstNode *root=NULL;
	root = Insert(root,15);
	root = Insert(root,10);	
	index=0;
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,17);
	root = Insert(root,8);
	root = Insert(root,12);
	vector<int> Vector;
	int arr[100],i;
	int a=getSolution(root,arr,23,0);
	cout<<a<<"\n";
	for(i=0;i<index;i++)
	{
		cout<<arr[i];
	}
		
}
