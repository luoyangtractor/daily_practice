//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <limits.h>
//
//using namespace std;
//
//
// struct TreeNode 
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	TreeNode * buildTree(vector<int>& preorder, vector<int>& inorder) 
//	{
//		if(preorder.size() == 0 || inorder.size() == 0)return NULL;
//		return digui(preorder, inorder, 0, inorder.size()-1, 0);
//	}
//	TreeNode * digui(vector<int>& preorder, vector<int>& inorder, int instart, int inend, int prestart)
//	{
//		cout << preorder[prestart] << "   " << instart << " " << inend << " " << prestart << endl;
//		if (instart == inend)return new TreeNode(preorder[prestart]);
//		if (instart> inend)return nullptr;
//		TreeNode *root = new TreeNode(preorder[prestart]);
//		int pos = 0;
//		for (int i = instart; i <= inend; i++)
//		{
//			if (preorder[prestart] == inorder[i])
//			{
//				pos = i;
//				break;
//			}
//		}
//		cout << pos << endl;
//		root->left = digui(preorder, inorder, instart, pos - 1, prestart + 1);
//		root->right = digui(preorder, inorder, pos + 1, inend, prestart + pos - instart + 1);
//		return root;
//	}
//};
//
//
//int main()
//{
//	Solution test;
//	test.buildTree(vector<int>{1,2,3}, vector<int>{2,3,1});
//	return 0;
//}