//
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
//		vector<pair<int,int>> dp(nums.size(), make_pair(0,0));
//		dp[0] = make_pair(nums[0], 0);
//		dp[1] = make_pair(nums[0], nums[1]);
//		for (int i = 2; i < nums.size(); i++)
//		{
//			int has_first = dp[i - 1].first;
//			int not_has_first = dp[i - 1].second;
//			for (int j = 0; j < i-1; j++)
//			{
//				has_first = max(has_first, dp[j].first + nums[i]);
//				not_has_first = max(not_has_first, dp[j].second + nums[i]);
//			}
//			dp[i].first = has_first;
//			dp[i].second = not_has_first;
//		}
//		return max(dp[nums.size()-1].second, dp[nums.size() - 2].first);
//	}
//};