
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };


class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> ans;
		search(root, ans);
		return ans;
	}

	void search(TreeNode* root, vector<int>& ans)
	{
		if (root == nullptr) return;
		else
		{
			search(root->left, ans);
			ans.push_back(root->val);
			
			search(root->right, ans);
		}
		return;
	}
};
*/