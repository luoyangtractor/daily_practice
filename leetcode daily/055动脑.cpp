#include <iostream>
#include <vector>
using namespace std;
/*
class Solution {
public:
	bool canJump(vector<int>& nums)
	{
		int size = nums.size();
		int step = 0;
		for (int i = 0; i < size && i <= step; i++)
		{
			if (i + nums[i] > step)
			{
				step = nums[i] + i;
			}
			if (step >= size - 1)
			{
				return true;
			}
		}
		return false;
	}
};

*/