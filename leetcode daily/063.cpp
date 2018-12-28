#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
	{
		int n = obstacleGrid.size();
		int m = obstacleGrid[0].size();
		vector<int> temp(m);
		for (int i = 0; i < m; i++)
		{
			if (obstacleGrid[0][i] != 1)
			{
				temp[i] = 1;
			}
			else
			{
				for (int j = i; j < m; j++)
				{
					temp[j] = 0;
				}
				break;
			}
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (obstacleGrid[i][j] == 1)
				{
					temp[j] = 0;
				}
				else if (j - 1 >= 0)
				{
					temp[j] = temp[j - 1] + temp[j];
				}
				else
				{
					temp[j] = temp[j];
				}
			}
		}
		return temp[m - 1];
	}
	
};
*/