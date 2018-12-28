#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*
class Solution {
public:
	vector<string> letterCombinations(string digits) 
	{
		if (digits == "")
		{
			return vector<string> {};
		}
		vector<string> temp{ "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		vector<string> ans{""};
		for (int i = 0; i < digits.size(); i++)
		{
			int si = ans.size();
			int num = digits[i] - '0';
			for (int j = 0; j < si; j++)
			{
				auto iter = ans.begin();
				string tempstr = *iter;
				ans.erase(iter);
				for (int k = 0; k < temp[num].size(); k++)
				{
					string ttt = tempstr + temp[num][k];
					ans.push_back(ttt);
				}
			}
		}
		return ans;
	}
};
*/