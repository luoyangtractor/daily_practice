
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


//
// struct TreeNode 
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//
//struct node
//{
//	TreeNode* tn;
//	int layer;
//	node(TreeNode* tt, int l = 0) :tn(tt), layer(l) {};
//};
//
//class Solution {
//public:
//	vector<vector<int>> zigzagLevelOrder(TreeNode* root)
//	{
//		vector<vector<int>> ans;
//		if (root == nullptr) return ans;
//		queue<node*> tmp;
//		node* n = new node(root, 1);
//		tmp.push(n);
//		while (!tmp.empty())
//		{
//			node* ss = tmp.front();
//			tmp.pop();
//			if (ss->tn->left != nullptr)
//			{
//				node* ssl = new node(ss->tn->left, ss->layer + 1);
//				tmp.push(ssl);
//			}
//			if (ss->tn->right != nullptr)
//			{
//				node* ssr = new node(ss->tn->right, ss->layer + 1);
//				tmp.push(ssr);
//			}
//			if (ans.size() < ss->layer)
//			{
//				ans.push_back(vector<int>());
//			}
//			ans[ss->layer - 1].push_back(ss->tn->val);
//			delete ss;
//		}
//
//		for (int i = 0; i < ans.size(); i++)
//		{
//			if (i % 2 == 1) reverse(ans[i].begin(), ans[i].end());
//		}
//		return ans;
//	}
//};