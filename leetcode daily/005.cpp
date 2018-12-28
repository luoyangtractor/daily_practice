#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
class Solution {
public:
	string longestPalindrome(string s)
	{
		int len = s.size();
		if (len == 0 || len == 1)
		{
			return s;
		}
		int middle_index = 0, temp_index = 0;
		int maxlen = 0, templen = 0;
		int flag = 1;
		cout << len << endl;
		for (int i = 0; i < len; i++)
		{
			cout << middle_index << "  " << maxlen << endl;
			templen = 0;
			for (int j = 1; j <= min(len - i, i); j++)
			{
				if (s[i - j] == s[i + j])
				{
					temp_index = i - j;
					templen++;
					continue;
				}
				else
				{
					break;
				}
			}
			if (templen * 2 + 1 > maxlen)
			{
				middle_index = temp_index;
				maxlen = templen * 2 + 1;
				flag = 1;
			}
			templen = 0;
			if (i + 1 < len && s[i] == s[i + 1])
			{
				for (int j = 0; j <= min(len - i, i); j++)
				{
					if (s[i - j] == s[i + 1 + j])
					{
						temp_index = i - j;
						templen++;
						continue;
					}
					else
					{
						break;
					}
				}
				if (templen * 2  > maxlen)
				{
					middle_index = temp_index;
					maxlen = templen * 2;
					flag = 0;
				}
			}

		}
		if (flag = 1)
			return s.substr(middle_index, maxlen);
		else
			return s.substr(middle_index, maxlen);
	}
};

int main()
{
	Solution test = Solution();
	cout << test.longestPalindrome("bb") << endl;
	return 0;
}
*/