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
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> ans;
		if (nums.empty()) return ans;
		for (int i = 0; i < nums.size(); i++)
		{
			vector<int> temp;
			digui(ans, nums, i, temp);
		}
		ans.push_back(nums);
		return ans;
	}
	void digui(vector<vector<int>>& ans, vector<int> nn, int k, vector<int> temp)
	{
		if (k == 0)
		{
			ans.push_back(temp);
			return;
		}
		int size = temp.size();
		for (int i = 0; i < nn.size(); i++)
		{
			if (nn[i] != INT_MIN)
			{
				temp.push_back(nn[i]);
				nn[i] = INT_MIN;
				digui(ans, nn, k - 1, temp);
				//nn[i] = i + 1;
				temp.erase(temp.begin() + size);
			}
		}
	}
};

*/