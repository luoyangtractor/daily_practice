#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	bool isValid(string num){
		if (num.length() == 1 && num >= "0" && num <= "9")return true;
		if (num.length() == 2 && num >= "10" && num <= "99")return true;
		if (num.length() == 3 && num >= "100" && num <= "255")return true;
		return false;
	}
	vector<string> restoreIpAddresses(string s) 
	{
		vector<string> ans;
		if (s.empty()) return ans;

		int num = 0;
		string temp;
		digui(temp, s, ans, 0, num);
		return ans;
	}
	void digui(string& temp,string s, vector<string>& ans, int index, int& num)
	{
		if (num > 4 || index > s.length())return;
		if (num == 3)
		{
			string sss = s.substr(index, s.length()-index);
			if (isValid(sss))
			{
				temp += '.';
				temp += sss;
				ans.push_back(temp);
			}
		}
		else
		{
			for (int i = 1; i < 4; i++)
			{
				string sss = s.substr(index, i);
				if (isValid(sss))
				{
					num++;
					string newtemp = temp;
					if (num != 1)newtemp += '.';
					newtemp += sss;
					digui(newtemp, s, ans, index + i, num);
					num--;
				}
			}
		}
		return;
	}
};

int main()
{
	string s = "25525511135";
	Solution test;
	test.restoreIpAddresses(s);

	int a;
	while (cin >> a);
	return 0;
}
*/