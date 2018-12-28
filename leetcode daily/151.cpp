//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	void reverseWords(string &s)
//	{
//		if (s.empty())return;
//		vector<string> tmp;
//		string ss("");
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (s[i] == ' ')
//			{
//				if (ss != "")tmp.push_back(ss);
//				ss.clear();
//			}
//			else ss += s[i];
//		}
//		if (ss != "")tmp.push_back(ss);
//		if (tmp.empty())
//		{
//			s = "";
//			return;
//		}
//		s.clear();
//		for (int i = tmp.size() - 1; i >= 0; i--)
//		{
//			s += tmp[i];
//			if (i != 0) s += ' ';
//		}
//	}
//};
