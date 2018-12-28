#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;

/*
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) 
	{
		int size = strs.size();
		vector<vector<string>> ans;
		vector<string> fuzhu;
		string tt;
		for (int i = 0; i < size; i++)
		{
			int ret = exist(fuzhu, strs[i]);
			if (ret<0)
			{
				vector<string> temp;
				temp.push_back(strs[i]);
				ans.push_back(temp);

				tt = strs[i];
				sort(tt.begin(), tt.end());
				fuzhu.push_back(tt);
			}
			else
			{
				ans[ret].push_back(strs[i]);
			}
		}
		return ans;
	}
	int exist(vector<string> &fuzhu, string str)
	{
		int size = fuzhu.size();
		sort(str.begin(), str.end());
		for (int i = 0; i < size; i++)
		{
			if ( str == fuzhu[i])
			{
				return i;
			}
		}
		return -1;
	}
};

*/
