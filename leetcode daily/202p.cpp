//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//	int wpf(int n)
//	{
//		int ans = 0;
//		while (n != 0)
//		{
//			int yu = n % 10;
//			n /= 10;
//			ans += yu * yu;
//		}
//		return ans;
//	}
//	bool isHappy(int n)
//	{
//		if (n == 1)return true;
//		unordered_set<int> set;
//		set.insert(n);
//		int tmp = n;
//		while (1)
//		{
//			tmp = wpf(tmp);
//			if (set.find(tmp) != set.end())return false;
//			set.insert(tmp);
//			if (tmp == 1)return true;
//		}
//		return false;
//	}
//};