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
	/*  wrong
	int longestValidParentheses(string s)
	{
		int sum = 0;
		int ans = 0;
		int len = s.length();
		if (len < 2)
		{
			return 0;
		}
		int left_boundry = 0;
		for (int i = 0; i < len - 1; i++)
		{
			if (s[i] == '('&&s[i + 1] == ')')
			{
				int j = i + 1;
				int temp = find_max(s, i, j, left_boundry);
				if (i = -1)
				{
					ans += temp;
				}
				else
				{
					if (temp > ans)
					{
						ans = temp;
					}
				}
				left_boundry = j;
				if (j + 2 >= len - 1)
				{
					break;
				}
				else
				{
					i = j;
				}
			}
		}
		return ans;
	}
	int find_max(string s, int& left_index, int& right_index, int left_boundry )
	{
		int ans = 2;
		int len = s.length();
		while (left_index >= 0 && right_index <= len - 1)
		{
			cout << ans << endl;
			if (right_index + 2 <= len - 1)
			{
				cout << left_index << "  " << right_index << endl;
				if (s[right_index + 1] == '('&&s[right_index + 2] == ')')
				{
					cout << "r:   " << left_index << "  " << right_index << endl;
					ans += 2;
					right_index += 2;
					continue;
				}
			}
			if (left_index - 2 >= 0)
			{
				if (s[left_index - 2] == '('&&s[left_index - 1] == ')')
				{
					cout << "l:   " << left_index << "  " << right_index << endl;
					if (left_index = left_boundry)
					{
						left_index = -1;
						return ans;
					}
					ans += 2;
					left_index -= 2;
					continue;
				}

			}
			if (left_index - 1 >= 0 && right_index + 1 <= len - 1)
			{
				if (s[left_index - 1] == '('&&s[right_index + 1] == ')')
				{
					cout << "m:   " << left_index << "  " << right_index << endl;
					ans += 2;
					left_index -= 1;
					right_index += 1;
					continue;
				}
			}
			break;
		}
		return ans;
	}
	*/


	/* 229test mitery
	int longestValidParentheses(string s)
	{
		int sum = 0;
		int ans = 0;
		int len = s.length();
		if (len < 2)
		{
			return 0;
		}
		int flag = 0;
		for (int i = 0; i < len; i++)
		{
			if (s[i] == ')')
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "wtfwtfwtf";
			return 0;
		}
		stack<int> temp;
		for (int i = 0; i < len - 1; i++)
		{
			if (s[i] == '(')
			{
				int j = 0;
				//cout<<"i j : "<<i<<" "<<j<<endl;
				int res = find_max(s, temp, i, j);
				//cout<<"res i j : "<<res<<" "<<i<<" "<<j<<endl;
				if (ans < res)
				{
					ans = res;
				}
				if (j + 2 > len - 1)
				{
					break;
				}
				else
				{
					i = j;
				}
			}
		}
		return ans;
	}
	int find_max(string s, stack<int> temp, int index, int& next)
	{
		int ans = 0;
		int len = s.length();
		int temp_ans = 0;
		next = index;
		while (index < len)
		{

			if (s[index] == '(')
			{
				temp.push(index);
				index++;
			}
			else
			{
				if (temp.empty())
				{
					return ans;
				}
				//     cout<<index<<endl;
				temp.pop();
				index++;
				temp_ans += 2;
			}
			if (temp.empty())
			{
				//    cout<<index<<endl;
				if (temp_ans>ans)
				{
					ans = temp_ans;
				}
				next = index;
			}
		}
		// cout<<temp_ans<<" "<<ans<<endl;
		if (temp_ans == ans)
		{
			next = len - 2;
			return ans;
		}
		return ans;
	}
	
};
*/