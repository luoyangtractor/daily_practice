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
	vector<vector<int>> generate(int numRows) 
	{
		vector<vector<int>> ans;
		for (int i = 0; i < numRows; i++)
		{
			vector<int> temp;
			if (i == 0)
			{
				temp.push_back(1);
				ans.push_back(temp);
				continue;
			}
			else if (i == 1)
			{
				temp.push_back(1);
				temp.push_back(1);
				ans.push_back(temp);
				continue;
			}

			temp.push_back(1);
			for (int j = 0; j < i-1; j++)
			{
				int sum = ans[i - 1][j] + ans[i - 1][j+1];
				temp.push_back(sum);
			}
			temp.push_back(1);
			ans.push_back(temp);
		}
		return ans;
	}
};

*/