//#include  <iostream>
//
//using namespace std;
//
//struct TreeNode 
//{
//	int val;
//     TreeNode *left;
//    TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//
//	bool deep_search(TreeNode* node, int sum, int temp_sum)
//	{
//		temp_sum += node->val;
//		cout << node->val << "  " << temp_sum << endl;
//		if (node->left == nullptr&&node->right == nullptr)
//		{
//			if (temp_sum == sum) return true;
//			else return false;
//		}
//
//		if (node->left != nullptr)
//		{
//			if (deep_search(node->left, sum, temp_sum))return true;
//		}
//		if (node->right != nullptr)
//		{
//			if (deep_search(node->right, sum, temp_sum)) return true;
//		}
//		return false;
//	}
//	bool hasPathSum(TreeNode* root, int sum)
//	{
//		if (root == nullptr)
//		{
//			return false;
//		}
//		return deep_search(root, sum, 0);
//	}
//};