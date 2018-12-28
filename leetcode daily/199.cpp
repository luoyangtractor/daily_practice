//#include <iostream>
//#include <vector>
//using namespace std;
//
// struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
//
//
// class Solution {
// public:
//	 void dfs(TreeNode* root, int layer, vector<int>& ans)
//	 {
//		 if (layer > ans.size())ans.push_back(root->val);
//		 if (root->right != nullptr)dfs(root->right, layer + 1, ans);
//		 if (root->left != nullptr)dfs(root->left, layer + 1, ans);
//	 }
//	 vector<int> rightSideView(TreeNode* root)
//	 {
//		 vector<int> ans;
//		 if (root == nullptr) return ans;
//		 dfs(root, 1, ans);
//		 return ans;
//	 }
// };
