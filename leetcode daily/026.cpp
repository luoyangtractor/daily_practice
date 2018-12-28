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
	int removeDuplicates(vector<int>& nums)
	{
		if (nums.size() == 0)
		{
			return 0;
		}
		int ans = 1;
		int temp = nums[0];
		int temp_loc = 1;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != temp)
			{
				ans++;
				temp = nums[i];
				nums[temp_loc] = nums[i];
				temp_loc++;
			}
		}
		return ans;
	}
};
*/