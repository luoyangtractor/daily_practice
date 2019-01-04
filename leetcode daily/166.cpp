//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//
//class Solution {
//public:
//	string fractionToDecimal(int numerator, int denominator)
//	{
//		string ans;
//		if (numerator < 0 && denominator>0 || numerator > 0 && denominator < 0)ans += '-';
//		long long yu = (long long)numerator % (long long)denominator;
//		long long zheng = (long long)numerator / (long long)denominator;
//		zheng = abs(zheng);
//		yu = abs(yu);
//		ans += to_string(zheng);
//		if (yu == 0)return ans;
//		ans += '.';
//		string tmp;
//		unordered_map<long long, int> map;
//		int index = -1;
//		while (yu != 0)
//		{
//			yu *= 10;
//			if (map.find(yu) != map.end())
//			{
//				index = map[yu];
//				break;
//			}
//
//			map.insert(make_pair(yu, tmp.length()));
//			zheng = yu / denominator;
//			yu = yu % denominator;
//
//			zheng = abs(zheng);
//			tmp += to_string(zheng);
//		}
//		if (index < 0)return ans + tmp;
//		else
//		{
//			ans += tmp.substr(0, index);
//			ans += '(';
//			ans += tmp.substr(index, tmp.length() - index);
//			return ans + ')';
//		}
//	}
//};