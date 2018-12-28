//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	void format(string s, vector<int>& v)
//	{
//		int temp_ans = 0;
//		for (int i = 0; i < s.length(); i++)
//		{
//
//			if (s[i] == '.')
//			{
//				v.push_back(temp_ans);
//				temp_ans = 0;
//			}
//			else
//			{
//				int num = s[i] - '0';
//				if (temp_ans != 0)temp_ans *= 10;
//				temp_ans += num;
//			}
//		}
//		v.push_back(temp_ans);
//	}
//	int compareVersion(string version1, string version2)
//	{
//		vector<int> a, b;
//		format(version1, a);
//		format(version2, b);
//		int min_len = a.size() > b.size() ? b.size() : a.size();
//		for (int i = 0; i < min_len; i++)
//		{
//			if (a[i] > b[i])return 1;
//			if (a[i] < b[i])return -1;
//		}
//		if (a.size() == b.size())return 0;
//		for (int i = min_len; i < a.size(); i++)
//		{
//			if (a[i] != 0)return 1;
//		}
//		for (int i = min_len; i < b.size(); i++)
//		{
//			if (b[i] != 0)return -1;
//		}
//		return 0;
//	}
//};