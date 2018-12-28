//
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	int minDepth(TreeNode* root) 
//	{
//		int depth = 0;
//		queue<pair<TreeNode*, int>> tmp;
//		if (root == nullptr) return 0;
//		tmp.push(make_pair(root, 1));
//		while (!tmp.empty())
//		{
//			TreeNode* tmp_node = tmp.front().first;
//			depth= tmp.front().second;
//			tmp.pop();
//			int flag = 0;
//			if (tmp_node->left != nullptr)
//			{
//				flag = 1;
//				tmp.push(make_pair(tmp_node->left, depth + 1));
//			}
//			if (tmp_node->right != nullptr)
//			{
//				flag = 1;
//				tmp.push(make_pair(tmp_node->right, depth + 1));
//			}
//			if (flag == 0)return depth;
//		}
//		return depth;
//	}
//};