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
	void sortColors(vector<int>& nums) 
	{
		if (nums.empty()) return;
		int c[3] = {-1,-1,-1};
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				nums[++c[2]] = 2;
				nums[++c[1]] = 1;
				nums[++c[0]] = 0;
			}
			else if (nums[i] == 1)
			{
				nums[++c[2]] = 2;
				nums[++c[1]] = 1;
			}
			else
			{
				nums[++c[2]] = 2;
			}
		}
		return;
	}
};
*/