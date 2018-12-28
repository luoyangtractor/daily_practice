#include <iostream>
#include <string>
#include <vector>
#include <queue>
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
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ans;
		if (root == NULL) return ans;
		queue<TreeNode*> temp;
		TreeNode* t = nullptr;
		temp.push(root);
		vector<int> tt;
		while (!temp.empty())
		{
			tt.clear();
			int s = temp.size();
			for (int i = 0; i < s; i++)
			{
				t = temp.front();
				temp.pop();
				if (t->left != NULL)temp.push(t->left);
				if (t->right != NULL)temp.push(t->right);
				tt.push_back(t->val);
			}
			ans.push_back(tt);
		}
		return ans;
	}
};

*/