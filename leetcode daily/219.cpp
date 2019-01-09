//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	bool containsNearbyDuplicate(vector<int>& nums, int k)
//	{
//		unordered_map<int, vector<int>> map;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (map.find(nums[i]) != map.end())
//			{
//				for (int j = 0; j < map[nums[i]].size(); j++)
//				{
//					if (abs(i - map[nums[i]][j]) <= k)return true;
//				}
//				map[nums[i]].push_back(i);
//			}
//			else map.insert(make_pair(nums[i], vector<int>{i}));
//
//		}
//		return false;
//	}
//};