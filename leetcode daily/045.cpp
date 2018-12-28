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
	int jump(vector<int>& nums)
	{
		int size = nums.size();
		int jump = 1;
		if (size <= 1)
		{
			return jump - 1;
		}
		int temp_pos = size - 1;
		int pos = 0;
		for (int i = size - 1; i >= 0; i--)
		{
			int flag = 0;
			for (int j = i; j >= 0; j--)
			{
				int dist = temp_pos - j;
				if (nums[j] >= dist)
				{
					flag = 1;
					pos = j;
				}
			}
			if (flag == 1)
			{
				i = pos;
			}
			else
			{
				jump++;
				temp_pos = i + 1;
			}

		}
		return jump;
	}
};
*/