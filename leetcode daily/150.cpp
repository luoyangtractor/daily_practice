//#include <iostream>
//#include <vector>
//#include <stack>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//class Solution {
//public:
//	int evalRPN(vector<string>& tokens)
//	{
//		stack<int> tmp;
//		if (tokens.empty())return 0;
//		int a = convert(tokens[0]);
//		tmp.push(a);
//		int index = 1;
//		if (tokens.size() == 1) return a;
//		while (!tmp.empty())
//		{
//			if (index > tokens.size())cout << "ffffffffffffffff";
//
//			if (tokens[index] == "+" || tokens[index] == "-" || tokens[index] == "*" || tokens[index] == "/")
//			{
//				if (tmp.size() < 2)cout << "ffffffffffffffff";
//				int tmp_b = tmp.top(); tmp.pop();
//				int tmp_a = tmp.top(); tmp.pop();
//				int tmp_ans = 0;
//				if (tokens[index] == "+") tmp_ans = tmp_a + tmp_b;
//				if (tokens[index] == "-") tmp_ans = tmp_a - tmp_b;
//				if (tokens[index] == "*") tmp_ans = tmp_a * tmp_b;
//				if (tokens[index] == "/")
//				{
//					if (tmp_b != 0)tmp_ans = tmp_a / tmp_b;
//					else tmp_ans = 0;
//				}
//				tmp.push(tmp_ans);
//				if (index == tokens.size() - 1)return tmp_ans;
//			}
//			else
//			{
//				tmp.push(convert(tokens[index]));
//			}
//			index++;
//		}
//		return -1;
//	}
//	int convert(string aa)
//	{
//		int flag = 0;
//		string a;
//		if (aa[0] == '-')
//		{
//			flag = 1;
//			a = aa.substr(1, aa.length() - 1);
//		}
//		else a = aa;
//		int ans = a[0] - '0', jinwei = 0;
//		for (int i = 1; i < a.length(); i++)
//		{
//			ans *= 10;
//			int tmp = a[i] - '0' + jinwei;
//			if (tmp > 9)
//			{
//				jinwei = 1;
//				tmp -= 10;
//			}
//			else jinwei = 0;
//			ans += tmp;
//
//		}
//		return flag == 0 ? ans : -ans;
//	}
//};