//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isIsomorphic(string s, string t) 
//	{
//		unordered_map<char, char> map;
//		unordered_set<char> set;
//
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (map.find(s[i]) != map.end())
//			{
//				if (map[s[i]] != t[i])return false;
//			}
//			else
//			{
//				if (set.find(t[i]) == set.end())
//				{
//					map.insert(make_pair(s[i], t[i]));
//					set.insert(t[i]);
//				}
//				else return false;
//			}
//		}
//		return true;
//	}
//};
//
