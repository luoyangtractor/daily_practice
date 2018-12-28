#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;
/*
class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums)
	{
		vector<vector<int>> ans;
		stack <vector<int>> temp;
		vector<int> t;
		int size = nums.size();
		for (int i = 0; i < size; i++)
		{
			t.push_back(nums[i]);
			temp.push(t);
			t.pop_back();
		}
		while (!temp.empty())
		{
			t = temp.top();
			temp.pop();
			if (t.size() == size)
			{
				ans.push_back(t);
				continue;
			}
			for (int j = 0; j < size; j++)
			{
				if (check(t, nums[j]))
				{
					t.push_back(nums[j]);
					temp.push(t);
					t.pop_back();
				}
			}
		}
		t.clear();
		return ans;
	}
	bool check(vector<int>& t, int& j)
	{
		for (auto iter = t.begin(); iter < t.end(); iter++)
		{
			if (*iter == j)
			{
				return false;
			}
		}
		return true;
	}
};

*/