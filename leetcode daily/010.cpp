#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
class Solution {
public:
	bool isMatch(string s, string p)
	{
		if (p == "")
		{
			return s == "" ? true : false;

		}
		if (p.size()>1&&p[1] == '*')
		{
			if (isMatch(s, p.substr(2, p.size() - 2)) == true)
			{
				return true;
			}
			if (s[0] != p[0] && p[0] != '.')
			{
				return false;
			}
			else if ((s.size()>1) && (s[1] == s[0] || p[0] == '.'))
			{
				if (isMatch(s.substr(1, s.size() - 1), p) == true)
				{
					return true;
				}
			}
			return isMatch(s.substr(1, s.size() - 1), p.substr(2, p.size() - 2));
		}
		else
		{
			if (s.size()>0 && (p[0] == s[0] || p[0] == '.'))
			{
				return isMatch(s.substr(1,s.size()-1), p.substr(1, p.size()-1));
			}
		}
		return false;
	}
};

int main()
{
	Solution test = Solution();
	string s = "aaab";
	string p = "a*a*c";
	cout << test.isMatch(s,p) << endl;
	return 0;
}
*/