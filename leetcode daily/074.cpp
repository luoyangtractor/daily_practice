#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
/*
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target)
	{
		if (matrix.empty()) return false;
		int begin_row = 0, begin_col = matrix[0].size() - 1;
		while (begin_row < matrix.size() && begin_col >= 0)
		{
			if (matrix[begin_row][begin_col] == target)return true;
			else if (matrix[begin_row][begin_col] < target)	begin_row++;
			else begin_col--;
		}
		if (begin_row <0 && begin_col>0)
		{
			for (int i = 0; i <= begin_col; i++)
			{
				if (matrix[0][i] == target)return true;
			}
		}
		if (begin_row >0 && begin_col<0)
		{
			for (int i = 0; i <= begin_row; i++)
			{
				if (matrix[i][0] == target)return true;
			}
		}
		return false;
	}
};


*/
