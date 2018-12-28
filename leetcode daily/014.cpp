#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

/*
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) 
	{
		string ans;
		int maxlen;
		auto iter = strs.begin();
		int flag = 0;
		for (; iter != strs.end();iter++)
		{
			if (iter->size() > maxlen)
			{
				maxlen = iter->size();
			}
		}
		for (int i = 0; i < maxlen; i++)
		{
			if (flag == 1)
			{
				break;
			}
			for (int j = 0; j < strs.size(); j++)
			{
				if (i<strs[j].size()&&strs[j][i] == strs[0][i])
				{
					if (j + 1 == strs.size())
					{
						ans.push_back(strs[0][i]);
					}
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		return ans;
	}
};
*/