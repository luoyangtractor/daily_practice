//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	int bi_search(vector<int>& nums, int left, int right)
//	{
//		if (left == right)
//		{
//			return nums[left];
//		}
//		int mid = (left + right) / 2;
//		if (mid - 1 >= 0 && nums[mid - 1] > nums[mid])
//		{
//			return nums[mid];
//		}
//		if (nums[mid] > nums[right])
//		{
//			return bi_search(nums, mid + 1, right);
//		}
//		else
//		{
//			return bi_search(nums, left, mid);
//		}
//	}
//	int findMin(vector<int>& nums)
//	{
//		return bi_search(nums, 0, nums.size() - 1);
//	}
//};
