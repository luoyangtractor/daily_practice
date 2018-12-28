#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		if (grid.empty()) return 0;
		int ans = 0;
		int m = grid[0].size();
		int n = grid.size();
		vector<int> zhuangtai(m);
		for (int i = 0; i < m; i++)
		{
			if (i == 0) zhuangtai[i] = grid[0][i];
			else
			{
				zhuangtai[i] = zhuangtai[i - 1] + grid[0][i];
			}
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j< m; j++)
			{
				if (j == 0) zhuangtai[j] = zhuangtai[j] + grid[i][j];
				else zhuangtai[j] = min(zhuangtai[j - 1], zhuangtai[j]) + grid[i][j];
			}
		}
		ans = zhuangtai[m - 1];
		return ans;
		vector <int>().swap(zhuangtai);

	}
};

*/
