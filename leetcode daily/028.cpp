#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
/*
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle)
	{
		int pos = -1;
		int haylen = haystack.length();
		int neelen = needle.length();
		int flag = 0;
		if (neelen == 0)
		{
			return 0;
		}
		for (int i = 0; i <= haylen - neelen; i++)
		{
			flag = 0;
			if (needle[0] == haystack[i])
			{
				for (int j = 0; j < neelen; j++)
				{
					if (i + j >= haylen || needle[j] != haystack[i + j])
					{
						flag = 1;
						break;
					}

				}
				if (flag == 0)
					return i;
			}
		}
		return pos;
	}
};

int main()
{
	Solution s;
	s.strStr("mississippi", "issip");
	return 0;
}

*/