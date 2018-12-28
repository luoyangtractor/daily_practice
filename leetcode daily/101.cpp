
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
	bool isSymmetric(TreeNode* root)
	{
		if (root == nullptr) return true;
		return digui(root->left, root->right);
	}
	bool digui(TreeNode* left, TreeNode* right)
	{
		if (left == nullptr || right == nullptr)
		{
			if (left == nullptr && right == nullptr) return true;
			else return false;
		}
		if (left->val == right->val)
		{
			if (digui(left->left, right->right) && digui(left->right, right->left))return true;
		}
		return false;
	}
};

*/