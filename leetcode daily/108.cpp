///**
//* Definition for a binary tree node.
//* struct TreeNode {
//*     int val;
//*     TreeNode *left;
//*     TreeNode *right;
//*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//* };
//*/
//class Solution {
//public:
//	void bisearch(TreeNode*& current_node, const vector<int>& num, int low, int high)
//	{
//		if (low <= high)
//		{
//			int middle = (low + high) / 2;
//
//			current_node = new TreeNode(num[middle]);
//			//cout<<current_node->val<<endl;
//			bisearch(current_node->left, num, low, middle - 1);
//			bisearch(current_node->right, num, middle + 1, high);
//		}
//
//	}
//
//	TreeNode * sortedArrayToBST(vector<int>& nums)
//	{
//		TreeNode* root;
//		if (nums.empty())return nullptr;
//		bisearch(root, nums, 0, nums.size() - 1);
//		return root;
//	}
//};