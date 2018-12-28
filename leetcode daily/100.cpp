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
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (xian(p,q) && hou(p,q))return true;
		return false;
	}
	bool xian(TreeNode* p, TreeNode* q)
	{
		if (p == nullptr && q == nullptr) return true;
		if (p!=nullptr && q!= nullptr && p->val == q->val)
		{
			if (xian(p->left, q->left))
			{
				if (xian(p->right, q->right))return true;
			}
		}
		return false;
	}
	bool hou(TreeNode* p, TreeNode* q)
	{
		if (p == nullptr && q == nullptr) return true;
		else if(p == nullptr || q == nullptr) return false;
		if (hou(p->left, q->left))
		{
			if (hou(p->right, q->right))
			{
				if (p->val == q->val)return true;
			}
		}
		return false;
	}
};
*/