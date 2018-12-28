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
	bool isValidBST(TreeNode* root) {
		if (root == nullptr) return true;
		return search(root,LLONG_MIN, LLONG_MAX);
	}
	bool search(TreeNode* root, long long mi, long long ma)
	{
		if (root->left == nullptr&&root->right == nullptr) return true;
		if (root->left != nullptr)
		{
			if ((long long)root->left->val >= root->val || (long long)root->left->val <= mi) return false;
			if (!search(root->left, mi, root->val))return false;
		}
		if (root->right != nullptr)
		{
			if ((long long)root->right->val <= root->val || (long long)root->right->val >= ma) return false;
			if (!search(root->right, root->val, ma))return false;
		}
		return true;
	}
};
*/
