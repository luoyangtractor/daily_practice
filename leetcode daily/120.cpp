#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle)
	{
		int depth = triangle.size();
		vector<int> dp(depth, 0);
		for (int i = 0; i < depth; i++)
		{
			vector<int> last(dp);
			for (int j = 0; j <= i; j++)
			{
				if (j == 0) dp[j] = last[j] + triangle[i][j];
				else if (j == i) dp[j] = last[j - 1] + triangle[i][j];
				else dp[j] = min(last[j - 1], last[j]) + triangle[i][j];
			}
		}
		int min = INT_MAX;
		for (int a : dp)
		{
			if (a < min) min = a;
		}

		return min;
	}
};

*/