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
	int trap(vector<int>& height)
	{
		int left_pos = 0;
		int right_pos = height.size() - 1;
		if (height.empty())
		{
			return 0;
		}
		return digui(height, left_pos, right_pos, 0);

	}
	int digui(vector<int>& height, int left_pos, int right_pos, int ans)
	{
		int temp = height[left_pos];
		int di = height[left_pos] < height[right_pos] ? left_pos : right_pos;
		int flag = di;
		if (right_pos - left_pos <= 1)
		{
			return 0;
		}
		for (int i = left_pos + 1; i <= right_pos; i++)
		{
			temp += height[i];
			if ((i != right_pos) && (height[i]>height[left_pos] || height[i] > height[right_pos]))
			{
				if (height[i]>height[flag])
				{
					flag = i;
				}
			}
		}
		if (flag != di)
		{
			return ans + digui(height, left_pos, flag, ans) + digui(height, flag, right_pos, ans);
		}

		int gao = height[left_pos] < height[right_pos] ? right_pos : left_pos;
		int mianji = (right_pos - left_pos)*height[di] + height[gao];
		return ans + (mianji - temp);
	}
};
*/
