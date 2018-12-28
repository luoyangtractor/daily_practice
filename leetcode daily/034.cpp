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

	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> ans;
		int start_index = 0;
		int end_index = 0;
		if (nums.size()<1)
		{
			start_index = -1;
			end_index = -1;
		}
		else
		{
			int temp = binary_search(nums, 0, nums.size() - 1, target);
			if (temp < 0)
			{
				start_index = -1;
				end_index = -1;
			}
			else
			{

				int size = nums.size();
				for (int i = temp; i >= 0; i--)
				{
					if (nums[i] == target)
					{
						start_index = i;
					}
					else
					{
						break;
					}
				}
				for (int i = temp; i < size; i++)
				{
					cout << i << endl;
					if (nums[i] == target)
					{
						end_index = i;
					}
					else
					{
						break;
					}
				}
			}
		}
		ans.push_back(start_index);
		ans.push_back(end_index);
		return ans;

	}
	int binary_search(vector<int>& nums, int start, int end, int target)
	{
		int middle = (start + end) / 2;
		if (start == end)
		{
			if (nums[start] == target)
			{
				return start;
			}
			else
			{
				return -1;
			}
		}
		if (nums[middle] == target)
		{
			return middle;
		}
		if (nums[middle] < target)
		{
			return binary_search(nums, middle + 1, end, target);
		}
		if (nums[middle] > target)
		{
			return binary_search(nums, start, middle, target);
		}
	}
};
*/