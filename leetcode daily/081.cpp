#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
/*

class Solution {
public:
	bool search(vector<int>& nums, int target) {
		if (nums.empty()) return false;
		if (nums[0] == target || nums[nums.size() - 1] == target) return true;
		return bi_search(nums, target, 0, nums.size() - 1);
	}
	bool bi_search(vector<int>& nums, int target, int left, int right)
	{
		int mid = (left + right) / 2;
		if (left == right)
			return target == nums[left] ? true : false;
		if (nums[mid] == target)return true;

		if (nums[mid]>nums[left] && nums[mid]>nums[right])
		{
			if (nums[mid] > target&&nums[left]<target) return bi_search(nums, target, left, mid);
			else return bi_search(nums, target, mid + 1, right);
		}
		if (nums[mid]<nums[left] && nums[mid]<nums[right])
		{
			if (nums[mid] < target&&nums[right]>target)return bi_search(nums, target, mid + 1, right);
			else return bi_search(nums, target, left, mid);
		}
		else
		{
			if (bi_search(nums, target, mid + 1, right))return true;
			if (bi_search(nums, target, left, mid))return true;
		}
		return false;
	}
};
*/
