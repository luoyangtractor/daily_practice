//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	int maxProduct(vector<int>& nums) 
//	{
//		vector<pair<int, int>>dp;
//		dp.push_back(make_pair(nums[0], nums[0]));
//		int ans = nums[0];
//		for (int i = 1; i < nums.size(); i++)
//		{
//			if (nums[i] == 0)
//			{
//				dp.push_back(make_pair(0, 0));
//			}
//			else if (nums[i] > 0)
//			{
//				int tmp_max = max(dp[i - 1].first*nums[i], nums[i]);
//				int tmp_min = min(dp[i - 1].second*nums[i], 0);
//				dp.push_back(make_pair(tmp_max, tmp_min));
//				if (tmp_max > ans)ans = tmp_max;
//			}
//			else
//			{
//				int tmp_max = max(dp[i - 1].second*nums[i], 0);
//				int tmp_min = min(dp[i - 1].first*nums[i], nums[i]);
//				dp.push_back(make_pair(tmp_max, tmp_min));
//				if (tmp_max > ans)ans = tmp_max;
//			}
//		}
//		return ans;
//	}
//};