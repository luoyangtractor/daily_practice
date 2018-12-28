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
		return dt(nums, size - 1);
	}
	bool dt(vector<int>& nums, int index)
	{
		if (index == 0)
		{
			return true;
		}
		for (int i = index - 1; i >= 0; i--)
		{
			if (nums[i] >= index - i)
			{
				if (dt(nums, index - 1))
				{
					return true;
				}
			}
		}
		return false;
	}
};
*/