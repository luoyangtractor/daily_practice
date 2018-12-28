#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
class Solution {
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		queue<vector<int>> tmp;
		vector<vector<int>> array(wordList.size(), vector<int>(wordList.size(), 0));

		int start = -1, end = -1;
		for (int i = 0; i < wordList.size(); i++)
		{
			if (match(beginWord, wordList[i]))
			{
				if (wordList[i] == endWord) return 2;
				vector<int> ss{ i };
				tmp.push(ss);
			}
			if (wordList[i] == endWord) end = i;
			for (int j = 0; j < wordList.size(); j++)
			{
				if (match(wordList[i], wordList[j]))array[i][j] = 0;
				else array[i][j] = 1;
			}
		}
		if (end == -1) return 0;
		int min = INT_MAX;
		vector<int> s;
		while (!tmp.empty())
		{
			s = tmp.front();
			tmp.pop();
			if (s.size() + 2 >= min)continue;
			for (int i = 0; i < array.size(); i++)
			{
				if (array[s[s.size() - 1]][i] == 0)
				{
					if (i == end)
					{
						if (s.size() + 2 < min) min = s.size() + 2;
						continue;
					}
					int flag = 0;
					for (int j = 0; j < s.size(); j++)
					{
						if (s[j] == i)
						{
							flag = 1;
							break;
						}
					}
					if (flag == 0)
					{
						vector<int> ss(s);
						ss.push_back(i);
						tmp.push(ss);
					}
				}
			}
		}
		if (min == INT_MAX) return 0;
		return min;
	}
	bool match(string a, string b)
	{
		int tmp = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i]) tmp++;
		}
		if (tmp == 1) return true;
		else return false;
	}
};


int main()
{
	vector<string> t{ "hot", "dot", "dog", "lot", "log", "cog" };
	Solution test;
	test.ladderLength("hit", "cog", t);
	int a;
	while (cin>>a);
	return 0;
}

*/