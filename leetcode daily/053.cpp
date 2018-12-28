#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
/*
class Solution {
public:
	int maxSubArray(vector<int>& nums)
	{
		if (nums.size() == 0)
		{
			return 0;
		}
		else if (nums.size() == 1)
		{
			return nums[0];
		}
		int sum = nums[0];
		int maxsum = nums[0];
		auto iter = nums.begin();
		iter++;
		for (; iter != nums.end(); iter++)
		{
			if (sum + *iter > 0)
			{
				if (sum<0)
				{
					sum = *iter;
				}
				else
				{
					sum += *iter;
				}
				if (sum > maxsum)
				{
					maxsum = sum;
				}
			}
			else
			{
				cout << *iter << "  " << sum << "  " << maxsum << endl;
				sum = *iter;
				if (sum > maxsum)
				{
					maxsum = sum;
				}
			}
		}
		return maxsum;
	}
};
*/