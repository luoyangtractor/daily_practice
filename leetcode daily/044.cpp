#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

// time limit exceeded , 考虑递归开销大，换用while循环
/*
using namespace std;

class Solution {
public:
	bool isMatch(string s, string p) //s没*，p有*
	{
		return digui(s, p, 0, 0);
	}
	bool digui(string s, string p, int s_index, int p_index)
	{
		int s_len = s.length();
		int p_len = p.length();
		if (s_index == (s_len) || p_index == (p_len))
		{
			if (s_index == (s_len) && p_index == (p_len))
			{
				return true;
			}
			else if (s_index == (s_len) && p[p_index] == '*')
			{
				return digui(s, p, s_len, p_index + 1);
			}
			else
			{
				return false;
			}
		}
		else if (p[p_index] == '?')
		{
			return digui(s, p, s_index + 1, p_index + 1);
		}
		else if (p[p_index] == '*')
		{

			int temp = p_index + 1;
			while (temp < p_len && p[temp] == '*')
			{
				temp++;
			}
			if (temp>p_len)
			{
				return true;
			}
			for (int i = s_len - 1; i >= 0; i--)
			{
				if (digui(s, p, s_index + i, temp))
				{
					return true;
				}
			}
			if (digui(s, p, s_len, p_index + 1))
			{
				return true;
			}
			return false;
		}
		else
		{
			return s[s_index] == p[p_index] ? digui(s, p, s_index + 1, p_index + 1) : false;
		}
	}
};

*/