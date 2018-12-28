#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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
	  TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in) 
	  {
		 if (pre.empty())return NULL;

		 int mid = findPos(in, pre[0]);
		 vector<int> left_p(pre.begin() + 1, pre.begin() + mid + 1), right_p(pre.begin() + mid + 1, pre.end());
		 vector<int> left_i(in.begin(), in.begin() + mid), right_i(in.begin() + mid + 1, in.end());

		 TreeNode* left = reConstructBinaryTree(left_p, left_i);
		 TreeNode* right = reConstructBinaryTree(right_p, right_i);
		 TreeNode* root = new TreeNode(pre[0]);
		 root->left = left;
		 root->right = right;
		 return root;
	 }

	 int findPos(const vector<int>& v, int key) 
	 {
		 for (int i = 0; i < v.size(); ++i)
		 if (v[i] == key)
			 return i;
		 return -1;
	 }
 };

int main()
{
	vector<int> pre{ 1, 2, 3, 4, 5, 6, 7 };
	vector<int> vin{ 3, 2, 4, 1, 6, 5, 7};

	Solution test;

	TreeNode* root = test.reConstructBinaryTree(pre, vin);

	int a;
	while (cin >> a)
	{
		if (a == 0) return 0;
	}
}
*/
