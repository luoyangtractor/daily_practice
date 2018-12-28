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
	int removeElement(vector<int>& nums, int val)
	{
		int ans = 0;
		int temp = 0;
		for (int i = 0; i < nums.size() - temp; i++)
		{
			if (nums[i] == val)
			{
				for (int j = i + 1; j < nums.size(); j++)
				{
					nums[j - 1] = nums[j];
				}
				temp++;
				i--;
			}
			else
			{
				ans++;
			}
		}
		return ans;
	}
};
*/