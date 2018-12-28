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
	void setZeroes(vector<vector<int>>& matrix)
	{
		if (matrix.empty()) return;
		int temp_row = 1, temp_col = 1;
		for (int i = 0; i < matrix.size(); i++)
		{
			if (matrix[i][0] == 0)
			{
				temp_col = 0;
				break;
			}
		}
		for (int j = 0; j < matrix[0].size(); j++)
		{
			if (matrix[0][j] == 0)
			{
				temp_row = 0;
				break;
			}
		}
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = 0; j < matrix[0].size(); j++)
			{
				if (matrix[i][j] == 0)
				{
					matrix[0][j] = 0;
					matrix[i][0] = 0;
				}
			}
		}
		for (int i = 1; i < matrix.size(); i++)
		{
			if (matrix[i][0] == 0)
			{
				for (int j = 0; j < matrix[0].size(); j++)
				{
					matrix[i][j] = 0;
				}
			}
		}
		for (int i = 1; i < matrix[0].size(); i++)
		{
			if (matrix[0][i] == 0)
			{
				for (int j = 0; j < matrix.size(); j++)
				{
					matrix[j][i] = 0;
				}
			}
		}
		if (temp_row == 0)
		{
			for (int i = 0; i < matrix[0].size(); i++)
			{
				matrix[0][i] = 0;
			}
		}
		if (temp_col == 0)
		{
			for (int i = 0; i < matrix.size(); i++)
			{
				matrix[i][0] = 0;
			}
		}
		return;
	}
};
*/