//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix)
//	{
//		vector<int> ans;
//		if (matrix.empty())return ans;
//		int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
//		cout << top << " " << bottom << " " << left << " " << right << endl;
//		while (top <= bottom && left <= right)
//		{
//			cout << endl << endl << top << " " << bottom << " " << left << " " << right << endl;
//			for (int i = left; i <= right; i++)
//			{
//				cout << matrix[top][i] << " ";
//				ans.push_back(matrix[top][i]);
//			}
//			top++; cout << "  ";
//			for (int i = top; i <= bottom; i++)
//			{
//				cout << matrix[i][right] << " ";
//				ans.push_back(matrix[i][right]);
//			}
//			right--; cout << "  ";
//			if (top <= bottom)
//			{
//				for (int i = right; i >= left; i--)
//				{
//					cout << matrix[bottom][i] << " ";
//					ans.push_back(matrix[bottom][i]);
//				}
//				bottom--; cout << "  ";
//			}
//			if (left <= right)
//			{
//				for (int i = bottom; i >= top; i--)
//				{
//					cout << matrix[i][left] << " ";
//					ans.push_back(matrix[i][left]);
//				}
//				left++; cout << "  ";
//			}
//
//		}
//		return ans;
//	}
//};