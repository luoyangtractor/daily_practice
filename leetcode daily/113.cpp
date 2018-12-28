//#include <iostream>
//#include <vector>
//
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
//	void deep_search(vector<vector<int>>& ans, TreeNode* node, int sum, int temp_sum, vector<int> tmp_nodes)
//	{
//		temp_sum += node->val;
//		tmp_nodes.push_back(node->val);
//		//cout << node->val << "  " << temp_sum << endl;
//		if (node->left == nullptr&&node->right == nullptr)
//		{
//			if (temp_sum == sum)
//			{
//				ans.push_back(tmp_nodes);
//			}
//			return;
//		}
//
//		if (node->left != nullptr)
//		{
//			deep_search(ans, node->left, sum, temp_sum, tmp_nodes);
//		}
//		if (node->right != nullptr)
//		{
//			deep_search(ans, node->right, sum, temp_sum, tmp_nodes);
//		}
//		return;
//	}
//	vector<vector<int>> pathSum(TreeNode* root, int sum)
//	{
//		vector<vector<int>> ans;
//		if (root == nullptr) return ans;
//		deep_search(ans, root, sum, 0, vector<int>());
//		return ans;
//
//	}
//};