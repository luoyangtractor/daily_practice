#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
/*
class Solution {
public:
	string countAndSay(int n)
	{
		string target = "1";
		for (int i = 1; i < n; i++)
		{
			target = transfer(target);
		}
		return target;
	}

	string transfer(string target)
	{
		string temp = target;
		int count = 0;
		int begin = 0;
		int length = temp.length();
		string ans;
		for (int i = 0; i < length; i++)
		{
			cout << temp[i] << endl;
			if (temp[i] == temp[begin])
			{
				count++;
			}
			else
			{
				ans += to_string(count);
				ans.push_back(temp[begin]);
				count = 1;
				begin = i;
			}
		}
		ans += to_string(count);
		ans.push_back(temp[begin]);
		return ans;
	}
};

*/