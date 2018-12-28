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
	int searchInsert(vector<int>& nums, int target)
	{
		int temp = binary_search(nums, 0, nums.size() - 1, target);
		cout << temp << endl;
		if (nums[temp] < target)
			temp++;
		return temp;

	}

	int binary_search(vector<int>& nums, int start, int end, int target)
	{
		int middle = (start + end) / 2;
		if (start == end)
		{
			return start;
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