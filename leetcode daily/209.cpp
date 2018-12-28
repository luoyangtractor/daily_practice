//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//	int minSubArrayLen(int s, vector<int>& nums)
//	{
//		int ans = 0;
//		for (int i = 0; i < nums.size(); i++)ans += nums[i];
//		if (ans < s)return 0;
//		ans = INT_MAX;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			int temp_sum = 0;
//			for (int j = i; j < nums.size(); j++)
//			{
//				if (j - i + 1 >= ans)break;
//				temp_sum += nums[j];
//				if (temp_sum >= s && j - i + 1 < ans)
//				{
//					ans = j - i + 1;
//					break;
//				}
//			}
//		}
//		return ans;
//
//	}
//};