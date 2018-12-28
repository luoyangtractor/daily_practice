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
	bool isValid(string s) 
	{
		stack<char> temp;
		auto iter = s.begin();
		for (; iter != s.end(); iter++)
		{
			if (*iter == '{' || *iter == '(' || *iter == '[')
			{
				char c = *iter;
				temp.push(c);
			}
			if (*iter == '}' )
			{
				if (temp.empty())
				{
					return false;
				}
				char c = temp.top();
				if (c == '{')
				{
					temp.pop();
				}
				else
				{
					return false;
				}
			}
			else if (*iter == ')')
			{
				if (temp.empty())
				{
					return false;
				}
				char c = temp.top();
				if (c == '(')
				{
					temp.pop();
				}
				else
				{
					return false;
				}
			}
			else if (*iter == ']')
			{
				if (temp.empty())
				{
					return false;
				}
				char c = temp.top();
				if (c == '[')
				{
					temp.pop();
				}
				else
				{
					return false;
				}
			}
		}

		if (temp.empty())
		{
			return true;
		}
		return false;
	}
};
*/
