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

struct tmp
{
	TreeNode* t;
	int depth;
	tmp(TreeNode *tn, int d) :t(tn), depth(d){};
};
class Solution {
public:
	int maxDepth(TreeNode* root) {
		queue<tmp*> tt;
		if (root == nullptr) return 0;
		tt.push(new tmp(root,1));
		int ans = 1;
		while (!tt.empty())
		{
			tmp* p = tt.front();
			tt.pop();
			if (p->t->left != nullptr)
			{
				tt.push(new tmp(p->t->left, p->depth + 1));
				if (p->depth + 1 > ans)ans = p->depth + 1;
			}

			if (p->t->right != nullptr)
			{
				tt.push(new tmp(p->t->right, p->depth + 1));
				if (p->depth + 1 > ans)ans = p->depth + 1;
			}
			delete p;
		}
		return ans;
	}
};

*/