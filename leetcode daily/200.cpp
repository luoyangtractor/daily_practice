//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	void dfs(vector<vector<char>>& grid, vector<vector<int>>& viewed, int i, int j)
//	{
//		if (grid[i][j] == '1' && viewed[i][j] == 0)
//		{
//			viewed[i][j] = 1;
//			if (i - 1 >= 0)dfs(grid, viewed, i - 1, j);
//			if (j - 1 >= 0)dfs(grid, viewed, i, j - 1);
//			if (i + 1 < grid.size())dfs(grid, viewed, i + 1, j);
//			if (j + 1 < grid[0].size())dfs(grid, viewed, i, j + 1);
//		}
//	}
//	int numIslands(vector<vector<char>>& grid)
//	{
//		if (grid.empty())return 0;
//		vector<vector<int>> viewed(grid.size(), vector<int>(grid[0].size(), 0));
//		int ans = 0;
//		for (int i = 0; i < grid.size(); i++)
//		{
//			for (int j = 0; j < grid[0].size(); j++)
//			{
//				if (grid[i][j] == '1' && viewed[i][j] == 0)
//				{
//					//cout<<i<<"  "<<j<<endl;
//					ans++;
//					dfs(grid, viewed, i, j);
//				}
//			}
//		}
//		return ans;
//	}
//};