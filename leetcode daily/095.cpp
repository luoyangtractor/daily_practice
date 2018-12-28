
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<TreeNode*> generateTrees(int n) {
		vector<TreeNode*> ans;
		if (n == 0) return ans;
		TreeNode* root;
		ans = permute(1, n);
		return ans;
	}
	vector<TreeNode*> permute(int start, int end)
	{

		vector<TreeNode*> temp;
		if (start > end)
		{
			temp.push_back(NULL);
			return temp;
		}
		for (int i = start; i <= end; i++)
		{
			vector<TreeNode*> left = permute(start, i - 1);
			vector<TreeNode*> right = permute(i + 1, end);
			for (TreeNode* l : left)
			{
				for (TreeNode* r : right)
				{
					TreeNode *t = new TreeNode(i);
					t->left = l;
					t->right = r;
					temp.push_back(t);

				}
			}
		}
		return temp;
	}
};

*/