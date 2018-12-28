//#include <iostream>
//#include <unordered_set>
//#include <vector>
//#include <string>
//using namespace std;
//
////class Solution {
////public:
////	bool dfs(string& s, int index, int min_len, int max_len, unordered_set<string>& tmp_set)
////	{
////		if (index >= s.size())return true;
////		for (int i = min_len; i <= max_len; i++)
////		{
////			if (index + i < s.size())
////			{
////				string tmp_str = s.substr(index, i);
////				if (tmp_set.find(tmp_str) != tmp_set.end())
////				{
////					if(dfs(s, index+i, min_len, max_len, tmp_set))return true;
////				}
////			}
////		}
////		return false;
////	}
////	bool wordBreak(string s, vector<string>& wordDict) 
////	{
////		unordered_set<string> tmp_set;
////		int min_len = INT_MAX, max_len = 0;
////		for (auto iter = wordDict.begin(); iter != wordDict.end(); iter++)
////		{
////			if (iter->size() < min_len) min_len = iter->size();
////			if (iter->size() > max_len)max_len = iter->size();
////			tmp_set.insert(*iter);
////		}
////		return dfs(s, 0, min_len, max_len, tmp_set);
////	}
////};
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////
////////dp
//class Solution {
//public:
//	bool wordBreak(string s, vector<string>& wordDict)
//	{
//		unordered_set<string> tmp_set;
//		int min_len = INT_MAX, max_len = 0;
//		for (auto iter = wordDict.begin(); iter != wordDict.end(); iter++)
//		{
//			if (iter->size() < min_len) min_len = iter->size();
//			if (iter->size() > max_len)max_len = iter->size();
//			tmp_set.insert(*iter);
//		}
//		vector<bool> dp(s.size() + 1, false);
//		dp[0] = true;
//		for (int i = 1; i <= s.size(); i++)
//		{
//			for (int j = min_len; j <= max_len; j++)
//			{
//				if (i - j >= 0 && dp[i - j] == true)
//				{
//					string tmp_str = s.substr(i - j, j);
//					//cout<<i<<" "<<tmp_str<<endl;
//					if (tmp_set.find(tmp_str) != tmp_set.end())
//					{
//						//cout<<i<<" "<<tmp_str<<endl;
//						dp[i] = true;
//						break;
//					}
//				}
//			}
//		}
//		return dp[s.size()];
//	}
//};