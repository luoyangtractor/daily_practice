//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<string> findRepeatedDnaSequences(string s) 
//	{
//		vector<string> ans;
//		unordered_map<string, int> map;
//		if (s.length() <= 10)return ans;
//		for (int i = 0; i <= s.length() - 10; i++)
//		{
//			string tmp = s.substr(i, 10);
//			if (map.find(tmp) == map.end())
//			{
//				map.insert(make_pair(tmp,0));
//			}
//			else
//			{
//				map[tmp]++;
//			}
//		}
//		for (auto iter = map.begin(); iter != map.end(); iter++)
//		{
//			if (iter->second >= 1)ans.push_back(iter->first);
//		}
//		return ans;
//	}
//};