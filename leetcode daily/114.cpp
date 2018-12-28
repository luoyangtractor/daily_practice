//#include <iostream>
//
//using namespace std;
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
// TreeNode* parent;
// class Solution {
// public:
//	 void dfs(TreeNode*& node)
//	 {
//		 parent->left = nullptr;
//		 parent->right = node;
//		 TreeNode* tmp_left = node->left;
//		 TreeNode* tmp_right = node->right;
//		 parent = node;
//		 if (tmp_left != nullptr)
//		 {
//			 dfs(tmp_left);
//		 }
//		 if (tmp_right != nullptr)
//		 {
//			 dfs(tmp_right);
//		 }
//
//	 }
//	 void flatten(TreeNode*& root)
//	 {
//		 if (root == nullptr) return;
//		 TreeNode* new_root = new TreeNode(0);
//		 parent = new_root;
//		 dfs(root);
//	 }
// };