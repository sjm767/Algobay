//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int maxDepth(TreeNode *root);
//int main() {
//	TreeNode *temp;
//	TreeNode *current;
//
//	TreeNode *root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//
//	temp = new TreeNode(4);
//	current = root;
//	current = current->left;
//	current->left = temp;
//	current = current->left;
//
//	temp = new TreeNode(5);
//
//	current->left = temp;
//	current = current->left;
//
//	int result = maxDepth(root);
//
//	return 0;
//}
//int maxDepth(TreeNode *root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//
//	if (root->left != NULL)
//	{
//		return maxDepth(root->left);
//	}
//	if (root->right != NULL)
//	{
//		return maxDepth(root->right);
//	}
//
//	return 1+max(maxDepth(root->left),maxDepth(root->right));
//}