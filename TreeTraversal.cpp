//#include<iostream>
//using namespace std;
//
//struct TreeNode
//{
//	int n;
//	TreeNode *left;
//	TreeNode *right;
//
//	TreeNode(int num)
//	{
//		n = num;
//		left = NULL;
//		right = NULL;
//	}
//};
//void preorder(TreeNode *node);
//void inorder(TreeNode *node);
//void postorder(TreeNode *node);
//int main()
//{
//	TreeNode *root = new TreeNode(1);
//
//	TreeNode *left = new TreeNode(2);
//	TreeNode *right = new TreeNode(3);
//
//	root->left = left;
//	root->right = right;
//
//	left = new TreeNode(4);
//	right = new TreeNode(5);
//
//	TreeNode *temp = root->left;
//
//	temp->left = left;
//	temp->right = right;
//
//	preorder(root);
//	cout << endl;
//	inorder(root);
//	cout << endl;
//	postorder(root);
//	cout << endl;
//	return 0;
//}
//
//void preorder(TreeNode *node)
//{
//	if (node == NULL) 
//	{
//		return;
//	}
//
//	cout << node->n << " ";
//	preorder(node->left);
//	preorder(node->right);
//}
//
//void inorder(TreeNode *node)
//{
//	if (node == NULL)
//	{
//		return;
//	}
//
//	inorder(node->left);
//	cout << node->n << " ";
//	inorder(node->right);
//}
//void postorder(TreeNode *node)
//{
//	if (node == NULL)
//	{
//		return;
//	}
//
//	postorder(node->left);
//	postorder(node->right);
//	cout << node->n << " ";
//}