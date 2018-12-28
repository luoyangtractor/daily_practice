//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	string convertToTitle(int n)
//	{
//		if (n == 0)return "A";
//		int zheng = n, yu = n;
//		string ans;
//		vector<int> tmp;
//		while (zheng != 0)
//		{
//			yu = zheng % 26;
//			zheng = zheng / 26;
//			if (yu == 0)zheng--;
//			tmp.push_back(yu);
//		}
//		int flag = 0;
//		for (int i = tmp.size() - 1; i >= 0; i--)
//		{
//			if (tmp[i] != 0)ans += ('A' + tmp[i] - 1);
//			else
//			{
//				ans += 'Z';
//			}
//		}
//		return ans;
//	}
//};