//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//
//	vector<vector<int>> levelOrderBottom(TreeNode* root)
//	{
//		vector<vector<int>> ans;
//		queue<pair<TreeNode*, int>> tmp;
//		if (root == nullptr) return ans;
//		tmp.push(make_pair(root, 0));
//		vector<int> tmp_ans;
//		int tmp_ceng = 0;
//		while (!tmp.empty())
//		{
//			TreeNode* tmp_node = tmp.front().first;
//			int ceng = tmp.front().second;
//			//cout<<tmp_node->val<<"  "<<ceng<<endl;
//			tmp.pop();
//			ceng++;
//			if (tmp_node->left != nullptr) tmp.push(make_pair(tmp_node->left, ceng));
//			if (tmp_node->right != nullptr) tmp.push(make_pair(tmp_node->right, ceng));
//			ceng--;
//			if (ceng == tmp_ceng)
//			{
//				tmp_ans.push_back(tmp_node->val);
//			}
//			else
//			{
//				ans.push_back(tmp_ans);
//				tmp_ans.clear();
//				tmp_ceng++;
//				tmp_ans.push_back(tmp_node->val);
//			}
//
//		}
//		ans.push_back(tmp_ans);
//		reverse(ans.begin(), ans.end());
//		return ans;
//	}
//};