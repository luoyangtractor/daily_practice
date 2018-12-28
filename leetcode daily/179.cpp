//
//#include <set>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	static bool cmp(string a, string b)
//	{
//		string tmp1 = a + b;
//		string tmp2 = b + a;
//		if (tmp1 > tmp2)return true;
//		return false;
//	}
//	string largestNumber(vector<int>& nums) 
//	{
//		vector<string> vec;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			vec.push_back(to_string(nums[i]));
//		}
//		sort(vec.begin(), vec.end(),cmp);
//		string ans;
//		for (auto iter = vec.begin(); iter < vec.end(); iter++)
//		{
//			ans += *iter;
//		}
//		int flag = 0;
//		string real_ans;
//		for (int i = 0; i < ans.size(); i++)
//		{
//			if (flag == 0 && ans[i] == '0')continue;
//			else
//			{
//				real_ans += ans[i];
//				flag = 1;
//			}
//		}
//		if (flag == 0) return "0";
//		return real_ans;
//	}
//};
//
//
//int main()
//{
//	Solution test;
//	vector<int> nums{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//	cout<<"ans: "<<test.largestNumber(nums);
//	return 0;
//}