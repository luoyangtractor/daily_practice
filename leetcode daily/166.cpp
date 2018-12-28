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
//		long long zheng = (long long)numerator / denominator;
//		long long yu = (long long)numerator % denominator;
//		string ans_zheng = to_string(zheng);
//		if (yu == 0)return ans_zheng;
//		ans_zheng += '.';
//		vector<int> vec;
//		unordered_map<int, int>tmp;
//		int rot = 0;
//		while (1)
//		{
//			yu *= 10;
//			zheng = yu / denominator;
//			yu = yu % denominator;
//			if (yu == 0)
//			{
//				vec.push_back(zheng);
//				for (int i = 0; i < vec.size(); i++)
//				{
//					ans_zheng += to_string(vec[i]);
//				}
//				return ans_zheng;
//			}
//			if (tmp.find(yu) != tmp.end())
//			{
//				rot = tmp[yu];
//				break;
//			}
//			else tmp.insert(make_pair(yu,vec.size()));
//			vec.push_back(zheng);
//		}
//		for (int i = 0; i < rot; i++)
//		{
//			ans_zheng += to_string(vec[i]);
//		}
//		ans_zheng += '(';
//		for (int i = rot; i < vec.size(); i++)
//		{
//			ans_zheng += to_string(vec[i]);
//		}
//		ans_zheng += ')';
//		return ans_zheng;
//	}
//};