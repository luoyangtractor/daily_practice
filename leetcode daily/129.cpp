//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//
//struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	void dfs(TreeNode* current_node, int& ans, int current_val)
//	{
//		current_val *= 10;
//		current_val += current_node->val;
//		if (current_node->left == nullptr && current_node->right == nullptr)	ans += current_val;
//		else
//		{
//			if (current_node->left != nullptr) dfs(current_node->left, ans, current_val);
//			if (current_node->right != nullptr) dfs(current_node->right, ans, current_val);
//		}
//	}
//	int sumNumbers(TreeNode* root)
//	{
//		int ans = 0;
//		if (root == nullptr) return 0;
//		dfs(root, ans, 0);
//		return ans;
//	}
//};