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
	vector<int> findSubstring(string s, vector<string>& words)
	{
		vector<int> ans;
		if (words.empty())
		{
			ans.push_back(0);
			return ans;
		}
		int word_len = words[0].length();
		int word_size = words.size();
		int s_len = s.length();
		int end = s_len - word_len*word_size + 1;
		for (int i = 0; i < end; i++)
		{
			if (find(s, words, i))
			{
				ans.push_back(i);
			}
		}
		return ans;
	}

	bool find(string s, vector<string>& words, int begin)
	{
		int word_len = words[0].length();
		int word_size = words.size();
		vector<string> temp(words);
		int temp_begin = begin;
		int erase_flag = -1;
		int* erase = new int[word_size];
		for (int i = 0; i < word_size; i++)
		{
			erase[i] = 0;
		}
		for (int j = 0; j<word_size; j++)
		{
			string s_temp = s.substr(temp_begin, word_len);
			erase_flag = -1;
			for (int i = 0; i < word_size; i++)
			{
				if (erase[i] != 1 && s_temp == temp[i])
				{
					erase[i] = 1;
					erase_flag = 0;
					temp_begin += word_len;
					break;
				}
			}
			if (erase_flag < 0)
			{
				return false;
			}
		}
		return true;
	}
};
*/