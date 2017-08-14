//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//int sumOfLeftLeaves(TreeNode *root);
//void inorder(TreeNode *root);
//int main()
//{
//	TreeNode *root = new TreeNode(3);
//
//	root->left = new TreeNode(9);
//	root->right = new TreeNode(20);
//
//	TreeNode *temp = root->right;
//
//	temp->left = new TreeNode(15);
//	temp->right = new TreeNode(7);
//
//	return 0;
//}
//
//int sumOfLeftLeaves(TreeNode *root)
//{
//	if (!root)
//	{
//		return 0;
//	}
//
//	if (root->left && !root->left->left && !root->left->right)
//	{
//		return root->left->val + sumOfLeftLeaves(root->right);
//	}
//
//	return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
//	return 0;
//}
//
