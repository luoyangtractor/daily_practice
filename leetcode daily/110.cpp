//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//
//	int get_depth(TreeNode* node)
//	{
//		if (node == nullptr) return 0;
//		// cout<<node->val<<endl;
//		if (node->left == nullptr&&node->right == nullptr)return 1;
//		int left = 0, right = 0;
//		if (node->left != nullptr)left = 1 + get_depth(node->left);
//		if (node->right != nullptr)right = 1 + get_depth(node->right);
//		return max(left, right);
//	}
//	bool judge(TreeNode* root)
//	{
//		if (root->left == nullptr&&root->right == nullptr)return true;
//		if (abs(get_depth(root->left) - get_depth(root->right)) > 1)	return false;
//		if (root->left != nullptr && !isBalanced(root->left))return false;
//		if (root->right != nullptr && !isBalanced(root->right))return false;
//		return true;
//	}
//	bool isBalanced(TreeNode* root)
//	{
//		if (root == nullptr)return true;
//		return judge(root);
//	}
//};