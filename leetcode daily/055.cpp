#include <iostream>
#include <vector>
using namespace std;
/*
class Solution {
public:
	bool canJump(vector<int>& nums)
	{
		int size = nums.size();
		if (size == 1)
		{
			return true;
		}
		if (nums.empty())
		{
			return true;
		}
		return dfs(nums, 0, size);
	}

	bool dfs(vector<int>& nums, int index, int size)
	{
		int step = nums[index];
		if (step == 0)
		{
			return false;
		}

		int flag = 0;
		for (int i = step; i > 0; i--)
		{
			// cout<<index<<"  "<<i<<endl;
			if (index + i >= size - 1)
			{
				return true;
			}

			if (dfs(nums, index + i, size))
			{
				return true;
			}
		}
		return false;
	}
};

*/