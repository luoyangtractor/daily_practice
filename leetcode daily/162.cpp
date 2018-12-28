//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//	void bi_search(vector<int>& nums, int left, int right, int& index)
//	{
//		if (left == right)
//		{
//			index = left; return;
//		}
//		int mid = ( left + right ) / 2;
//		if ((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == nums.size() - 1 || nums[mid] > nums[mid + 1]))
//		{
//			index = mid; return;
//		}
//		if (!(mid == 0 || nums[mid - 1] < nums[mid]))
//		{
//			bi_search(nums, left, mid, index);
//		}
//		else
//		{
//			bi_search(nums, mid+1, right, index);
//		}
//	}
//	int findPeakElement(vector<int>& nums) 
//	{
//		if (nums.size() == 0 || nums.size() == 1) return 0;
//		if (nums[0] > nums[1])return 0;
//		if (nums[nums.size()-1] > nums[nums.size()-2])return nums.size() - 1;
//		int ans = 0;
//		bi_search(nums, 0, nums.size()-1, ans);
//		return ans;
//	}
//};