
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	vector<vector<int>> generateMatrix(int n) 
	{
		vector<vector<int>> ans;
		if (n == 0)
		{
			return ans;
		}

		for (int i = 0; i < n; i++)
		{
			vector<int> temp;
			for (int j = 0; j < n; j++)
			{
				temp.push_back(0);
			}
			ans.push_back(temp);
		}

		int tempstart = 1;
		int row = 0, col = 0;
		for (int i = 0; i < n/2; i++)
		{
			int len = n - 2*i - 1;
			for (int j = 0; j < len; j++)
			{
				ans[row][col] = tempstart;
				tempstart++;
				col++;
			}
			for (int j = 0; j < len; j++)
			{
				ans[row][col] = tempstart;
				tempstart++;
				row++;
			}
			for (int j = 0; j < len; j++)
			{
				ans[row][col] = tempstart;
				tempstart++;
				col--;
			}
			for (int j = 0; j < len; j++)
			{
				ans[row][col] = tempstart;
				tempstart++;
				row--;
			}
			row++;
			col++;
		}
		if (n % 2 == 1)
		{
			ans[n / 2][n / 2] = n*n;
		}
		return ans;
	}
};

*/