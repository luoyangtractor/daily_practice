//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	int rob(vector<int>& nums)
//	{
//		if (nums.empty()) return 0;
//		if (nums.size() == 1)return nums[0];
//		if (nums.size() == 2)return max(nums[0], nums[1]);
//		vector<int> dp(nums.size(), 0);
//		dp[0] = nums[0];
//		dp[1] = nums[1];
//		for (int i = 2; i < nums.size(); i++)
//		{
//			int m = dp[i-1];
//			for (int j = 0; j < i-1; j++)
//			{
//				m = max(m, dp[j] + nums[i]);
//			}
//			dp[i] = m;
//		}
//		return dp[nums.size()-1];
//	}
//};