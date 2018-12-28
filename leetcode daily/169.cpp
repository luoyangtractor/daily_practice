//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//	int majorityElement(vector<int>& nums)
//	{
//		unordered_map<int, int> map;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (map.find(nums[i]) == map.end())
//			{
//				map.insert(make_pair(nums[i], 1));
//			}
//			else map[nums[i]]++;
//		}
//		for (auto iter = map.begin(); iter != map.end(); iter++)
//		{
//			if (iter->second > nums.size() / 2)return iter->first;
//		}
//		return -1;
//	}
//};