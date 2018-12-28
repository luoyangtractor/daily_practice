//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
// struct TreeLinkNode {
//  int val;
//  TreeLinkNode *left, *right, *next;
//  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//};
//
//class Solution {
//public:
//	void connect(TreeLinkNode *root) {
//		queue<pair<TreeLinkNode*, int >>tmp;
//		if (root == nullptr)return;
//		tmp.push(make_pair(root, 0));
//		int tmp_ceng = 0;
//		vector<TreeLinkNode*> tmp_vec;
//		while (!tmp.empty())
//		{
//			TreeLinkNode* current_node = tmp.front().first;
//			int current_ceng = tmp.front().second;
//			tmp.pop();
//			current_ceng++;
//			if (current_node->left != nullptr)tmp.push(make_pair(current_node->left, current_ceng));
//			if (current_node->right != nullptr)tmp.push(make_pair(current_node->right, current_ceng));
//			current_ceng--;
//			if (current_ceng == tmp_ceng)
//			{
//				tmp_vec.push_back(current_node);
//			}
//			else
//			{
//				tmp_ceng++;
//				for (int i = 0; i < tmp_vec.size(); i++)
//				{
//					cout << tmp_vec[i]->val << " ";
//					if (i + 1 < tmp_vec.size())
//					{
//						tmp_vec[i]->next = tmp_vec[i + 1];
//					}
//				}
//				tmp_vec.clear();
//				tmp_vec.push_back(current_node);
//			}
//		}
//		for (int i = 0; i < tmp_vec.size(); i++)
//		{
//			if (i + 1 < tmp_vec.size())
//			{
//				tmp_vec[i]->next = tmp_vec[i + 1];
//			}
//		}
//	}
//};
