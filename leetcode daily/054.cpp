#include <iostream>
#include <vector>
using namespace std;

/*
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix)
	{
		vector<int> ans;
		if (matrix.empty())
		{
			return ans;
		}
		int row_size = matrix.size();
		int col_size = matrix[0].size();
		digui(matrix, ans, 0, row_size, col_size);
		return ans;
	}
	void digui(vector<vector<int>>& matrix, vector<int>& ans, int begin_row, int row_size, int col_size)
	{

		int row_length = col_size - 1 - 2 * begin_row;
		int col_length = row_size - 1 - 2 * begin_row;

		int bound = min(row_size, col_size) / 2;
		if (min(row_size, col_size) % 2 == 1)
		{
			bound++;
		}
		if (begin_row >= bound)
		{
			return;
		}

		if (col_length == 0 && row_length == 0)
		{
			ans.push_back(matrix[begin_row][begin_row]);
			return;
		}

		heng(matrix, ans, begin_row, begin_row, row_length, 0);
		if (col_length == 0)
		{
			ans.push_back(matrix[begin_row][begin_row + row_length]);
			return;
		}

		shu(matrix, ans, begin_row, begin_row + row_length, col_length, 0);
		if (row_length == 0)
		{
			ans.push_back(matrix[begin_row + col_length][begin_row + row_length]);
			return;
		}

		heng(matrix, ans, begin_row + col_length, begin_row + row_length, row_length, 1);
		shu(matrix, ans, begin_row + col_length, begin_row, col_length, 1);
		return digui(matrix, ans, begin_row + 1, row_size, col_size);
	}
	void heng(vector<vector<int>>& matrix, vector<int>& ans, int begin_row, int begin_col, int length, int reverse)
	{
		if (reverse == 0)
		{
			for (int i = begin_col; i < begin_col + length; i++)
			{
				ans.push_back(matrix[begin_row][i]);
			}
		}
		else
		{
			for (int i = begin_col; i > begin_col - length; i--)
			{
				ans.push_back(matrix[begin_row][i]);
			}
		}
		return;
	}
	void shu(vector<vector<int>>& matrix, vector<int>& ans, int begin_row, int begin_col, int length, int reverse)
	{
		if (reverse == 0)
		{
			for (int i = begin_row; i < begin_row + length; i++)
			{
				ans.push_back(matrix[i][begin_col]);
			}
		}
		else
		{
			for (int i = begin_row; i > begin_row - length; i--)
			{
				ans.push_back(matrix[i][begin_col]);
			}
		}
		return;
	}
};
*/
